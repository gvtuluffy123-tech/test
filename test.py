import os
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestRegressor
from sklearn.metrics import mean_squared_error, r2_score

# ==============================================================================
# BƯỚC 1: LÀM SẠCH DỮ LIỆU
# ==============================================================================
print("--- [BUOC 1] NHAP VA LAM SACH DU LIEU ---")

base_dir = os.path.dirname(os.path.abspath(__file__))
csv_path = os.path.join(base_dir, 'data.csv')

df = pd.read_csv(csv_path).dropna()

print(f"-> Hoan thanh Buoc 1: Giu lai {len(df)} dong hop le.")

# ==============================================================================
# BƯỚC 2: VẼ VÀ LƯU 4 ĐỒ THỊ PHÂN BỐ RIÊNG BIỆT
# ==============================================================================
print("\n--- [BUOC 2] VE 4 DO THI PHAN BO RIENG ---")

# 1. Đồ thị Nhiệt độ (air_temperature)
plt.figure(figsize=(7, 4.5))
sns.histplot(df['air_temperature'], kde=True, color='red', bins=30)
plt.title("Phan Bo Nhiet Do (air_temperature)")
plt.xlabel("Nhiet do (oC)")
plt.ylabel("So Luong Mau")
plt.grid(True, alpha=0.3)
plt.tight_layout()
plt.savefig("dist_temperature.png")
plt.close()

# 2. Đồ thị Độ ẩm (humidity)
plt.figure(figsize=(7, 4.5))
sns.histplot(df['humidity'], kde=True, color='blue', bins=30)
plt.title("Phan Bo Do Am (humidity)")
plt.xlabel("Do am (%)")
plt.ylabel("So Luong Mau")
plt.grid(True, alpha=0.3)
plt.tight_layout()
plt.savefig("dist_humidity.png")
plt.close()

# 3. Đồ thị CO2 (CO2)
plt.figure(figsize=(7, 4.5))
sns.histplot(df['CO2'], kde=True, color='green', bins=30)
plt.title("Phan Bo Nong Do CO2")
plt.xlabel("CO2 (ppm)")
plt.ylabel("So Luong Mau")
plt.grid(True, alpha=0.3)
plt.tight_layout()
plt.savefig("dist_co2.png")
plt.close()

# 4. Đồ thị PM2.5 (pm2_5)
plt.figure(figsize=(7, 4.5))
sns.histplot(df['pm2_5'], kde=True, color='purple', bins=30)
plt.title("Phan Bo Bui Min PM2.5 (pm2_5)")
plt.xlabel("PM2.5 (ug/m3)")
plt.ylabel("So Luong Mau")
plt.grid(True, alpha=0.3)
plt.tight_layout()
plt.savefig("dist_pm25.png")
plt.close()

# 5. Ma trận tương quan giữa 4 thông số
plt.figure(figsize=(6.5, 5.5))
group_features = ['air_temperature', 'humidity', 'CO2', 'pm2_5',]
corr = df[group_features].corr()
sns.heatmap(corr, annot=True, fmt=".2f", cmap='coolwarm', vmin=-1, vmax=1)
plt.title("Ma Tran Tuong Quan (4 Thong So)")
plt.tight_layout()
plt.savefig("correlation_matrix.png")
plt.close()

print("-> Da xuat xong cac file anh do thi!")

# ==============================================================================
# BƯỚC 3: HUẤN LUYỆN MÔ HÌNH RANDOM FOREST
# ==============================================================================
print("\n--- [BUOC 3] HUAN LUYEN MO HINH ---")

features_in = ['air_temperature', 'humidity', 'CO2']
target_col = 'pm2_5'

X = df[features_in]
y = df[target_col]

X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

model = RandomForestRegressor(n_estimators=10, max_depth=5, random_state=42)
model.fit(X_train, y_train)

y_pred = model.predict(X_test)
rmse = np.sqrt(mean_squared_error(y_test, y_pred))
r2 = r2_score(y_test, y_pred)

print(f"-> Ket qua huan luyen: RMSE = {rmse:.2f}, R2 Score = {r2:.4f}")

# ==============================================================================
# BƯỚC 4: XUẤT CODE C/C++ (MODEL_PM25.H) ĐỂ NHÚNG PHẦN CỨNG
# ==============================================================================
print("\n--- [BUOC 4] XUAT CODE C/C++ ---")

def tree_to_c(tree, feature_names):
    tree_ = tree.tree_
    feature_name = [feature_names[i] if i >= 0 else "undefined!" for i in tree_.feature]

    def recurse(node, depth):
        indent = "  " * depth
        if tree_.feature[node] != -2:
            name = feature_name[node]
            threshold = tree_.threshold[node]
            code = f"{indent}if (inputs[{features_in.index(name)}] <= {threshold:.4f}f) {{\n"
            code += recurse(tree_.children_left[node], depth + 1)
            code += f"{indent}}} else {{\n"
            code += recurse(tree_.children_right[node], depth + 1)
            code += f"{indent}}}\n"
            return code
        else:
            return f"{indent}return {tree_.value[node][0][0]:.4f}f;\n"

    return recurse(0, 1)

c_header = """/*
 * Generated C Model for PM2.5 Prediction (Random Forest)
 * Inputs Order:
 * [0] air_temperature (C)
 * [1] humidity (%)
 * [2] CO2 (ppm)
 */

#ifndef MODEL_PM25_H
#define MODEL_PM25_H

#ifdef __cplusplus
extern "C" {
#endif

"""

for i, tree in enumerate(model.estimators_):
    c_header += f"static float predict_tree_{i}(const float inputs[]) {{\n"
    c_header += tree_to_c(tree, features_in)
    c_header += "}\n\n"

c_header += "static inline float predict_pm25(const float inputs[]) {\n"
c_header += "    float sum = 0.0f;\n"
for i in range(len(model.estimators_)):
    c_header += f"    sum += predict_tree_{i}(inputs);\n"
c_header += f"    return sum / {len(model.estimators_)}.0f;\n"
c_header += "}\n\n"

c_header += """#ifdef __cplusplus
}
#endif

#endif // MODEL_PM25_H
"""

with open('model_pm25.h', 'w', encoding='utf-8') as f:
    f.write(c_header)

print("-> DA HOAN THANH TOAN BO!")
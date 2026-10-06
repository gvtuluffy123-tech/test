import os
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
import streamlit as st

from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestRegressor
from sklearn.metrics import mean_squared_error, r2_score

# ------------------------------------------------------------------------------
# 1. CẤU HÌNH TRANG WEB APP
# ------------------------------------------------------------------------------
st.set_page_config(
    page_title="IoT Environmental Web Dashboard",
    layout="wide",
    initial_sidebar_state="expanded"
)

st.title("🌐 IoT Data Analysis & PM2.5 Prediction Dashboard")
st.write("Bảng điều khiển trực quan hóa dữ liệu môi trường và dự đoán nồng độ bụi mịn PM2.5.")

# ------------------------------------------------------------------------------
# 2. LÀM SẠCH VÀ LOAD DỮ LIỆU
# ------------------------------------------------------------------------------
base_dir = os.path.dirname(os.path.abspath(__file__))
csv_path = os.path.join(base_dir, 'data.csv')

@st.cache_data
def load_data(path):
    if not os.path.exists(path):
        return None
    return pd.read_csv(path).dropna()

df = load_data(csv_path)

if df is None:
    st.error(f"Không tìm thấy file `{csv_path}`. Vui lòng kiểm tra lại đường dẫn!")
    st.stop()

# Hiển thị số liệu tổng quan (Metrics)
st.sidebar.header("⚙️ Thông Tin Dữ Liệu")
st.sidebar.success(f"Tổng số mẫu hợp lệ: **{len(df)}**")

col_m1, col_m2, col_m3, col_m4 = st.columns(4)
col_m1.metric("Nhiệt độ trung bình", f"{df['air_temperature'].mean():.1f} °C")
col_m2.metric("Độ ẩm trung bình", f"{df['humidity'].mean():.1f} %")
col_m3.metric("CO2 trung bình", f"{df['CO2'].mean():.0f} ppm")
col_m4.metric("PM2.5 trung bình", f"{df['pm2_5'].mean():.1f} µg/m³")

st.divider()

# ------------------------------------------------------------------------------
# 3. TRỰC QUAN HÓA DỮ LIỆU (WEBSITE DASHBOARD)
# ------------------------------------------------------------------------------
st.subheader("📊 Phân Tích & Biểu Đồ Phân Bố Dữ Liệu")

# Hàng 1: Ma trận tương quan & Phân bố nhiệt độ
col1, col2 = st.columns(2)

with col1:
    st.write("#### Ma Trận Tương Quan")
    fig1, ax1 = plt.subplots(figsize=(6, 4.5))
    group_features = ['air_temperature', 'humidity', 'CO2', 'pm2_5']
    corr = df[group_features].corr()
    sns.heatmap(corr, annot=True, fmt=".2f", cmap='coolwarm', vmin=-1, vmax=1, ax=ax1)
    ax1.set_title("Ma Tran Tuong Quan (4 Thong So)")
    plt.tight_layout()
    st.pyplot(fig1)

with col2:
    st.write("#### Phân Bố Nhiệt Độ")
    fig2, ax2 = plt.subplots(figsize=(6, 4.5))
    sns.histplot(df['air_temperature'], kde=True, color='red', bins=30, ax=ax2)
    ax2.set_title("Phan Bo Nhiet Do (air_temperature)")
    ax2.set_xlabel("Nhiet do (oC)")
    ax2.set_ylabel("So Luong Mau")
    ax2.grid(True, alpha=0.3)
    plt.tight_layout()
    st.pyplot(fig2)

# Hàng 2: Phân bố Độ ẩm, CO2, PM2.5
col3, col4, col5 = st.columns(3)

with col3:
    st.write("#### Phân Bố Độ Ẩm")
    fig3, ax3 = plt.subplots(figsize=(5, 4))
    sns.histplot(df['humidity'], kde=True, color='blue', bins=30, ax=ax3)
    ax3.set_title("Phan Bo Do Am (humidity)")
    ax3.set_xlabel("Do am (%)")
    ax3.grid(True, alpha=0.3)
    plt.tight_layout()
    st.pyplot(fig3)

with col4:
    st.write("#### Phân Bố CO2")
    fig4, ax4 = plt.subplots(figsize=(5, 4))
    sns.histplot(df['CO2'], kde=True, color='green', bins=30, ax=ax4)
    ax4.set_title("Phan Bo Nong Do CO2")
    ax4.set_xlabel("CO2 (ppm)")
    ax4.grid(True, alpha=0.3)
    plt.tight_layout()
    st.pyplot(fig4)

with col5:
    st.write("#### Phân Bố PM2.5")
    fig5, ax5 = plt.subplots(figsize=(5, 4))
    sns.histplot(df['pm2_5'], kde=True, color='purple', bins=30, ax=ax5)
    ax5.set_title("Phan Bo Bui Min PM2.5")
    ax5.set_xlabel("PM2.5 (ug/m3)")
    ax5.grid(True, alpha=0.3)
    plt.tight_layout()
    st.pyplot(fig5)

st.divider()

# ------------------------------------------------------------------------------
# 4. HUẤN LUYỆN MÔ HÌNH & DỰ ĐOÁN TRỰC TIẾP TRÊN WEB
# ------------------------------------------------------------------------------
st.subheader("🤖 Dự Đoán PM2.5 Trực Tiếp (Random Forest)")

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

st.info(f"Đánh giá mô hình: **RMSE** = `{rmse:.2f}` | **R² Score** = `{r2:.4f}`")

# Thanh điều chỉnh thông số đầu vào để thử nghiệm dự đoán
st.write("##### Thử nghiệm nhập thông số môi trường:")
col_in1, col_in2, col_in3 = st.columns(3)

temp_input = col_in1.number_input("Nhiệt độ (°C)", value=float(df['air_temperature'].mean()))
hum_input = col_in2.number_input("Độ ẩm (%)", value=float(df['humidity'].mean()))
co2_input = col_in3.number_input("Nồng độ CO2 (ppm)", value=float(df['CO2'].mean()))

if st.button("🔮 Dự đoán PM2.5"):
    input_data = np.array([[temp_input, hum_input, co2_input]])
    pred_val = model.predict(input_data)[0]
    st.success(f"Giá trị PM2.5 dự đoán: **{pred_val:.2f} µg/m³**")
/*
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

static float predict_tree_0(const float inputs[]) {
  if (inputs[0] <= 23.6550f) {
    if (inputs[1] <= 60.6550f) {
      if (inputs[2] <= 475.5000f) {
        if (inputs[2] <= 430.5000f) {
          if (inputs[1] <= 57.6250f) {
            return 87.1135f;
          } else {
            return 111.6013f;
          }
        } else {
          if (inputs[1] <= 57.1750f) {
            return 100.1123f;
          } else {
            return 146.0144f;
          }
        }
      } else {
        if (inputs[1] <= 60.2150f) {
          if (inputs[1] <= 52.8150f) {
            return 76.1070f;
          } else {
            return 58.8380f;
          }
        } else {
          if (inputs[0] <= 23.5350f) {
            return 79.6443f;
          } else {
            return 166.8621f;
          }
        }
      }
    } else {
      if (inputs[2] <= 1087.0000f) {
        if (inputs[0] <= 20.4650f) {
          if (inputs[1] <= 67.9000f) {
            return 159.2235f;
          } else {
            return 102.0437f;
          }
        } else {
          if (inputs[1] <= 75.5100f) {
            return 174.7294f;
          } else {
            return 249.6000f;
          }
        }
      } else {
        if (inputs[1] <= 78.4700f) {
          if (inputs[1] <= 67.1500f) {
            return 90.1037f;
          } else {
            return 123.8161f;
          }
        } else {
          if (inputs[0] <= 22.3800f) {
            return 265.0686f;
          } else {
            return 111.1062f;
          }
        }
      }
    }
  } else {
    if (inputs[1] <= 69.8750f) {
      if (inputs[0] <= 26.2750f) {
        if (inputs[2] <= 628.5000f) {
          if (inputs[1] <= 52.2550f) {
            return 74.0764f;
          } else {
            return 111.1905f;
          }
        } else {
          if (inputs[1] <= 62.7550f) {
            return 70.0886f;
          } else {
            return 90.7110f;
          }
        }
      } else {
        if (inputs[2] <= 403.5000f) {
          if (inputs[1] <= 36.1200f) {
            return 61.0231f;
          } else {
            return 102.6849f;
          }
        } else {
          if (inputs[1] <= 44.8850f) {
            return 72.3844f;
          } else {
            return 59.9056f;
          }
        }
      }
    } else {
      if (inputs[2] <= 1553.0000f) {
        if (inputs[0] <= 27.4850f) {
          if (inputs[1] <= 77.9950f) {
            return 30.5326f;
          } else {
            return 39.8410f;
          }
        } else {
          if (inputs[1] <= 77.0150f) {
            return 42.7118f;
          } else {
            return 52.2773f;
          }
        }
      } else {
        if (inputs[0] <= 26.7200f) {
          if (inputs[1] <= 81.6750f) {
            return 117.0205f;
          } else {
            return 204.9875f;
          }
        } else {
          if (inputs[2] <= 2489.5000f) {
            return 30.0214f;
          } else {
            return 106.2000f;
          }
        }
      }
    }
  }
}

static float predict_tree_1(const float inputs[]) {
  if (inputs[0] <= 23.7350f) {
    if (inputs[1] <= 60.6650f) {
      if (inputs[2] <= 475.5000f) {
        if (inputs[1] <= 57.6300f) {
          if (inputs[0] <= 22.4800f) {
            return 112.1300f;
          } else {
            return 82.0327f;
          }
        } else {
          if (inputs[2] <= 431.5000f) {
            return 112.4753f;
          } else {
            return 145.2911f;
          }
        }
      } else {
        if (inputs[0] <= 23.5450f) {
          if (inputs[1] <= 52.7600f) {
            return 75.9995f;
          } else {
            return 57.6363f;
          }
        } else {
          if (inputs[1] <= 60.0700f) {
            return 82.7294f;
          } else {
            return 168.0596f;
          }
        }
      }
    } else {
      if (inputs[2] <= 962.5000f) {
        if (inputs[0] <= 20.4650f) {
          if (inputs[1] <= 67.9050f) {
            return 156.6746f;
          } else {
            return 100.6503f;
          }
        } else {
          if (inputs[1] <= 75.5100f) {
            return 176.0765f;
          } else {
            return 247.7083f;
          }
        }
      } else {
        if (inputs[1] <= 78.0700f) {
          if (inputs[2] <= 1505.0000f) {
            return 132.3736f;
          } else {
            return 103.6341f;
          }
        } else {
          if (inputs[0] <= 22.3850f) {
            return 266.2000f;
          } else {
            return 109.9587f;
          }
        }
      }
    }
  } else {
    if (inputs[1] <= 69.7650f) {
      if (inputs[0] <= 26.2250f) {
        if (inputs[2] <= 542.5000f) {
          if (inputs[1] <= 51.1550f) {
            return 77.0969f;
          } else {
            return 112.0114f;
          }
        } else {
          if (inputs[1] <= 62.7600f) {
            return 71.8055f;
          } else {
            return 94.0093f;
          }
        }
      } else {
        if (inputs[2] <= 400.5000f) {
          if (inputs[1] <= 35.5650f) {
            return 51.2515f;
          } else {
            return 106.6717f;
          }
        } else {
          if (inputs[1] <= 44.9150f) {
            return 72.6138f;
          } else {
            return 60.4526f;
          }
        }
      }
    } else {
      if (inputs[2] <= 1465.5000f) {
        if (inputs[0] <= 27.5150f) {
          if (inputs[1] <= 78.3100f) {
            return 30.3051f;
          } else {
            return 40.3772f;
          }
        } else {
          if (inputs[1] <= 76.6150f) {
            return 41.9603f;
          } else {
            return 51.5367f;
          }
        }
      } else {
        if (inputs[0] <= 26.7100f) {
          if (inputs[1] <= 81.5300f) {
            return 119.2964f;
          } else {
            return 202.5875f;
          }
        } else {
          if (inputs[2] <= 2489.5000f) {
            return 29.0000f;
          } else {
            return 106.2000f;
          }
        }
      }
    }
  }
}

static float predict_tree_2(const float inputs[]) {
  if (inputs[0] <= 23.6850f) {
    if (inputs[1] <= 60.6650f) {
      if (inputs[2] <= 478.5000f) {
        if (inputs[1] <= 57.6900f) {
          if (inputs[1] <= 51.8600f) {
            return 105.5891f;
          } else {
            return 82.5554f;
          }
        } else {
          if (inputs[2] <= 430.5000f) {
            return 111.9007f;
          } else {
            return 142.8270f;
          }
        }
      } else {
        if (inputs[0] <= 23.5450f) {
          if (inputs[1] <= 52.9850f) {
            return 76.3953f;
          } else {
            return 56.4358f;
          }
        } else {
          if (inputs[1] <= 59.8000f) {
            return 75.8966f;
          } else {
            return 167.1000f;
          }
        }
      }
    } else {
      if (inputs[2] <= 961.5000f) {
        if (inputs[0] <= 20.4650f) {
          if (inputs[1] <= 67.9050f) {
            return 155.5426f;
          } else {
            return 102.6982f;
          }
        } else {
          if (inputs[1] <= 75.5100f) {
            return 174.8662f;
          } else {
            return 246.8991f;
          }
        }
      } else {
        if (inputs[1] <= 78.5450f) {
          if (inputs[1] <= 62.4550f) {
            return 66.5348f;
          } else {
            return 120.2029f;
          }
        } else {
          if (inputs[0] <= 22.5300f) {
            return 265.6868f;
          } else {
            return 125.8015f;
          }
        }
      }
    }
  } else {
    if (inputs[1] <= 69.5150f) {
      if (inputs[0] <= 26.2150f) {
        if (inputs[2] <= 529.5000f) {
          if (inputs[1] <= 51.6600f) {
            return 77.7529f;
          } else {
            return 114.6521f;
          }
        } else {
          if (inputs[1] <= 62.7400f) {
            return 72.9491f;
          } else {
            return 92.5614f;
          }
        }
      } else {
        if (inputs[2] <= 400.5000f) {
          if (inputs[1] <= 36.1100f) {
            return 56.0680f;
          } else {
            return 108.2151f;
          }
        } else {
          if (inputs[1] <= 44.8850f) {
            return 72.1808f;
          } else {
            return 60.9749f;
          }
        }
      }
    } else {
      if (inputs[2] <= 1465.5000f) {
        if (inputs[0] <= 27.4950f) {
          if (inputs[0] <= 23.9500f) {
            return 101.6313f;
          } else {
            return 32.9627f;
          }
        } else {
          if (inputs[1] <= 76.6350f) {
            return 42.1768f;
          } else {
            return 51.8891f;
          }
        }
      } else {
        if (inputs[0] <= 26.8950f) {
          if (inputs[1] <= 81.9500f) {
            return 116.4593f;
          } else {
            return 198.7000f;
          }
        } else {
          if (inputs[0] <= 27.1350f) {
            return 37.0500f;
          } else {
            return 25.0714f;
          }
        }
      }
    }
  }
}

static float predict_tree_3(const float inputs[]) {
  if (inputs[0] <= 23.7550f) {
    if (inputs[1] <= 60.6850f) {
      if (inputs[2] <= 467.5000f) {
        if (inputs[2] <= 429.5000f) {
          if (inputs[1] <= 58.0550f) {
            return 89.5681f;
          } else {
            return 112.0106f;
          }
        } else {
          if (inputs[1] <= 57.6400f) {
            return 106.2687f;
          } else {
            return 145.0581f;
          }
        }
      } else {
        if (inputs[0] <= 23.5450f) {
          if (inputs[1] <= 53.0050f) {
            return 77.0078f;
          } else {
            return 60.0423f;
          }
        } else {
          if (inputs[1] <= 60.0350f) {
            return 87.2840f;
          } else {
            return 159.0789f;
          }
        }
      }
    } else {
      if (inputs[2] <= 918.5000f) {
        if (inputs[0] <= 20.4650f) {
          if (inputs[1] <= 67.9000f) {
            return 157.4704f;
          } else {
            return 101.2955f;
          }
        } else {
          if (inputs[1] <= 75.2400f) {
            return 175.4787f;
          } else {
            return 247.5221f;
          }
        }
      } else {
        if (inputs[1] <= 78.0250f) {
          if (inputs[2] <= 1436.5000f) {
            return 136.5031f;
          } else {
            return 103.8814f;
          }
        } else {
          if (inputs[0] <= 22.4700f) {
            return 264.3556f;
          } else {
            return 108.0289f;
          }
        }
      }
    }
  } else {
    if (inputs[1] <= 69.9150f) {
      if (inputs[0] <= 26.1950f) {
        if (inputs[2] <= 547.5000f) {
          if (inputs[1] <= 42.6350f) {
            return 55.7774f;
          } else {
            return 109.7239f;
          }
        } else {
          if (inputs[1] <= 62.7600f) {
            return 72.2653f;
          } else {
            return 93.1661f;
          }
        }
      } else {
        if (inputs[2] <= 400.5000f) {
          if (inputs[1] <= 36.1100f) {
            return 56.9080f;
          } else {
            return 107.6107f;
          }
        } else {
          if (inputs[1] <= 40.9750f) {
            return 74.3075f;
          } else {
            return 63.0651f;
          }
        }
      }
    } else {
      if (inputs[2] <= 1463.5000f) {
        if (inputs[0] <= 27.4850f) {
          if (inputs[0] <= 25.7550f) {
            return 48.2490f;
          } else {
            return 31.0600f;
          }
        } else {
          if (inputs[1] <= 76.6350f) {
            return 41.8595f;
          } else {
            return 51.7989f;
          }
        }
      } else {
        if (inputs[0] <= 26.8950f) {
          if (inputs[1] <= 81.6050f) {
            return 117.4409f;
          } else {
            return 209.1167f;
          }
        } else {
          if (inputs[2] <= 1743.0000f) {
            return 37.5667f;
          } else {
            return 24.9500f;
          }
        }
      }
    }
  }
}

static float predict_tree_4(const float inputs[]) {
  if (inputs[0] <= 23.7050f) {
    if (inputs[1] <= 60.4250f) {
      if (inputs[2] <= 478.5000f) {
        if (inputs[1] <= 57.6450f) {
          if (inputs[0] <= 23.5050f) {
            return 86.2946f;
          } else {
            return 114.2971f;
          }
        } else {
          if (inputs[2] <= 427.5000f) {
            return 108.9161f;
          } else {
            return 141.0844f;
          }
        }
      } else {
        if (inputs[0] <= 23.5450f) {
          if (inputs[1] <= 52.6250f) {
            return 77.0526f;
          } else {
            return 56.8341f;
          }
        } else {
          if (inputs[1] <= 59.4200f) {
            return 84.5571f;
          } else {
            return 157.0333f;
          }
        }
      }
    } else {
      if (inputs[2] <= 962.5000f) {
        if (inputs[0] <= 20.4650f) {
          if (inputs[1] <= 67.9050f) {
            return 153.4900f;
          } else {
            return 101.1517f;
          }
        } else {
          if (inputs[1] <= 75.5100f) {
            return 174.9112f;
          } else {
            return 245.1674f;
          }
        }
      } else {
        if (inputs[1] <= 78.0950f) {
          if (inputs[2] <= 1477.5000f) {
            return 128.5829f;
          } else {
            return 101.3871f;
          }
        } else {
          if (inputs[0] <= 22.5300f) {
            return 263.9855f;
          } else {
            return 99.3100f;
          }
        }
      }
    }
  } else {
    if (inputs[1] <= 68.6050f) {
      if (inputs[0] <= 26.2350f) {
        if (inputs[2] <= 544.5000f) {
          if (inputs[1] <= 51.6600f) {
            return 75.8960f;
          } else {
            return 114.9028f;
          }
        } else {
          if (inputs[1] <= 62.6750f) {
            return 71.7206f;
          } else {
            return 90.8052f;
          }
        }
      } else {
        if (inputs[2] <= 400.5000f) {
          if (inputs[1] <= 36.1100f) {
            return 58.0877f;
          } else {
            return 107.9841f;
          }
        } else {
          if (inputs[1] <= 40.1950f) {
            return 76.0682f;
          } else {
            return 63.7651f;
          }
        }
      }
    } else {
      if (inputs[2] <= 1252.0000f) {
        if (inputs[0] <= 27.4750f) {
          if (inputs[1] <= 71.0650f) {
            return 46.9225f;
          } else {
            return 31.4400f;
          }
        } else {
          if (inputs[1] <= 76.6450f) {
            return 42.8969f;
          } else {
            return 51.7273f;
          }
        }
      } else {
        if (inputs[0] <= 25.8000f) {
          if (inputs[1] <= 69.3450f) {
            return 83.7702f;
          } else {
            return 123.8308f;
          }
        } else {
          if (inputs[0] <= 26.7800f) {
            return 82.6861f;
          } else {
            return 30.5348f;
          }
        }
      }
    }
  }
}

static float predict_tree_5(const float inputs[]) {
  if (inputs[0] <= 23.7150f) {
    if (inputs[1] <= 60.7050f) {
      if (inputs[2] <= 474.5000f) {
        if (inputs[1] <= 57.6500f) {
          if (inputs[0] <= 22.5150f) {
            return 112.5361f;
          } else {
            return 85.5619f;
          }
        } else {
          if (inputs[2] <= 424.5000f) {
            return 109.2130f;
          } else {
            return 138.2938f;
          }
        }
      } else {
        if (inputs[0] <= 23.5450f) {
          if (inputs[1] <= 52.5850f) {
            return 78.4904f;
          } else {
            return 56.3100f;
          }
        } else {
          if (inputs[1] <= 59.8100f) {
            return 85.1595f;
          } else {
            return 151.1727f;
          }
        }
      }
    } else {
      if (inputs[2] <= 963.0000f) {
        if (inputs[0] <= 20.4650f) {
          if (inputs[1] <= 67.9000f) {
            return 156.2400f;
          } else {
            return 100.9522f;
          }
        } else {
          if (inputs[1] <= 75.5100f) {
            return 176.3145f;
          } else {
            return 247.2977f;
          }
        }
      } else {
        if (inputs[1] <= 78.3850f) {
          if (inputs[2] <= 1489.0000f) {
            return 133.6846f;
          } else {
            return 102.8065f;
          }
        } else {
          if (inputs[0] <= 22.5400f) {
            return 267.8461f;
          } else {
            return 107.1485f;
          }
        }
      }
    }
  } else {
    if (inputs[1] <= 69.4250f) {
      if (inputs[0] <= 26.2250f) {
        if (inputs[2] <= 543.5000f) {
          if (inputs[1] <= 51.6650f) {
            return 75.9387f;
          } else {
            return 114.4198f;
          }
        } else {
          if (inputs[1] <= 62.7600f) {
            return 72.6335f;
          } else {
            return 92.8324f;
          }
        }
      } else {
        if (inputs[2] <= 401.5000f) {
          if (inputs[1] <= 35.5650f) {
            return 54.7927f;
          } else {
            return 105.6110f;
          }
        } else {
          if (inputs[1] <= 40.1750f) {
            return 75.5544f;
          } else {
            return 63.2289f;
          }
        }
      }
    } else {
      if (inputs[2] <= 1464.0000f) {
        if (inputs[0] <= 27.5150f) {
          if (inputs[0] <= 23.9550f) {
            return 90.7611f;
          } else {
            return 32.9599f;
          }
        } else {
          if (inputs[1] <= 77.4150f) {
            return 42.6569f;
          } else {
            return 53.1130f;
          }
        }
      } else {
        if (inputs[0] <= 26.7100f) {
          if (inputs[2] <= 2690.0000f) {
            return 130.4074f;
          } else {
            return 101.5505f;
          }
        } else {
          if (inputs[2] <= 2489.5000f) {
            return 30.9000f;
          } else {
            return 106.2000f;
          }
        }
      }
    }
  }
}

static float predict_tree_6(const float inputs[]) {
  if (inputs[0] <= 23.7850f) {
    if (inputs[1] <= 60.6550f) {
      if (inputs[2] <= 475.5000f) {
        if (inputs[1] <= 57.5050f) {
          if (inputs[0] <= 22.4450f) {
            return 110.4635f;
          } else {
            return 83.6458f;
          }
        } else {
          if (inputs[2] <= 429.5000f) {
            return 113.4889f;
          } else {
            return 145.4464f;
          }
        }
      } else {
        if (inputs[0] <= 23.5450f) {
          if (inputs[1] <= 53.0050f) {
            return 76.7314f;
          } else {
            return 60.1777f;
          }
        } else {
          if (inputs[1] <= 60.0350f) {
            return 88.4472f;
          } else {
            return 158.1079f;
          }
        }
      }
    } else {
      if (inputs[2] <= 993.5000f) {
        if (inputs[1] <= 74.5650f) {
          if (inputs[0] <= 20.8100f) {
            return 120.3246f;
          } else {
            return 174.9927f;
          }
        } else {
          if (inputs[2] <= 479.0000f) {
            return 35.6000f;
          } else {
            return 248.6584f;
          }
        }
      } else {
        if (inputs[1] <= 77.9950f) {
          if (inputs[2] <= 1657.5000f) {
            return 124.4228f;
          } else {
            return 97.2734f;
          }
        } else {
          if (inputs[0] <= 22.3800f) {
            return 264.2883f;
          } else {
            return 111.2684f;
          }
        }
      }
    }
  } else {
    if (inputs[1] <= 69.5650f) {
      if (inputs[0] <= 26.2150f) {
        if (inputs[2] <= 654.5000f) {
          if (inputs[1] <= 51.6500f) {
            return 72.2790f;
          } else {
            return 111.8335f;
          }
        } else {
          if (inputs[1] <= 62.7550f) {
            return 68.2174f;
          } else {
            return 94.7334f;
          }
        }
      } else {
        if (inputs[1] <= 52.1650f) {
          if (inputs[0] <= 32.0350f) {
            return 80.7308f;
          } else {
            return 62.5788f;
          }
        } else {
          if (inputs[2] <= 575.5000f) {
            return 61.3125f;
          } else {
            return 48.3655f;
          }
        }
      }
    } else {
      if (inputs[2] <= 1403.5000f) {
        if (inputs[0] <= 27.5150f) {
          if (inputs[1] <= 71.0850f) {
            return 44.4373f;
          } else {
            return 31.2109f;
          }
        } else {
          if (inputs[1] <= 76.6250f) {
            return 42.1102f;
          } else {
            return 51.5852f;
          }
        }
      } else {
        if (inputs[0] <= 26.9000f) {
          if (inputs[1] <= 82.2550f) {
            return 115.0875f;
          } else {
            return 223.2000f;
          }
        } else {
          if (inputs[2] <= 1780.0000f) {
            return 38.4750f;
          } else {
            return 25.5000f;
          }
        }
      }
    }
  }
}

static float predict_tree_7(const float inputs[]) {
  if (inputs[0] <= 23.7050f) {
    if (inputs[1] <= 60.6750f) {
      if (inputs[2] <= 474.5000f) {
        if (inputs[1] <= 58.6550f) {
          if (inputs[2] <= 441.5000f) {
            return 94.5092f;
          } else {
            return 123.2371f;
          }
        } else {
          if (inputs[2] <= 432.5000f) {
            return 116.8706f;
          } else {
            return 149.2103f;
          }
        }
      } else {
        if (inputs[0] <= 23.5450f) {
          if (inputs[1] <= 52.5550f) {
            return 75.5579f;
          } else {
            return 59.1533f;
          }
        } else {
          if (inputs[1] <= 59.9650f) {
            return 88.0717f;
          } else {
            return 174.7732f;
          }
        }
      }
    } else {
      if (inputs[2] <= 1087.0000f) {
        if (inputs[0] <= 20.4350f) {
          if (inputs[1] <= 67.9100f) {
            return 156.2314f;
          } else {
            return 99.3484f;
          }
        } else {
          if (inputs[1] <= 75.5100f) {
            return 173.9187f;
          } else {
            return 243.5795f;
          }
        }
      } else {
        if (inputs[1] <= 78.4300f) {
          if (inputs[1] <= 66.9350f) {
            return 92.7592f;
          } else {
            return 123.0484f;
          }
        } else {
          if (inputs[0] <= 22.5300f) {
            return 266.4261f;
          } else {
            return 114.0000f;
          }
        }
      }
    }
  } else {
    if (inputs[1] <= 69.6050f) {
      if (inputs[0] <= 26.2150f) {
        if (inputs[2] <= 628.5000f) {
          if (inputs[1] <= 51.6650f) {
            return 71.6151f;
          } else {
            return 113.7465f;
          }
        } else {
          if (inputs[1] <= 62.7550f) {
            return 68.5999f;
          } else {
            return 92.3733f;
          }
        }
      } else {
        if (inputs[1] <= 52.7300f) {
          if (inputs[0] <= 32.0350f) {
            return 81.4263f;
          } else {
            return 61.8843f;
          }
        } else {
          if (inputs[2] <= 539.5000f) {
            return 61.4212f;
          } else {
            return 48.9110f;
          }
        }
      }
    } else {
      if (inputs[2] <= 1564.5000f) {
        if (inputs[0] <= 27.5250f) {
          if (inputs[2] <= 1136.5000f) {
            return 32.6971f;
          } else {
            return 70.2929f;
          }
        } else {
          if (inputs[1] <= 76.6350f) {
            return 42.0833f;
          } else {
            return 51.8506f;
          }
        }
      } else {
        if (inputs[0] <= 26.0450f) {
          if (inputs[1] <= 81.9750f) {
            return 114.7378f;
          } else {
            return 209.6375f;
          }
        } else {
          if (inputs[2] <= 2258.5000f) {
            return 34.9765f;
          } else {
            return 109.0000f;
          }
        }
      }
    }
  }
}

static float predict_tree_8(const float inputs[]) {
  if (inputs[0] <= 23.7250f) {
    if (inputs[1] <= 60.6650f) {
      if (inputs[2] <= 464.5000f) {
        if (inputs[2] <= 430.5000f) {
          if (inputs[1] <= 58.1050f) {
            return 89.6792f;
          } else {
            return 113.1848f;
          }
        } else {
          if (inputs[1] <= 57.6400f) {
            return 97.9145f;
          } else {
            return 146.5294f;
          }
        }
      } else {
        if (inputs[0] <= 23.5450f) {
          if (inputs[1] <= 52.6150f) {
            return 78.3224f;
          } else {
            return 59.0727f;
          }
        } else {
          if (inputs[1] <= 59.8500f) {
            return 86.4561f;
          } else {
            return 158.2500f;
          }
        }
      }
    } else {
      if (inputs[2] <= 993.5000f) {
        if (inputs[0] <= 20.4650f) {
          if (inputs[1] <= 67.7600f) {
            return 150.1435f;
          } else {
            return 101.6385f;
          }
        } else {
          if (inputs[1] <= 75.5100f) {
            return 175.4933f;
          } else {
            return 248.3704f;
          }
        }
      } else {
        if (inputs[1] <= 78.3850f) {
          if (inputs[2] <= 1727.0000f) {
            return 126.0010f;
          } else {
            return 99.0627f;
          }
        } else {
          if (inputs[0] <= 22.5300f) {
            return 265.8014f;
          } else {
            return 108.7013f;
          }
        }
      }
    }
  } else {
    if (inputs[1] <= 69.3250f) {
      if (inputs[0] <= 26.2250f) {
        if (inputs[2] <= 651.5000f) {
          if (inputs[1] <= 51.4700f) {
            return 72.1492f;
          } else {
            return 110.2743f;
          }
        } else {
          if (inputs[1] <= 62.7550f) {
            return 68.3971f;
          } else {
            return 92.0163f;
          }
        }
      } else {
        if (inputs[1] <= 57.0600f) {
          if (inputs[0] <= 31.9750f) {
            return 80.2593f;
          } else {
            return 62.1340f;
          }
        } else {
          if (inputs[2] <= 576.0000f) {
            return 60.7446f;
          } else {
            return 43.7879f;
          }
        }
      }
    } else {
      if (inputs[2] <= 1463.5000f) {
        if (inputs[0] <= 27.5150f) {
          if (inputs[1] <= 70.7850f) {
            return 48.8780f;
          } else {
            return 31.8117f;
          }
        } else {
          if (inputs[1] <= 77.0150f) {
            return 42.5994f;
          } else {
            return 51.8904f;
          }
        }
      } else {
        if (inputs[0] <= 26.7200f) {
          if (inputs[2] <= 2678.0000f) {
            return 130.6808f;
          } else {
            return 100.2078f;
          }
        } else {
          if (inputs[1] <= 80.9850f) {
            return 25.2000f;
          } else {
            return 37.9000f;
          }
        }
      }
    }
  }
}

static float predict_tree_9(const float inputs[]) {
  if (inputs[0] <= 23.7550f) {
    if (inputs[1] <= 60.6350f) {
      if (inputs[2] <= 470.5000f) {
        if (inputs[1] <= 58.5150f) {
          if (inputs[0] <= 22.9950f) {
            return 114.2914f;
          } else {
            return 90.7315f;
          }
        } else {
          if (inputs[2] <= 428.5000f) {
            return 113.8218f;
          } else {
            return 146.8890f;
          }
        }
      } else {
        if (inputs[0] <= 23.5550f) {
          if (inputs[1] <= 52.8150f) {
            return 76.7572f;
          } else {
            return 56.9766f;
          }
        } else {
          if (inputs[1] <= 60.0350f) {
            return 89.2972f;
          } else {
            return 162.2140f;
          }
        }
      }
    } else {
      if (inputs[2] <= 993.5000f) {
        if (inputs[0] <= 20.4650f) {
          if (inputs[1] <= 67.9000f) {
            return 145.8714f;
          } else {
            return 102.0905f;
          }
        } else {
          if (inputs[1] <= 75.0850f) {
            return 176.5037f;
          } else {
            return 247.4155f;
          }
        }
      } else {
        if (inputs[1] <= 77.3450f) {
          if (inputs[1] <= 64.5850f) {
            return 83.7098f;
          } else {
            return 123.3341f;
          }
        } else {
          if (inputs[0] <= 22.2050f) {
            return 264.4723f;
          } else {
            return 112.4982f;
          }
        }
      }
    }
  } else {
    if (inputs[1] <= 69.5150f) {
      if (inputs[0] <= 26.2350f) {
        if (inputs[2] <= 624.5000f) {
          if (inputs[1] <= 51.2800f) {
            return 73.1638f;
          } else {
            return 113.3691f;
          }
        } else {
          if (inputs[1] <= 62.7550f) {
            return 67.7613f;
          } else {
            return 94.7193f;
          }
        }
      } else {
        if (inputs[0] <= 32.0350f) {
          if (inputs[1] <= 42.8550f) {
            return 87.3602f;
          } else {
            return 64.1860f;
          }
        } else {
          if (inputs[1] <= 37.3250f) {
            return 72.2808f;
          } else {
            return 56.6811f;
          }
        }
      }
    } else {
      if (inputs[2] <= 1553.0000f) {
        if (inputs[0] <= 27.5050f) {
          if (inputs[2] <= 1225.5000f) {
            return 33.2492f;
          } else {
            return 73.8186f;
          }
        } else {
          if (inputs[1] <= 76.8950f) {
            return 42.4355f;
          } else {
            return 52.1727f;
          }
        }
      } else {
        if (inputs[0] <= 25.6150f) {
          if (inputs[2] <= 2665.0000f) {
            return 137.4470f;
          } else {
            return 106.2129f;
          }
        } else {
          if (inputs[2] <= 2307.0000f) {
            return 45.7211f;
          } else {
            return 109.7625f;
          }
        }
      }
    }
  }
}

static inline float predict_pm25(const float inputs[]) {
    float sum = 0.0f;
    sum += predict_tree_0(inputs);
    sum += predict_tree_1(inputs);
    sum += predict_tree_2(inputs);
    sum += predict_tree_3(inputs);
    sum += predict_tree_4(inputs);
    sum += predict_tree_5(inputs);
    sum += predict_tree_6(inputs);
    sum += predict_tree_7(inputs);
    sum += predict_tree_8(inputs);
    sum += predict_tree_9(inputs);
    return sum / 10.0f;
}

#ifdef __cplusplus
}
#endif

#endif // MODEL_PM25_H

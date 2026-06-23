<div align="center">
  <img src="https://img.shields.io/badge/SynF--X-NOVA-9945ff?style=flat-square&logo=rocket" alt="SynF-X Logo"/>
</div>

<h1 align="center">
  <br/>
  ✨━━ ■ Nova ■ ━━ ✨
</h1>

<p align="center">
  <strong>🦾 NEURAL-CONTROLLED BIONIC PROSTHETIC HAND</strong>
  <br/>
  <em>تبدیل سیگنال‌های دهشی به شرکت واقعی</em>
  <br/>
  <em>Mind → Signal → Motion</em>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Status-In%20Development-yellow?style=flat-square" alt="Status"/>
  <img src="https://img.shields.io/badge/Language-C%2B%2B-00599C?style=flat-square&logo=c%2B%2B" alt="Language"/>
  <img src="https://img.shields.io/badge/License-MIT-green?style=flat-square" alt="License"/>
</p>

---

## 📋 About Project

پروژه **SynF-X** یک پروژه تحقیقی و توسعه‌ای در حوزه **رباتیک‌پزشکی** و **بیوالکترونیکس** است. این سیستم از طریق تشخیص سیگنال‌های الکتریکی عضلات (EMG)، یک دست مصنوعی هوشمند را کنترل می‌کند.

**This system converts neural signals into precise robotic movements, creating a seamless connection between mind and machine.**

---

## 🔧 System Architecture

<p align="center">
  <img src="https://img.shields.io/badge/INPUT-EMG%20Sensors-blue?style=flat-square" alt="INPUT"/>
  →
  <img src="https://img.shields.io/badge/PROCESSING-Signal%20Analysis-purple?style=flat-square" alt="PROCESSING"/>
  →
  <img src="https://img.shields.io/badge/CONTROL-Algorithm-orange?style=flat-square" alt="CONTROL"/>
  →
  <img src="https://img.shields.io/badge/ACTUATION-Servo%20Motors-red?style=flat-square" alt="ACTUATION"/>
  →
  <img src="https://img.shields.io/badge/OUTPUT-Bionic%20Hand-green?style=flat-square" alt="OUTPUT"/>
</p>

---

## ⚙️ Components & Specifications

### 🧠 Mechanical
- **3D Printed Structure** (PLA/ABS)
- **6 Servo Motors** (MG90S - High Torque)
- **Flex Sensors** (Bend Detection)
- **Griping Force**: 18.7 Kgf

### 💻 Electronics
- **Microcontroller**: Arduino UNO R4 WiFi
- **EMG Sensor**: 3-Channel EMG Module
- **Display**: OLED 0.96" I2C
- **Power**: Li-Po 11.1V 2200mAh
- **Motor Driver**: 16-Channel PWM PCA9685

### 📝 Software
- **Language**: C++
- **Architecture**: Real-time Signal Processing
- **Algorithm**: EMG Pattern Recognition
- **Framework**: Arduino IDE

---

## 📊 Project Progress

| Component | Status | Completion |
|:---:|:---:|:---:|
| ⚙️ **Mechanical** | ✅ Complete | 100% |
| 💾 **Electronics** | ✅ Complete | 100% |
| 💻 **Software** | 🔄 In Progress | 70% |
| 🧪 **Testing** | 🔄 Testing Phase | 60% |

---


## 🛠️ Tools & Technologies

<p align="center">
  <img src="https://img.shields.io/badge/Arduino-IDE-00979D?style=flat-square&logo=arduino" alt="Arduino"/>
  <img src="https://img.shields.io/badge/C%2B%2B-Language-00599C?style=flat-square&logo=cplusplus" alt="C++"/>
  <img src="https://img.shields.io/badge/Solidworks-CAD-FF6B35?style=flat-square" alt="Solidworks"/>
  <img src="https://img.shields.io/badge/Proteus-Circuit-00A3E0?style=flat-square" alt="Proteus"/>
</p>

---

## 📁 Project Structure

```
SynF-X/
├── 📂 Hardware/
│   ├── CAD_Models/           → Solidworks 3D Files
│   ├── Circuit_Design/       → Proteus Schematics
│   ├── BOM.md                → Bill of Materials
│   └── Assembly_Guide.md     → Building Instructions
│
├── 📂 Firmware/
│   ├── src/
│   │   ├── main.ino
│   │   ├── emg_processing.cpp
│   │   ├── servo_control.cpp
│   │   └── calibration.cpp
│   └── include/
│       └── headers.h
│
├── 📂 Documentation/
│   ├── EMG_Guide.md
│   ├── Setup_Guide.md
│   ├── Calibration.md
│   └── Troubleshooting.md
│
└── README.md
```

---

## 🚀 Quick Start

### Hardware Setup
```
Arduino UNO R4 WiFi Pinout:
┌─────────────────────────┐
│ 5V    → Servo VCC       │
│ GND   → All GND         │
│ D3-D8 → Servo Signals   │
│ A0    → EMG Input       │
│ D21   → OLED SDA (I2C)  │
│ D22   → OLED SCL (I2C)  │
└─────────────────────────┘
```

### Firmware Installation
```bash
# 1. Clone Repository
git clone https://github.com/FoadTeymoori/SynF-X.git
cd SynF-X

# 2. Install Arduino IDE
# 3. Select Board: Arduino UNO R4 WiFi
# 4. Install Libraries:
#    - Adafruit SSD1306
#    - Arduino_BuiltIn
#    - Servo

# 5. Upload
#    File → Open → Firmware/src/main.ino
#    Click Upload ↗️
```

---




## 🎯 Future Enhancements

- [ ] Machine Learning (Neural Network) Classification
- [ ] Real-time Signal Visualization
- [ ] Haptic Feedback Integration
- [ ] Wireless Control (Bluetooth/WiFi)
- [ ] Power Optimization
- [ ] EEG Integration
- [ ] Mobile App Controller

---


## 📞 Contact & Support

<p align="center">
  <a href="https://t.me/FoadTeymoori">
    <img src="https://img.shields.io/badge/Telegram-FoadTeymoori-0088cc?style=flat-square&logo=telegram" alt="Telegram"/>
  </a>
  <a href="https://github.com/FoadTeymoori">
    <img src="https://img.shields.io/badge/GitHub-FoadTeymoori-000000?style=flat-square&logo=github" alt="GitHub"/>
  </a>
  <a href="mailto:foad.teymoori@example.com">
    <img src="https://img.shields.io/badge/Email-Contact-red?style=flat-square&logo=gmail" alt="Email"/>
  </a>
</p>

---

## 🧬 Our Philosophy

> **"We are not building a machine. We are rebuilding human capability."**

This project represents the intersection of:
- **Neuroscience** (Brain signals)
- **Robotics** (Mechanical control)
- **Software** (Intelligent processing)
- **Medicine** (Patient support)

---

## 📊 Project Statistics

<p align="center">
  <img src="https://img.shields.io/github/stars/FoadTeymoori/SynF-X?style=social" alt="Stars"/>
  <img src="https://img.shields.io/github/forks/FoadTeymoori/SynF-X?style=social" alt="Forks"/>
  <img src="https://img.shields.io/badge/Contributors-1-blue?style=flat-square" alt="Contributors"/>
  <img src="https://img.shields.io/badge/Last%20Update-June%202025-brightgreen?style=flat-square" alt="Last Update"/>
</p>

---

## 📜 License

**MIT License** © 2025 Foad Teymoori

```
Permission is hereby granted, free of charge, to any person obtaining 
a copy of this software and associated documentation files (the "Software"), 
to deal in the Software without restriction...
```

---

<p align="center">
  <b>🔥 Made with ❤️ for the Community 🔥</b>
  <br/>
  <b>ساخت شده برای کمک به جامعه جهانی</b>
  <br/><br/>
  <sub>© 2025 NOVA Robotics Lab • SynF-X Project</sub>
  <br/>
  <sub>Last Updated: June 23, 2025 | v1.3.0 | Status: 🚀 Under Development</sub>
</p>

---

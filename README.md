<h1 align="center">
  <img src="https://img.shields.io/badge/SynF%20%2D%20X-Smart%20Prosthetic%20Hand-blue?style=for-the-badge&logo=robot" alt="SynF-X">
  <br>
  🦾 SynF-X // Nova 💫
</h1>

<p align="center">
  <strong>یک دست هوشمند بر پایه تکنولوژی عصبی برای بازیابی کارکرد اندام‌های از‌دست‌رفته</strong>
  <br/>
  <em>A Smart Prosthetic Hand Based on Neural Technology to Restore Lost Limb Function</em>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Status-In%20Development-yellow?style=flat-square" alt="Status">
  <img src="https://img.shields.io/badge/Progress-70%25-brightgreen?style=flat-square" alt="Progress">
  <img src="https://img.shields.io/badge/Made%20with-❤️-red?style=flat-square" alt="Made with Love">
  <img src="https://img.shields.io/badge/License-MIT-green?style=flat-square" alt="License">
</p>

---

## 📋 نمای کلی پروژه | Project Overview

<p align="center">
  <img src="https://github.com/user-attachments/assets/d2ab18d3-26f2-4860-91b4-96e283ab85d0" width="900" alt="SynF-X Prototype">
</p>

**SynF-X** یک پروژه انقلابی در زمینه‌ی پروتز هوشمند است که افراد دارای قطع‌عضو را قادر می‌سازد تا:

**SynF-X** is a revolutionary project in the field of smart prosthetics that enables people with limb loss to:

- ✨ اندام مصنوعی‌شان را با دقت کنترل کنند | Control their prosthetic limb with precision
- 🧠 سیگنال‌های عصبی را تشخیص و پردازش کنند | Detect and process neural signals
- 💪 قدرت و حرکت‌های طبیعی را بازیابی کنند | Restore natural power and movement

---

## 🎯 اهداف پروژه | Project Goals

- **کمک به معلولین**: ایجاد حل‌های فناورانه برای بهبود کیفیت زندگی
- **Help Disabilities**: Create technological solutions to improve quality of life
- **نوآوری تکنولوژیک**: ترکیب هوش‌مصنوعی با سخت‌افزار
- **Technological Innovation**: Combining AI with hardware
- **قابلیت دسترسی**: طراحی سیستم کم‌هزینه و قابل‌اجرا
- **Accessibility**: Design an affordable and implementable system

---

## 🏗️ معماری پروژه | Project Architecture

پروژه **SynF-X** از **3 بخش اصلی** تشکیل شده است:

**SynF-X** is composed of **3 main sections**:

### 1️⃣ **بخش الکترونیکی** ✅ | **Electronics Section** ✅
- سنسورهای EMG (الکترومایوگرافی) برای خواندن سیگنال‌های عصبی
- EMG Sensors for reading neural signals
- مدار تقویت‌کننده سیگنال | Signal amplifier circuit
- ماژول‌های ارتباطی | Wireless communication modules
- منبع تغذیه بهینه‌شده | Optimized power supply

### 2️⃣ **بخش مکانیکی** ✅ | **Mechanical Section** ✅
- ساختار دست طراحی‌شده با **Solidworks** | Hand structure designed with **Solidworks**
- موتورهای دقیق برای کنترل انگشتان | Precision motors for finger control
- نمونه‌سازی سازنده (3D Printing) | 3D Printing with Prusa i3
- سازه و استحکام مناسب | Appropriate structure and strength

### 3️⃣ **بخش نرم‌افزاری** 🚧 | **Software Section** 🚧
- الگوریتم‌های تشخیص سیگنال EMG
- EMG Signal Detection Algorithms
- کنترل سرو موتور (Servo Motor Control)
- سیستم کالیبراسیون خودکار
- Auto Calibration System

---

## 🔌 مدار و اتصالات | Circuit & Connections

<p align="center">
  <img src="https://github.com/user-attachments/assets/a9272998-e404-43db-af71-3851c22303b7" width="500" alt="Circuit Diagram - Proteus">
</p>

### اجزاء اصلی | Main Components:

| جزء | Component | مدل | Model | وضعیت | Status |
|:----:|:----:|:----:|:----:|:----:|:----:|
| **میکروکنترلر** | Microcontroller | Arduino UNO R4 WiFi | ✅ |
| **سنسور EMG** | EMG Sensor | EMG Sensor Module | ✅ |
| **موتور** | Motor | Servo Motor MG90S (x6) | ✅ |
| **نمایشگر** | Display | OLED 0.96" | ✅ |
| **LED** | LEDs | 6 LED RGB | ✅ |
| **منبع تغذیه** | Power Supply | 5V USB | ✅ |

### طراحی مدار | Circuit Design:
```
مدار با استفاده از Proteus طراحی شده است
Circuit designed using Proteus Design Suite
┌─────────────────────────────────────────┐
│  EMG Sensor → Signal Amplifier → Arduino │
│                                          │
│  Arduino → Servo Motors & OLED Display  │
│                                          │
│  WiFi Communication (Arduino R4 WiFi)   │
└─────────────────────────────────────────┘
```

---

## 🛠️ تکنولوژی‌های مورد استفاده | Technologies Used

<p align="center">
  <img src="https://skillicons.dev/icons?i=arduino,cpp&perline=2" alt="Technologies">
  <br/>
  <strong>+ Solidworks + Proteus + Arduino Libraries</strong>
</p>

### سخت‌افزار | Hardware:
- **Arduino UNO R4 WiFi** - میکروکنترلر اصلی
- **EMG Sensor Module** - خواندن سیگنال‌های عصبی
- **Servo Motor MG90S** - کنترل حرکت انگشتان
- **OLED Display 0.96"** - نمایش اطلاعات
- **RGB LED** - نشانگر وضعیت

### نرم‌افزار | Software:
- **Arduino IDE** - برنامه‌نویسی میکروکنترلر
- **C++** - زبان برنامه‌نویسی اصلی
- **Solidworks** - طراحی مکانیکی

### کتاب‌خانه‌های Arduino | Arduino Libraries:
```cpp
#include <Servo.h>           // کنترل سرو موتور
#include <Wire.h>            // ارتباط I2C (برای OLED)
#include <Adafruit_SSD1306.h> // کنترل OLED Display
#include <WiFi.h>            // ارتباط WiFi (Arduino R4)
```

---

## 📊 وضعیت پروژه | Project Status

```
████████████░░ 70% کامل شده | 70% Completed

┌─────────────────────────────────────────────────┐
│                                                   │
│  ✅ الکترونیکی | Electronics                    │
│     └─ سنسورها، مدارات، و تست                   │
│     └─ Sensors, circuits, and testing           │
│                                                   │
│  ✅ مکانیکی | Mechanical                        │
│     └─ طراحی Solidworks، چاپ 3D، مونتاژ        │
│     └─ Solidworks design, 3D print, assembly    │
│                                                   │
│  🚧 نرم‌افزاری | Software (In Progress)        │
│     ├─ الگوریتم تشخیص سیگنال EMG              │
│     ├─ EMG Signal Detection Algorithm           │
│     ├─ کنترل موتور                             │
│     ├─ Motor Control                             │
│     └─ کالیبراسیون خودکار                      │
│     └─ Auto Calibration                         │
│                                                   │
│  🧪 تست و آزمایش | Testing (In Progress)       │
│     ├─ تست‌های فیلدی                           │
│     ├─ Field Tests                              │
│     └─ بهینه‌سازی عملکرد                        │
│     └─ Performance Optimization                 │
│                                                   │
└─────────────────────────────────────────────────┘
```

---

## 🚀 شروع کار | Quick Start

### پیش‌نیازها | Prerequisites:

```bash
1. Arduino IDE (آخرین نسخه)
   - Download from: https://www.arduino.cc/en/software

2. کتاب‌خانه‌های مورد نیاز:
   - Servo.h (موجود در Arduino IDE)
   - Wire.h (موجود در Arduino IDE)
   - Adafruit_SSD1306 (نصب از Arduino Library Manager)

3. Solidworks (اختیاری برای مشاهده طراحی‌ها)

4. Proteus (اختیاری برای مشاهده نمودار مدار)
```

### نصب و راه‌اندازی | Installation & Setup:

```bash
# 1. کلون کردن Repository
git clone https://github.com/FoadTeymoori/SynF-X.git
cd SynF-X

# 2. باز کردن Arduino IDE و انتخاب برد
#    - Tools → Board → Arduino UNO R4 WiFi

# 3. نصب کتاب‌خانه‌های لازم:
#    - Sketch → Include Library → Manage Libraries
#    - جستجو و نصب: "Adafruit SSD1306"

# 4. باز کردن فایل اصلی:
#    - File → Open → Firmware/src/main.ino

# 5. آپلود کد:
#    - Sketch → Upload (یا Ctrl+U)
```

### تنظیم سخت‌افزار | Hardware Setup:

```
Arduino UNO R4 WiFi وصل‌کردن:
┌───────────────────��──────────────────┐
│ Arduino    │ Component               │
├──────────────────────────────────────┤
│ 5V         │ Servo Motors VCC        │
│ GND        │ Servo Motors & Sensors  │
│ D3-D8      │ Servo Motor Signals     │
│ A0         │ EMG Sensor Input        │
│ SDA (D21)  │ OLED SDA                │
│ SCL (D22)  │ OLED SCL                │
│ D13-D18    │ RGB LEDs                │
└──────────────────────────────────────┘
```

---

## 📁 ساختار Repository | Repository Structure

```
SynF-X/
│
├── 📂 Hardware/
│   ├── 🎨 CAD_Models/
│   │   ├── Hand_Assembly.SLDASM      (مدل کامل دست | Full hand assembly)
│   │   ├── Finger_Base.SLDPRT        (پایه انگشت | Finger base)
│   │   ├── Palm_Structure.SLDPRT     (ساختار کف | Palm structure)
│   │   └── README_CAD.md
│   │
│   ├── 📊 Circuit_Design/
│   │   ├── SynFX_Circuit.pdsprj      (نمودار Proteus | Proteus schematic)
│   │   ├── Circuit_Diagram.png
│   │   └── BOM.xlsx                  (فهرست اجزاء | Bill of Materials)
│   │
│   ├── 🎬 Videos_&_GIFs/
│   │   ├── hand_assembly_demo.gif
│   │   ├── servo_motion_test.mp4
│   │   ├── emg_signal_visualization.mp4
│   │   └── electronics_overview.mp4
│   │
│   └── 📋 Assembly_Guide.md
│
├── 📂 Firmware/
│   ├── src/
│   │   ├── main.ino                  (کد اصلی | Main code)
│   │   ├── emg_signal_processing.cpp (معالجه سیگنال | Signal processing)
│   │   ├── servo_control.cpp         (کنترل موتور | Motor control)
│   │   ├── display_controller.cpp    (کنترل نمایشگر | Display control)
│   │   └── calibration.cpp           (کالیبراسیون | Calibration)
│   │
│   ├── include/
│   │   ├── emg_signal_processing.h
│   │   ├── servo_control.h
│   │   ├── display_controller.h
│   │   └── calibration.h
│   │
│   ├── libraries/
│   │   └── [Arduino standard libraries]
│   │
│   └── platformio.ini               (اختیاری | Optional)
│
├── 📂 Documentation/
│   ├── EMG_Tutorial.md
│   ├── Hardware_Setup_Guide.md
│   ├── Software_Guide.md
│   ├── Calibration_Procedure.md
│   └── Troubleshooting.md
│
├── 📄 README.md                      (این فایل | This file)
├── 📋 LICENSE                        (MIT License)
└── 📋 CHANGELOG.md                   (تاریخچه تغییرات | Version history)
```

---

## 🧠 چگونه کار می‌کند؟ | How It Works?

### نحوه عملکرد سیستم | System Workflow:

```
┌────────────────────────────────────────────────────────────┐
│                                                              │
│  1️⃣  عضلات باقی‌مانده (Residual Muscles)                   │
│      ↓                                                      │
│  2️⃣  [سنسور EMG] ← خواندن سیگنال‌های الکتریکی             │
│      ↓                                                      │
│  3️⃣  سیگنال تقویت‌شده → Arduino UNO R4                     │
│      ↓                                                      │
│  4️⃣  [الگوریتم تشخیص] ← شناسایی نوع حرکت                 │
│      ↓                                                      │
│  5️⃣  [کالیبراسیون] ← تطابق سیگنال                         │
│      ↓                                                      │
│  6️⃣  [فرمان کنترل] ← ارسال دستور به موتورها              │
│      ↓                                                      │
│  7️⃣  [سرو موتور MG90S] ← حرکت انگشتان                    │
│      ↓                                                      │
│  8️⃣  [نمایشگر OLED] ← نمایش اطلاعات وضعیت                │
│      ↓                                                      │
│  ✨  دست هوشمند حرکت می‌کند! (Smart Hand Moves!)          │
│                                                              │
└────────────────────────────────────────────────────────────┘
```

### الگوریتم اصلی | Main Algorithm:

```cpp
// سیگنال EMG → پردازش → کنترل موتور
// EMG Signal → Processing → Motor Control

void loop() {
  // 1. خواندن سیگنال EMG
  int emgValue = readEMGSignal();
  
  // 2. پردازش و تقویت
  int processedSignal = processEMGSignal(emgValue);
  
  // 3. کالیبراسیون
  int calibratedValue = calibrate(processedSignal);
  
  // 4. تشخیص حرکت
  int detectedMovement = detectMovement(calibratedValue);
  
  // 5. کنترل موتور
  controlServoMotors(detectedMovement);
  
  // 6. نمایش روی OLED
  updateDisplay(emgValue, calibratedValue);
}
```

---

## 🎓 مستندات | Documentation

### آموزش و راهنماها | Tutorials & Guides:

- 📚 **[EMG Signal Processing](./Documentation/EMG_Tutorial.md)** - آموزش پردازش سیگنال
- 📖 **[Hardware Setup Guide](./Documentation/Hardware_Setup_Guide.md)** - راهنمای نصب سخت‌افزار
- 🎯 **[Calibration Procedure](./Documentation/Calibration_Procedure.md)** - روش کالیبراسیون
- 💻 **[Software Guide](./Documentation/Software_Guide.md)** - راهنمای نرم‌افزار
- 🔧 **[Troubleshooting](./Documentation/Troubleshooting.md)** - عیب‌یابی و حل مشکلات

---

## 🐛 مشکلات و بهبودهای آتی | Known Issues & Future Improvements

### مشکلات شناخت‌شده | Known Issues:
- [ ] کاهش نویز سیگنال EMG بهتر شود
- [ ] دقت تشخیص حرکات بالاتر رود
- [ ] مصرف برق بهینه شود

### بهبودهای آتی | Future Improvements:
- [ ] افزودن Machine Learning برای تشخیص دقیق‌تر
- [ ] ایجاد رابط کاربری وب برای کنترل راحت‌تر
- [ ] اضافه کردن بازخورد حسی (Haptic Feedback)
- [ ] سازگاری با سایستم‌های دیگر

---

## 🤝 مشارکت | Contributing

ما از مشارکت‌های شما استقبال می‌کنیم! 💪

**We welcome your contributions!** 💪

### مراحل مشارکت | How to Contribute:

1. **Fork** کنید / Fork the repository
2. شاخه‌ی جدید بسازید / Create a new branch
   ```bash
   git checkout -b feature/your-feature-name
   ```
3. تغییرات خود را انجام دهید / Make your changes
4. تغییرات را commit کنید / Commit your changes
   ```bash
   git commit -m 'Add: your feature description'
   ```
5. به شاخه push کنید / Push to the branch
   ```bash
   git push origin feature/your-feature-name
   ```
6. **Pull Request** باز کنید / Open a Pull Request

### نحوه‌ی کد نویسی | Coding Standards:
- از نام‌های متغیر واضح استفاده کنید / Use clear variable names
- کد خود را comment کنید / Add comments to your code
- تست کنید قبل از submit / Test before submitting

---

## 📞 تماس و پیوندها | Contact & Links

<p align="center">
  <a href="https://t.me/FoadTeymoori">
    <img src="https://img.shields.io/badge/📱%20Telegram-Contact-blue?style=for-the-badge&logo=telegram" alt="Telegram">
  </a>
  &nbsp;&nbsp;
  <a href="https://github.com/FoadTeymoori">
    <img src="https://img.shields.io/badge/🐙%20GitHub-Follow-black?style=for-the-badge&logo=github" alt="GitHub">
  </a>
  &nbsp;&nbsp;
  <a href="mailto:foad.teymoori@example.com">
    <img src="https://img.shields.io/badge/📧%20Email-Contact-red?style=for-the-badge&logo=gmail" alt="Email">
  </a>
</p>

---

## 📜 مجوز | License

این پروژه تحت مجوز **MIT** منتشر شده است.

This project is released under the **MIT License**.

```
MIT License

Copyright (c) 2025 Foad Teymoori

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
```

برای مجوز کامل: [LICENSE](./LICENSE)

---

<p align="center">
  <b>ساخت شده با ❤️ برای کمک به جامعه</b>
  <br/>
  <b>Made with ❤️ to Help the Community</b>
  <br/><br/>
  <img src="https://img.shields.io/github/stars/FoadTeymoori/SynF-X?style=social" alt="Stars">
  <img src="https://img.shields.io/github/forks/FoadTeymoori/SynF-X?style=social" alt="Forks">
  <img src="https://img.shields.io/github/watchers/FoadTeymoori/SynF-X?style=social" alt="Watchers">
</p>

---

**آخرین به‌روزرسانی | Last Updated**: 23 June 2025

**وضعیت پروژه | Project Status**: 🚀 **در حال توسعه | Under Development**

**نسخه | Version**: 1.2.0

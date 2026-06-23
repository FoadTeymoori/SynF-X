<h1 align="center">
  <img src="https://img.shields.io/badge/SynF%20%2D%20X-Smart%20Prosthetic%20Hand-blue?style=for-the-badge&logo=robot" alt="SynF-X">
  <br>
  🦾 SynF-X // Nova 💫
</h1>

<p align="center">
  <strong>دست هوشمند کنترل‌شده با سیگنال عصبی | Neural-Controlled Smart Prosthetic Hand</strong>
  <br/>
  <a href="https://t.me/FoadTeymoori"><img src="https://img.shields.io/badge/📱%20Telegram-FoadTeymoori-0088cc?style=flat-square" alt="Telegram"></a>
  <a href="https://github.com/FoadTeymoori"><img src="https://img.shields.io/badge/🐙%20GitHub-FoadTeymoori-000000?style=flat-square" alt="GitHub"></a>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Status-In%20Development-yellow?style=flat-square" alt="Status">
  <img src="https://img.shields.io/badge/Progress-70%25-brightgreen?style=flat-square" alt="Progress">
  <img src="https://img.shields.io/badge/License-MIT-green?style=flat-square" alt="License">
</p>

---

<p align="center">
  <img src="https://github.com/user-attachments/assets/d2ab18d3-26f2-4860-91b4-96e283ab85d0" width="700" alt="SynF-X Prototype">
</p>

## ⚡ سریع شروع کنید | Quick Features

| ✨ | 🧠 | 💪 |
|---|---|---|
| **کنترل دقیق** | **تشخیص سیگنال عصبی** | **حرکت طبیعی** |
| Precise Control | EMG Signal Detection | Natural Movement |

---

## 🏗️ معماری | Architecture

<p align="center">
  <img src="https://github.com/user-attachments/assets/a9272998-e404-43db-af71-3851c22303b7" width="500" alt="Circuit">
</p>

```
┌─────────────────────────────────┐
│   عضلات باقی‌مانده (Muscles)      │
│   ↓                             │
│   سنسور EMG                     │
│   ↓                             │
│   Arduino UNO R4 WiFi           │
│   ↓                             │
│   الگوریتم تشخیص                │
│   ↓                             │
│   سرو موتورها (Servo Motors)    │
│   ↓                             │
│   🦾 دست حرکت می‌کند!            │
└─────────────────────────────────┘
```

---

## 🛠️ اجزاء اصلی | Main Components

| جزء | مدل | وضعیت |
|:---:|:---:|:---:|
| **میکروکنترلر** | Arduino UNO R4 WiFi | ✅ |
| **سنسور EMG** | EMG Sensor Module | ✅ |
| **موتور** | Servo MG90S (x6) | ✅ |
| **نمایشگر** | OLED 0.96" | ✅ |
| **تغذیه** | 5V USB | ✅ |

**تکنولوژی:** Arduino • C++ • Solidworks • Proteus

---

## 📊 وضعیت پروژه | Status

```
████████████░░ 70% Complete

✅ Electronics    → Sensors, Circuits, Testing
✅ Mechanical     → Design, 3D Print, Assembly  
🚧 Software       → Algorithms, Control, Calibration
🧪 Testing        → Field Tests & Optimization
```

---

## 🚀 نصب سریع | Quick Setup

```bash
# Clone
git clone https://github.com/FoadTeymoori/SynF-X.git
cd SynF-X

# Arduino IDE Setup
# 1. Tools → Board → Arduino UNO R4 WiFi
# 2. Sketch → Include Library → Adafruit SSD1306
# 3. File → Open → Firmware/src/main.ino
# 4. Upload!
```

### سخت‌افزار | Hardware Pinout
```
Arduino  →  Component
5V       →  Servo VCC
GND      →  Sensors
D3-D8    →  Servo Signals
A0       →  EMG Input
D21/D22  →  OLED (I2C)
```

---

## 📁 فایل‌ها | Files

```
SynF-X/
├── Hardware/
│   ├── CAD_Models/          → 3D Models (Solidworks)
│   ├── Circuit_Design/      → Proteus Schematics
│   └── Videos_&_GIFs/       → Demo Videos
│
├── Firmware/
│   ├── src/
│   │   ├── main.ino
│   │   ├── emg_signal_processing.cpp
│   │   ├── servo_control.cpp
│   │   └── calibration.cpp
│   └── include/
│
├── Documentation/
│   ├── EMG_Tutorial.md
│   ├── Hardware_Setup_Guide.md
│   ├── Calibration_Procedure.md
│   └── Troubleshooting.md
│
└── README.md
```

---

## 💻 کد اصلی | Main Algorithm

```cpp
void loop() {
  int emgValue = readEMGSignal();           // خواندن سیگنال
  int processed = processEMGSignal(emgValue); // پردازش
  int calibrated = calibrate(processed);    // کالیبراسیون
  int movement = detectMovement(calibrated); // تشخیص
  controlServoMotors(movement);             // کنترل
  updateDisplay(emgValue);                  // نمایش
}
```

---

## 📚 مستندات | Documentation

- 📖 **[EMG سیگنال](./Documentation/EMG_Tutorial.md)** - آموزش پردازش
- 🔧 **[نصب سخت‌افزار](./Documentation/Hardware_Setup_Guide.md)**
- ⚙️ **[کالیبراسیون](./Documentation/Calibration_Procedure.md)**
- 🐛 **[عیب‌یابی](./Documentation/Troubleshooting.md)**

---

## 🎯 بهبودهای آتی | Future Plans

- [ ] Machine Learning برای تشخیص دقیق‌تر
- [ ] رابط کاربری وب
- [ ] بازخورد حسی (Haptic Feedback)
- [ ] کاهش مصرف انرژی

---

## 🤝 مشارکت | Contributing

اگر می‌خواهید در توسعه این پروژه کمک کنید:

| مرحله | عملیات | نماد |
|:---:|:---:|:---:|
| 1️⃣ | 🍴 **Fork** کنید | `git fork` |
| 2️⃣ | 🌿 شاخه جدید بسازید | `git checkout -b feature/name` |
| 3️⃣ | 💾 تغییرات commit کنید | `git commit -m 'Add: feature'` |
| 4️⃣ | ⬆️ Push کنید | `git push origin feature/name` |
| 5️⃣ | 🎉 PR باز کنید | Pull Request |

### نکات مهم:
- ✍️ نام‌های متغیر واضح و معنادار
- 💬 کد‌های comment‌شده و قابل فهم
- 🧪 کد‌های تست‌شده و بدون خطا

---

## 📜 مجوز | License

**MIT License** © 2025 Foad Teymoori

```
Permission is hereby granted, free of charge, to any person
obtaining a copy of this software...
[Full MIT License Text]
```

---

<p align="center">
  <b>ساخت شده با ❤️ برای کمک به جامعه</b>
  <br/>
  <b>Made with ❤️ to Help the Community</b>
  <br/><br/>
  <img src="https://img.shields.io/github/stars/FoadTeymoori/SynF-X?style=social" alt="Stars">
  <img src="https://img.shields.io/github/forks/FoadTeymoori/SynF-X?style=social" alt="Forks">
</p>

---

**Last Updated:** June 23, 2025 | **Status:** 🚀 Under Development | **Version:** 1.2.0

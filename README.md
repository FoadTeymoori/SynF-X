<h1 align="center">
  <img src="https://img.shields.io/badge/SynF%20%2D%20X-Smart%20Prosthetic-blue?style=for-the-badge&logo=robot" alt="SynF-X">
  <br>
  🦾 SynF-X // Nova ⚡
</h1>

<p align="center">
  <strong>دستکش هوشمند بر پایه تکنولوژی عصبی برای بازیابی کارکرد اندام‌های از‌دست‌رفته</strong>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Status-In%20Development-yellow?style=flat-square" alt="Status">
  <img src="https://img.shields.io/badge/Progress-70%25-brightgreen?style=flat-square" alt="Progress">
  <img src="https://img.shields.io/badge/License-MIT-green?style=flat-square" alt="License">
  <img src="https://img.shields.io/badge/Made%20with-❤️-red?style=flat-square" alt="Made with Love">
</p>

---

## 📋 نمای کلی پروژه

<p align="center">
  <img src="https://github.com/user-attachments/assets/d2ab18d3-26f2-4860-91b4-96e283ab85d0" width="900" alt="SynF-X Prototype">
</p>

**SynF-X** یک پروژه انقلابی در زمینه‌ی پروتز هوشمند است که افراد دارای قطع‌عضو را قادر می‌سازد تا:
- ✨ اندام مصنوعی‌شان را با دقت کنترل کنند
- 🧠 سیگنال‌های عصبی را تشخیص و پردازش کنند
- 💪 قدرت و حرکت‌های طبیعی را بازیابی کنند

---

## 🎯 اهداف پروژه

- **کمک به معلولین**: ایجاد حل‌های فناورانه برای بهبود کیفیت زندگی
- **نوآوری تکنولوژیک**: ترکیب هوش‌مصنوعی با سخت‌افزار
- **قابلیت دسترسی**: طراحی سیستم کم‌هزینه و قابل‌اجرا

---

## 🏗 معماری پروژه

پروژه **SynF-X** از **3 بخش اصلی** تشکیل شده است:

### 1️⃣ **بخش الکترونیکی** ✅
- سنسورهای EMG (الکترومایوگرافی) برای خواندن سیگنال‌های عصبی
- مدار تقویت‌کننده سیگنال
- ماژول‌های ارتباطی (Wireless/BLE)
- منبع تغذیه بهینه‌شده

### 2️⃣ **بخش مکانیکی** ✅
- ساختار دستکش با کابل‌های محرک
- موتورهای دقیق برای کنترل انگشتان
- نمونه‌سازی سازنده (3D Printing)
- یاتاقان‌های استحکام‌بخش

### 3️⃣ **بخش نرم‌افزاری** 🚧
- الگوریتم‌های یادگیری ماشین برای تشخیص حرکات
- کنترل‌کننده بلادون (Brushless Motor Control)
- سیستم بازخورد حسی (Haptic Feedback)
- سامانه کالیبراسیون خودکار

---

## 🔌 مدار و اتصالات

<p align="center">
  <img src="https://github.com/user-attachments/assets/a9272998-e404-43db-af71-3851c22303b7" width="500" alt="Circuit Diagram">
</p>

### اجزاء اصلی:
| جزء | مدل | وضعیت |
|------|------|-------|
| **میکروکنترلر** | Arduino Nano / STM32 | ✅ |
| **سنسور EMG** | AD620 + ADS1115 | ✅ |
| **موتور** | Brushless (BLDC) | ✅ |
| **باتری** | 3S LiPo 11.1V | ✅ |
| **درایور موتور** | ESC 30A | ✅ |

---

## 🛠 تکنولوژی‌های مورد استفاده

<p align="center">
  <img src="https://skillicons.dev/icons?i=arduino,cpp,python,tensorflow&perline=4" alt="Technologies">
</p>

### مهارت‌های تکنیکی:
- **سخت‌افزار**: Arduino, STM32, سنسورهای EMG
- **برنامه‌نویسی**: C++, Python, Assembly
- **هوش‌مصنوعی**: TensorFlow, Machine Learning
- **مکانیک**: CAD Design, 3D Modeling

---

## 📊 وضعیت پروژه

```
████████░░ 70% کامل شده

├─ [✅] بخش الکترونیکی
│  └─ سنسورها، مدارات، و تست
│
├─ [✅] بخش مکانیکی
│  └─ طراحی، ساخت، و مونتاژ
│
├─ [🚧] بخش نرم‌افزاری (در حال ساخت)
│  ├─ کنترل موتور
│  ├─ الگوریتم‌های ML
│  └─ بازخورد حسی
│
└─ [🧪] تست و آزمایش (نیاز به بهبود)
   ├─ تست‌های عملی
   ├─ کالیبراسیون
   └─ بهینه‌سازی عملکرد
```

---

## 🚀 شروع کار

### پیش‌نیازها:
```bash
- Arduino IDE یا PlatformIO
- TensorFlow Lite (برای ML)
- Python 3.8+
- لوازم الکترونیکی (هزینه‌ریز در پوشه)
```

### نصب و راه‌اندازی:
```bash
# کلون کردن repository
git clone https://github.com/FoadTeymoori/SynF-X.git
cd SynF-X

# نصب وابستگی‌های Python
pip install -r requirements.txt

# آپلود کد به Arduino
# (از Arduino IDE یا PlatformIO استفاده کنید)
```

---

## 📁 ساختار پروژه

```
SynF-X/
├── 📂 Hardware/
│   ├── Circuits/
│   ├── CAD Models/
│   └── BOM.xlsx
├── 📂 Firmware/
│   ├── src/
│   ├── libraries/
│   └── platformio.ini
├── 📂 ML Models/
│   ├── training/
│   └── models/
├── 📂 Documentation/
│   ├── Design Guide
│   └── Assembly Manual
└── README.md
```

---

## 🧠 چگونه کار می‌کند؟

### نحوه عملکرد سیستم:

```
عضلات باقی‌مانده
      ↓
   [سنسور EMG]
      ↓
سیگنال عصبی تقویت‌شده
      ↓
   [میکروکنترلر]
      ↓
الگوریتم ML
      ↓
تشخیص نوع حرکت
      ↓
   [کنترلر موتور]
      ↓
   حرکت انگشتان
      ↓
بازخورد حسی 🔄
```

---

## 🎓 یادگیری و تدریب

- 📚 [Tutorial: EMG Signal Processing](./docs/emg-tutorial.md)
- 📖 [Hardware Setup Guide](./docs/hardware-setup.md)
- 🎯 [Calibration Procedure](./docs/calibration.md)

---

## 🐛 مشکلات شناخت‌شده

- [ ] کاهش نویز سیگنال EMG
- [ ] افزایش دقت تشخیص حرکات
- [ ] بهینه‌سازی مصرف برق
- [ ] تست فیلدی طولانی‌مدت

---

## 🤝 مشارکت

ما از مشارکت‌ها استقبال می‌کنیم! 💪

1. **Fork** کنید
2. شاخه‌ی جدید بسازید (`git checkout -b feature/amazing-feature`)
3. تغییرات خود را commit کنید (`git commit -m 'Add amazing feature'`)
4. به شاخه push کنید (`git push origin feature/amazing-feature`)
5. **Pull Request** باز کنید

---

## 📞 تماس و پیوندها

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

## 📜 مجوز

این پروژه تحت مجوز **MIT** منتشر شده است.

```
Copyright (c) 2024 Foad Teymoori

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction...
```

---

## 🙏 سپاسگزاری

- تیم علوم پزشکی
- جامعه Arduino و پروتز‌سازی
- تمام افرادی که این پروژه را الهام‌بخش هستند

---

<p align="center">
  <b>ساخت شده با ❤️ برای کمک به جامعه</b>
  <br><br>
  <img src="https://img.shields.io/github/stars/FoadTeymoori/SynF-X?style=social" alt="Stars">
  <img src="https://img.shields.io/github/forks/FoadTeymoori/SynF-X?style=social" alt="Forks">
  <img src="https://img.shields.io/github/watchers/FoadTeymoori/SynF-X?style=social" alt="Watchers">
</p>

---

**آخرین به‌روزرسانی**: 2024 | **وضعیت**: 🚀 در حال توسعه

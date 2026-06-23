<h1 align="center">
  <img src="https://img.shields.io/badge/SynF%20-X-0066cc?style=for-the-badge&logo=robot&logoColor=white" alt="SynF-X Badge">
  <br>
  🦾 SynF-X // Nova ⚡
</h1>

<p align="center">
  <img src="https://img.shields.io/badge/Status-In%20Development-yellow?style=flat-square&logo=github" alt="Status">
  <img src="https://img.shields.io/badge/Progress-70%25-brightgreen?style=flat-square" alt="Progress">
  <img src="https://img.shields.io/badge/License-MIT-green?style=flat-square" alt="License">
  <img src="https://img.shields.io/badge/Platform-Arduino-00979D?style=flat-square&logo=arduino" alt="Arduino">
  <img src="https://img.shields.io/badge/Language-C%2B%2B-00599C?style=flat-square&logo=c%2B%2B" alt="C++">
</p>

<p align="center">
  <strong>دست مصنوعی هوشمند کنترل‌شده با سیگنال عصبی</strong>
  <br/>
  <strong>Neural-Controlled Smart Prosthetic Hand</strong>
  <br/>
  <a href="https://t.me/FoadTeymoori" style="text-decoration: none;">
    <img src="https://img.shields.io/badge/Contact%20Me-Telegram-0088cc?style=flat-square&logo=telegram&logoColor=white" alt="Telegram">
  </a>
</p>

---

<p align="center">
  <img width="700" alt="SynF-X Prototype" src="https://github.com/user-attachments/assets/d2ab18d3-26f2-4860-91b4-96e283ab85d0" />
</p>

---

## 📋 توضیحات

پروژه **SynF-X** (دست مصنوعی هوشمند) یک پروژه شخصی است و به دنبال کمک به افرادی که قطع عضو دارند تا دوباره بتوانند کار کنند.

این پروژه دارای سه بخش اصلی است:
- 🔌 **الکترونیک** - سنسورها و مدارات
- 💻 **برنامه‌نویسی** - الگوریتم‌های کنترل
- ⚙️ **مکانیک** - طراحی و چاپ سه‌بعدی

---

## ✅ وضعیت پیشرفت

| بخش | وضعیت | درصد |
|:---:|:---:|:---:|
| 🔧 Solid (مدل‌سازی) | ✅ تکمیل | 100% |
| ⚡ Electronics (الکترونیک) | ✅ تکمیل | 100% |
| 💾 Code (برنامه) | 🚧 در حال توسعه | 70% |
| 🧪 Testing (تست) | 🔄 نیاز به بهبود | 60% |

```
████████████░░░░░░░░ 70% Progress
```

---

## 🏗️ مدار و اتصالات

<p align="center">
  <img width="450" height="400" alt="Circuit Diagram" src="https://github.com/user-attachments/assets/a9272998-e404-43db-af71-3851c22303b7" />
</p>

### 📌 نمودار اتصالات

```
┌───────────────────────────────────────┐
│    عضلات باقی‌مانده (Residual Muscles)│
│             ↓                          │
│         سنسور EMG 📊                   │
│             ↓                          │
│   Arduino UNO R4 WiFi 🎮              │
│      (میکروکنترلر اصلی)                 │
│             ↓                          │
│   الگوریتم تشخیص و پردازش 🧠           │
│             ↓                          │
│   سرو موتورها (Servo Motors) 🔄       │
│             ↓                          │
│        🦾 دست حرکت می‌کند!             │
└───────────────────────────────────────┘
```

---

## 🛠️ اجزاء و تکنولوژی

| جزء | مدل | وضعیت |
|:---:|:---:|:---:|
| **میکروکنترلر** | Arduino UNO R4 WiFi | ✅ |
| **سنسور EMG** | EMG Sensor Module | ✅ |
| **موتورهای سرو** | Servo MG90S (x6) | ✅ |
| **نمایشگر** | OLED 0.96" | ✅ |
| **تغذیه** | 5V USB Power | ✅ |

### 🔨 تکنولوژی استفاده شده

<p align="left">
  <img src="https://cdn.worldvectorlogo.com/logos/arduino-1.svg" alt="arduino" width="45" height="45"/>
  <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/ISO_C%2B%2B_Logo.svg/1200px-ISO_C%2B%2B_Logo.svg.png" alt="cpp" width="45" height="45" style="background: white; padding: 5px; border-radius: 5px;"/>
  <img src="https://cdn-icons-png.flaticon.com/512/10407/10407462.png" alt="cad" width="45" height="45"/>
  <img src="https://www.labcenter.com/images/proteus_logo.jpg" alt="proteus" width="45" height="45" style="border-radius: 5px;"/>
  <img src="https://git-scm.com/images/logos/downloads/Git-Icon-1788C.png" alt="git" width="45" height="45"/>
</p>

---

## 💻 کد اصلی

```cpp
void loop() {
  // خواندن سیگنال الکترومیوگرافی
  int emgValue = readEMGSignal();
  
  // پردازش و فیلتر کردن سیگنال
  int processed = processEMGSignal(emgValue);
  
  // کالیبراسیون نسبت به شرایط محیط
  int calibrated = calibrateSignal(processed);
  
  // تشخیص نوع حرکت مورد نظر
  int movement = detectMovement(calibrated);
  
  // کنترل موتورهای سرو
  controlServoMotors(movement);
  
  // نمایش اطلاعات بر روی OLED
  updateDisplay(emgValue, movement);
  
  delay(REFRESH_RATE);
}
```

---

## 📁 ساختار پروژه

```
SynF-X/
├── 📐 Hardware/
│   ├── CAD_Models/          → مدل‌های سه‌بعدی (Solidworks)
│   ├── Circuit_Design/      → طراحی مدار (Proteus)
│   └── Assembly/            → راهنمای مونتاژ
│
├── 💾 Firmware/
│   ├── src/
│   │   ├── main.ino
│   │   ├── emg_signal_processing.cpp
│   │   ├── servo_control.cpp
│   │   └── calibration.cpp
│   └── include/
│
├── 📚 Documentation/
│   ├── EMG_Tutorial.md
│   ├── Hardware_Setup_Guide.md
│   ├── Calibration_Procedure.md
│   └── Troubleshooting.md
│
└── README.md
```

---

## 🎯 اهداف آینده

- [ ] 🤖 یادگیری ماشین برای تشخیص دقیق‌تر
- [ ] 🌐 رابط کاربری وب‌پایه
- [ ] 📱 اپلیکیشن موبایل
- [ ] 🔊 بازخورد حسی (Haptic Feedback)
- [ ] ⚡ کاهش مصرف انرژی
- [ ] 📡 اتصال بی‌سیم (Wireless)

---

## 🤝 مشارکت

اگر می‌خواهید مشارکت کنید:

1. **Fork** کنید 🍴
2. شاخه جدید بسازید: `git checkout -b feature/your-feature`
3. تغییرات خود را commit کنید: `git commit -m 'Add: description'`
4. به repository اصلی Push کنید: `git push origin feature/your-feature`
5. Pull Request باز کنید 🎉

**نکات:** نام‌های متغیر واضح • کد مع نظرات • تست شده

---

## 📜 مجوز

**MIT License** © 2025 Foad Teymoori

---

<p align="center">
  <b>💙 ساخت شده برای کمک به جامعه</b>
  <br/>
  <b>🌍 Made to Help the Community</b>
  <br/><br/>
  <img src="https://img.shields.io/github/stars/FoadTeymoori/SynF-X?style=social&label=Stars" alt="Stars">
  <img src="https://img.shields.io/github/forks/FoadTeymoori/SynF-X?style=social&label=Forks" alt="Forks">
  <img src="https://img.shields.io/github/followers/FoadTeymoori?style=social" alt="Followers">
</p>

---

<p align="center">
  <sub><strong>آخرین بروزرسانی:</strong> June 23, 2025 | <strong>نسخه:</strong> 1.2.0 | <strong>وضعیت:</strong> 🚀 Under Development</sub>
</p>

//Pwver By Foad Teymoori :)

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH  128
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1
#define OLED_ADDRESS  0x3C
#include <Servo.h>
   
   Servo servo1;
   Servo servo2;
   Servo servo3;
   Servo servo4;
   Servo servo5;

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {

    servo1.attach(3);
    servo2.attach(4);
    servo3.attach(5);
    servo4.attach(6);
    servo5.attach(7);
    pinMode(2, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);

  if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS)) {
    while (true);
  }
  drawLeftPanel();
  display.clearDisplay();
  display.display();
  drawLoading();

  digitalWrite(8, HIGH);
  delay(500);  
  digitalWrite(9, HIGH);
  delay(500);  
  digitalWrite(10, HIGH);
  delay(500);  
  digitalWrite(11, HIGH);
  delay(500); 
  digitalWrite(12, HIGH);
  delay(500); 

  digitalWrite(8, LOW); 
  delay(500);  
  digitalWrite(9, LOW); 
  delay(500);  
  digitalWrite(10, LOW); 
  delay(500);  
  digitalWrite(11,LOW); 
  delay(500); 
  digitalWrite(12, LOW); 
  delay(500); 
////////////////////فاز دوم ال ای دی 
   tone(2,50);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
   delay(200);

   noTone(2);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
   delay(200);

   tone(2,50);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
   delay(200);

   noTone(2);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
   delay(200);


   tone(2,50);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
   delay(200);

   noTone(2);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
   delay(200);

   tone(2,50);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
   delay(200);

   noTone(2);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
   delay(200);

  
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
   delay(200);

   noTone(2);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
   delay(200);

  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
   delay(800); 

  tone(2, 262);
   delay(150);
  tone(2, 330);
   delay(150);
  tone(2, 392);
   delay(150);
  tone(2, 523);
   delay(300);
  noTone(2);
      delay(80);

  tone(2, 523);
   delay(120);
  noTone(2);
    delay(60);
  tone(2, 523);
   delay(120);
  noTone(2);
      delay(80);

}

void loop() {

  display.clearDisplay();
  drawLeftPanel();
  display.display();

 servo1.write(0);
 servo2.write(0);
 servo3.write(0);
 servo4.write(0);
 servo5.write(0);
  delay(2000);


servo1.write(90);
servo2.write(90);
servo3.write(90);
servo4.write(90);
servo5.write(90);
  delay(2000);


 servo1.write(180);
 servo2.write(180);
 servo3.write(180);
 servo4.write(180);
 servo5.write(180);
  delay(2000);

}
// ════════════════════════════════════════════════════════
//  LOADING SCREEN
// ════════════════════════════════════════════════════════
void drawLoading() {
  // پروگرس بار انیمیشن
  for (int pct = 0; pct <= 100; pct += 1) {
    display.clearDisplay();

    // SynF-X وسط
    display.setTextSize(2);
    display.setTextColor(WHITE);
    display.setCursor(21, 8);
    display.print("SynF-X");

    // خط زیر اسم
    display.drawFastHLine(10, 27, 108, WHITE);

    // NOVA
    display.setTextSize(1);
    display.setCursor(40, 30);
    display.print("N O V A");

    // پروگرس بار
    display.drawRect(14, 44, 100, 5, WHITE);
    int filled = map(pct, 0, 100, 0, 98);
    display.fillRect(15, 45, filled, 3, WHITE);

    // درصد
    display.setCursor(53, 52);
    display.print(pct);
    display.print("%");
    display.setCursor(73, 50);
    int dots = (pct / 25) % 4;
    for (int d = 0; d < dots; d++) display.print(".");
    display.display();
    delay(18);
    
  }

  // مکث کوتاه بعد از ۱۰۰٪
    delay(400);
  // fade out ساده (چند فلش)
  for (int i = 0; i < 3; i++) {
    display.clearDisplay();
    display.display();
    delay(80);
    drawLoadingStatic(100);
    display.display();
    delay(80);
  }

  display.clearDisplay();
  display.display();
  delay(200);

}

void drawLoadingStatic(int pct) {
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(21, 8);
  display.print("SynF-X");
  display.drawFastHLine(10, 27, 108, WHITE);
  display.setTextSize(1);
  display.setCursor(40, 30);
  display.print("N O V A");
  display.drawRect(14, 44, 100, 5, WHITE);
  display.fillRect(15, 45, 98, 3, WHITE);
  display.setCursor(53, 52);
  display.print("100%");

}


void drawLeftPanel() {

    // ── نوار بالا ────────────────────────────────────────────
  display.drawRect(1, 3, 10, 6, WHITE);
  display.drawFastVLine(3, 4, 3, WHITE);
  display.drawFastVLine(5, 4, 3, WHITE);
  display.drawFastVLine(7, 4, 3, WHITE);
  display.drawRect(10, 4, 3, 3, WHITE);


  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(17, 2);
  display.print("     V1.0.0");


  display.drawPixel(120, 5, WHITE);
  display.drawCircle(120, 5, 2, WHITE);
  display.drawCircle(120, 5, 4, WHITE);

  display.drawFastHLine(0, 15, 128, WHITE);
///////////////////////
  // corner accents
  display.drawFastHLine(0,  16, 6, WHITE);
  display.drawFastVLine(0,  16, 6, WHITE);
  display.drawFastHLine(57, 16, 6, WHITE);
  display.drawFastVLine(62, 16, 6, WHITE);
  display.drawFastHLine(0,  63, 6, WHITE);
  display.drawFastVLine(0,  58, 6, WHITE);
  display.drawFastHLine(57, 63, 6, WHITE);
  display.drawFastVLine(62, 58, 6, WHITE);
////////
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(12, 18);
  display.print("SynF-X");
//////////
  display.setCursor(10, 30);
  display.print("N O V A");
/////////
  for (int i = 0; i < 7; i++)
    display.drawPixel(5 + i*8, 40, WHITE);

  // CPU chip
  display.drawRect(3, 46, 9, 8, WHITE);
  display.drawRect(5, 48, 5, 4, WHITE);
  display.drawFastVLine(4,  44, 2, WHITE);
  display.drawFastVLine(7,  44, 2, WHITE);
  display.drawFastVLine(10, 44, 2, WHITE);
  display.drawFastVLine(4,  54, 2, WHITE);
  display.drawFastVLine(7,  54, 2, WHITE);
  display.drawFastVLine(10, 54, 2, WHITE);

  // signal bars
  display.fillRect(14, 52, 2, 2, WHITE);
  display.fillRect(17, 50, 2, 4, WHITE);
  display.fillRect(20, 47, 2, 7, WHITE);
  display.drawRect(23, 46, 2, 8, WHITE);

  // دماسنج
  display.drawRect(28, 46, 4, 7, WHITE);
  display.drawFastVLine(30, 48, 4, WHITE);
  display.drawCircle(30, 55, 3, WHITE);

  // Arduino
  display.drawCircle(38, 50, 4, WHITE);
  display.drawCircle(43, 50, 4, WHITE);
  display.drawFastHLine(35, 50, 4, WHITE);
  display.drawFastVLine(37, 48, 4, WHITE);
  display.drawFastHLine(41, 50, 4, WHITE);

  // EMG icon
  display.drawRect(50, 46, 11, 8, WHITE);
  display.drawLine(51, 50, 52, 47, WHITE);
  display.drawLine(52, 47, 53, 53, WHITE);
  display.drawLine(53, 53, 54, 48, WHITE);
  display.drawLine(54, 48, 55, 50, WHITE);
  display.drawLine(55, 50, 59, 50, WHITE);

  
  // ── پانل راست ────────────────────────────────────────────
  // ── EMG موج ──
  display.setCursor(67, 56);
  display.print("EMG");
  int ex[] = {66,69,71,73,75,77,80,82,84,86,89,91,93,95,98,100,102,104,107};
  int ey[] = {49,49,44,54,46,49,49,46,52,49,49,45,53,49,49,46,52,49,49};
  for (int i = 0; i < 18; i++)
    display.drawLine(ex[i], ey[i], ex[i+1], ey[i+1], WHITE);


  // ── ولتاژ 12V ──
  // آیکون پریز
  display.drawRect(66, 17, 6, 5, WHITE);
  display.drawFastVLine(68, 19, 3, WHITE);
  display.drawFastVLine(70, 19, 3, WHITE);

  display.setTextSize(1);
  display.setCursor(74, 17);
  display.print("12.0V");
  // خط ثابت
  display.drawFastHLine(66, 24, 44, WHITE);
  display.fillCircle(111, 24, 1, WHITE);

  // ── ولتاژ 5V ──
  display.drawRect(66, 27, 6, 5, WHITE);
  display.drawFastVLine(68, 29, 3, WHITE);
  display.drawFastVLine(70, 29, 3, WHITE);

  display.setCursor(74, 27);
  display.print(" 5.0V");
  // خط ثابت
  display.drawFastHLine(66, 34, 44, WHITE);
  display.fillCircle(111, 34, 1, WHITE);

}



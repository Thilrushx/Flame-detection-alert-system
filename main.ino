	flame detection alert system
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

int flamepin = 7;
int ledpin   = 8;
int buzzer   = 9;

LiquidCrystal_I2C lcd(0x27, 16, 2);

bool lastState = false;   // to avoid repeat music

void setup() {
  pinMode(flamepin, INPUT);
  pinMode(ledpin, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Flame Sensor");
}

void playAlert() {
  tone(buzzer, 1000, 200);
  delay(250);
  tone(buzzer, 1200, 200);
  delay(250);
  tone(buzzer, 1500, 300);
  delay(350);
  noTone(buzzer);
}

void loop() {
  int flamevalue = digitalRead(flamepin);
  bool flameDetected = (flamevalue == LOW); // Active LOW sensor

  if (flameDetected && !lastState) {
    digitalWrite(ledpin, HIGH);

    lcd.setCursor(0, 1);
    lcd.print("Flame Detected ");

    Serial.println("Flame Detected");
    playAlert();  
  }
  else if (!flameDetected && lastState) {
    digitalWrite(ledpin, LOW);

    lcd.setCursor(0, 1);
    lcd.print("No Flame       ");

    Serial.println("No Flame");
    noTone(buzzer);
  }

  lastState = flameDetected;
  delay(100);
}s

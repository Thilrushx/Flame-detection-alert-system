🔥 Flame Detection Alert System

A simple Arduino-based Flame Detection Alert System that detects fire using a flame sensor and immediately alerts users through an LED, buzzer, LCD display, and Serial Monitor.

📌 Features
- 🔥 Detects flames in real time
- 🚨 Audible alarm using a buzzer
- 💡 LED warning indicator
- 📺 Displays system status on a 16x2 I2C LCD
- 💻 Outputs status to the Serial Monitor
- ⚡ Plays an alert tone only when a flame is first detected

🛠 Hardware Requirements
- Arduino UNO/Nano
- Flame Sensor Module
- 16x2 I2C LCD Display
- LED
- 220Ω Resistor
- Active/Passive Buzzer
- Jumper Wires
- Breadboard

🔌 Pin Configuration
| Component | Arduino Pin |
|-----------|-------------|
| Flame Sensor | D7 |
| LED | D8 |
| Buzzer | D9 |
| LCD SDA | A4 |
| LCD SCL | A5 |

📂 Libraries Used
- Wire.h
- LiquidCrystal_I2C.h

Install the **LiquidCrystal_I2C** library using the Arduino Library Manager before uploading the sketch.

🚀 How It Works

1. The flame sensor continuously monitors for flames.
2. When a flame is detected:
   - The LED turns ON.
   - A warning message appears on the LCD.
   - An alert melody plays through the buzzer.
   - A notification is printed to the Serial Monitor.
3. When no flame is detected:
   - The LED turns OFF.
   - The LCD displays **No Flame**.
   - The buzzer stops.

📁 Project Structure

```
Flame-Detection-Alert-System/
│
├── Flame_Detection_Alert_System.ino
├── README.md
├── LICENSE
└── images/
    
🔮 Future Improvements

- GSM SMS alert notifications
- Wi-Fi (ESP8266/ESP32) monitoring
- Firebase/Supabase cloud integration
- Mobile application notifications
- Temperature sensor integration
- Smoke sensor integration
- Automatic sprinkler activation

👨‍💻 Author

**Darshana Wijerathne**

Electronics | IoT | Embedded Systems | Cloud Computing

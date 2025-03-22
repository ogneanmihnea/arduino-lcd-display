# 🎮 Arduino Mega Joystick & LCD Display Project

This simple project uses an **Arduino Mega 2560**, a **joystick module**, and a **1602 LCD display** to demonstrate basic hardware interaction. On system start, the LCD displays `Press joystick`. When the joystick is pressed, the message changes to display your name: `Dumitru`.

---

## 📷 Project Overview

- **Initial Message:** `Press joystick`
- **After Joystick Press:** `Dumitru`
- **Goal:** Learn basic usage of joystick input and LCD output.

---

## 🔧 Hardware Requirements

- [Arduino Mega 2560](https://docs.arduino.cc/hardware/mega-2560/)
- [Joystick Module RXGNNC_JM-01](https://ardushop.ro/ro/electronica/1627-modul-joystick-6427854024459.html)
- [1602 LCD Display (with or without I2C)](https://protosupplies.com/product/lcd1602-16x2-i2c-blue-lcd-display/)

---

## 💻 Software Requirements

- [Arduino IDE](https://www.arduino.cc/en/software)
- (Optional) `LiquidCrystal` library (if using non-I2C LCD)

---

## 🔌 Wiring & Schematics

### 📌 Joystick to Arduino Mega

| Joystick Pin | Arduino Mega Pin |
|--------------|------------------|
| VCC          | 5V               |
| GND          | GND              |
| SW           | Digital Pin 2    |
| VRx / VRy    | *(not used)*     |

### 📺 LCD 1602 to Arduino Mega (Non-I2C Example)

| LCD Pin | Arduino Mega Pin |
|---------|------------------|
| RS      | Pin 7            |
| E       | Pin 6            |
| D4      | Pin 5            |
| D5      | Pin 4            |
| D6      | Pin 3            |
| D7      | Pin 2            |
| VCC     | 5V               |
| GND     | GND              |

> 🖍️ **Color code used in schematics:**
> - 🔴 **Red**: VCC  
> - ⚫ **Black**: GND  
> - 🔵 **Blue**: Joystick ↔ Arduino  
> - 🟡 **Yellow**: LCD ↔ Arduino  

---

## ⚙️ Setup and Build

1. **Connect the hardware** as described above.
2. **Write or upload the Arduino code** via the Arduino IDE.
3. **Power on the board** via USB or external power.
4. The LCD will first display `Press joystick`.
5. Pressing the joystick button will update the screen to show `Dumitru`.

---

## ▶️ Running the Project

1. Connect your Arduino Mega to your computer or external power source.
2. LCD displays: `Press joystick`
3. When the joystick button is pressed:
   - LCD updates to show: `Dumitru`

---

## 📦 Folder Structure


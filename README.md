# 🎮 Arduino Mega Joystick & LCD Display Project

Acest proiect simplu utilizează un **Arduino Mega 2560**, un **modul joystick** și un **LCD 1602** pentru a demonstra interacțiunea de bază între componente hardware. La pornirea sistemului, LCD-ul afișează mesajul animat `Waiting ⏳`. La prima apăsare a joystick-ului, mesajul dispare. La fiecare apăsare ulterioară, literele cuvântului `Waiting` apar una câte una.

---

## 📷 Project Overview

- **Mesaj inițial:** `Waiting ⏳` (cu animație pe LCD)
- **La prima apăsare:** ecranul este șters complet
- **Ulterior:** fiecare apăsare adaugă următoarea literă din cuvântul `Waiting`

---

## 🔧 Hardware Requirements

- [Arduino Mega 2560](https://docs.arduino.cc/hardware/mega-2560/)
- [Joystick Module RXGNNC_JM-01](https://ardushop.ro/ro/electronica/1627-modul-joystick-6427854024459.html)
- [1602 LCD Display (cu sau fără I2C)](https://protosupplies.com/product/lcd1602-16x2-i2c-blue-lcd-display/)

---

## 💻 Software Requirements

- [Arduino IDE](https://www.arduino.cc/en/software)
- *(opțional)* Biblioteca `LiquidCrystal` dacă folosești un LCD fără interfață I2C

---

## 🔌 Wiring & Schematics

### 📌 Joystick ↔ Arduino Mega

| Joystick Pin | Arduino Mega Pin |
|--------------|------------------|
| VCC          | 5V               |
| GND          | GND              |
| SW           | Digital Pin 2    |
| VRx / VRy    | *(neutilizați în acest proiect)* |

### 📺 LCD 1602 ↔ Arduino Mega (fără I2C)

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

> 🎨 **Legendă culori în schema electrică:**
> - 🔴 **Roșu**: VCC  
> - ⚫ **Negru**: GND  
> - 🔵 **Albastru**: Joystick ↔ Arduino  
> - 🟡 **Galben**: LCD ↔ Arduino  

---

## ⚙️ Setup and Build

1. **Conectează toate componentele** conform tabelului de mai sus.
2. **Încarcă codul Arduino** folosind Arduino IDE.
3. **Alimentează placa** Arduino prin USB sau sursă externă.
4. LCD-ul va afișa un mesaj animat: `Waiting ⏳`.
5. La apăsarea joystick-ului:
   - Mesajul dispare.
6. Fiecare apăsare ulterioară:
   - Adaugă câte o literă din `Waiting` pe ecran.

---

## ▶️ Running the Project

1. Pornește Arduino Mega.
2. LCD afișează: `Waiting ⏳` (cu animație)
3. Prima apăsare pe joystick:
   - Ecranul este șters complet.
4. La fiecare apăsare ulterioară:
   - Se afișează următoarea literă: `W`, apoi `a`, apoi `i`, etc.

---
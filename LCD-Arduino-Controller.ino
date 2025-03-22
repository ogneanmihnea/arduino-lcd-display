#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define JOYSTICK_BUTTON 7

LiquidCrystal_I2C lcd(0x27, 16, 2);
const char message[] = "Waiting";
int letterIndex = 0;
bool buttonPressed = false;

// Timing variables
unsigned long lastButtonPress = 0;
const int buttonDebounce = 200;

unsigned long lastAnimationUpdate = 0;
const int animationInterval = 500;
int animationIndex = 0;

// Custom characters for animation
byte time1[8] = {B00000, B01110, B01110, B00100, B01010, B01110, B00000};
byte time0[8] = {B00000, B01110, B01010, B00100, B01010, B01110, B00000};
byte time3[8] = {B00000, B01110, B01010, B00100, B01110, B01110, B00000};
byte time2[8] = {B00000, B01110, B01010, B00100, B01010, B01110, B00000};

void setup() {
    pinMode(JOYSTICK_BUTTON, INPUT_PULLUP);
    lcd.init();
    lcd.backlight();

    // Store custom characters
    lcd.createChar(0, time0);
    lcd.createChar(1, time1);
    lcd.createChar(2, time2);
    lcd.createChar(3, time3);
    
    lcd.setCursor(0, 0);
}

void loop() {
    unsigned long currentMillis = millis();

    // Handle joystick button press without blocking
    if (digitalRead(JOYSTICK_BUTTON) == LOW && !buttonPressed && (currentMillis - lastButtonPress >= buttonDebounce)) {
        buttonPressed = true;  
        lastButtonPress = currentMillis;

        if (letterIndex < strlen(message)) {
            lcd.setCursor(letterIndex, 0);
            lcd.print(message[letterIndex]);  // Display next letter
            letterIndex++;
        } else {
            lcd.clear();  // Reset display when full message is shown
            letterIndex = 0;
        }
    }

    if (digitalRead(JOYSTICK_BUTTON) == HIGH) {
        buttonPressed = false;
    }

    // Handle animation timing separately using millis()
    if (currentMillis - lastAnimationUpdate >= animationInterval) {
        lastAnimationUpdate = currentMillis;

        lcd.setCursor(8, 0);  // Position animation next to text
        lcd.write(byte(animationIndex));  // Display animated character

        animationIndex = (animationIndex + 1) % 4;  // Cycle through custom characters
    }
}

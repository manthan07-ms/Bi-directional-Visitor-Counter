#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD setup (I2C address may be 0x27 or 0x3F, check your module)
LiquidCrystal_I2C lcd(0x27, 16, 2);

#define entrySensor 2  // IR sensor at entry
#define exitSensor 3   // IR sensor at exit

int count = 0;

void setup() {
  pinMode(entrySensor, INPUT);
  pinMode(exitSensor, INPUT);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Visitor Counter");
  lcd.setCursor(0, 1);
  lcd.print("Count: 0");
}

void loop() {
  // Entry detected
  if (digitalRead(entrySensor) == LOW) {  
    count++;
    showMessage("Welcome");
    updateLCD();
    delay(800); // Debounce
  }

  // Exit detected
  if (digitalRead(exitSensor) == LOW) {  
    if (count > 0) count--;
    showMessage("Thank You");
    updateLCD();
    delay(800); // Debounce
  }
}

// Function to update visitor count
void updateLCD() {
  lcd.setCursor(0, 1);
  lcd.print("Count: ");
  lcd.print(count);
  lcd.print("    "); // Clear extra digits
}

// Function to show message temporarily
void showMessage(String msg) {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(msg);
  delay(1500); // Show message for 1.5 sec
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Visitor Counter");
}

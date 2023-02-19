#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);

int delay2 = 500;
int counter;


void setup(){
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  for (counter = 0; counter < 3; ++counter) {
    lcd.print("_");
    delay(delay2);
    lcd.clear();
    delay(delay2);
    lcd.print("__");
    delay(delay2);
    lcd.clear();
    delay(delay2);
    lcd.print("___");
    delay(delay2);
    lcd.clear();
    delay(delay2);
  }
  lcd.setCursor(0, 0);
  lcd.print("Arduino Project");
  delay(delay2);
  lcd.setCursor(3, 1);
  lcd.print("By Angelo");
  delay(delay2);
  lcd.clear();
}

void loop(){
  lcd.setCursor(0, 0);
  lcd.print("Bienvenue au clg");
  delay(1000);
  lcd.setCursor(3, 1);
  lcd.print("Beauregard");
  delay(5000);
  lcd.clear();
}
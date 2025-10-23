#include
#include
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
lcd.init();
lcd.backlight();
}
void loop() {
int reading = analogRead(A1);
float temp = (reading * 500.0) / 1023;
lcd.setCursor(0, 0);
lcd.print("Temp: ");
lcd.print(temp, 1);
lcd.print(" C");
delay(1000);
}
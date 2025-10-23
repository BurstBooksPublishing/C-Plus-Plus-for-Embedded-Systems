int counter = 0;
unsigned long lastDebounceTime = 0;
void setup() {
Serial.begin(9600);
pinMode(2, INPUT_PULLUP);
}
void loop() {
if (digitalRead(2) == LOW && millis() - lastDebounceTime > 50) {
counter++;
Serial.println(counter);
lastDebounceTime = millis();
}
}
void setup() {
pinMode(9, OUTPUT);
}
void loop() {
int sensorValue = analogRead(A0);
int brightness = map(sensorValue, 0, 1023, 0, 255);
analogWrite(9, brightness);
delay(100);
}
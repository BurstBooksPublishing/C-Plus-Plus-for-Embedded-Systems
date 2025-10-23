enum State { SLEEP, ACTIVE };
State current_state = SLEEP;
unsigned long last_check = 0;
void loop() {
unsigned long now = millis();
switch(current_state) {
case SLEEP:
if (now - last_check >= 5000) {
last_check = now;
if (digitalRead(MOTION_PIN) == HIGH) {
current_state = ACTIVE;
last_check = now; // Reset timer for ACTIVE duration
}
}
break;
case ACTIVE:
digitalWrite(LED_PIN, !digitalRead(LED_PIN));
if (now - last_check >= 10000) {
current_state = SLEEP;
}
delay(500); // Blink interval
break;
}
}
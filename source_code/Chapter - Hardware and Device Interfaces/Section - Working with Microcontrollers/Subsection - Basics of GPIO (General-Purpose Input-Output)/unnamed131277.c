bool button_pressed() {
if (GPIO_read(BUTTON_PIN) == LOW) {
delay_ms(50);
return (GPIO_read(BUTTON_PIN) == LOW);
}
return false;
}
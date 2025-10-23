// Example skeleton code
#include "gpio.h"
int main() {
GPIO_init(PIN_12, OUTPUT);
while(1) {
GPIO_write(PIN_12, HIGH);
delay_ms(500);
GPIO_write(PIN_12, LOW);
delay_ms(500);
}
}
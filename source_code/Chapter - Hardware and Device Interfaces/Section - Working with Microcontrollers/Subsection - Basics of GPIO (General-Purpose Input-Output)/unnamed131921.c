volatile uint32_t encoder_count = 0;
void GPIO_IRQHandler() {
static uint32_t last_time = 0;
if (get_system_time() - last_time > 2) {
encoder_count++;
last_time = get_system_time();
}
}
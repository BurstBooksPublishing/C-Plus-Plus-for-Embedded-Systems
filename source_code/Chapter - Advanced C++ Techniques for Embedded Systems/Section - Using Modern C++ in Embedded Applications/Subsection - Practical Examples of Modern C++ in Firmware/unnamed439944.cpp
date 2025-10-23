// Memory-mapped register at 0x40001000
constexpr uint32_t UART_BAUD_REG = 0x40001000;

void set_baud_rate(uint32_t baud) {
    // Example conversion formula: register = system_clock / baud
    uint32_t system_clock = 16000000; // 16 MHz
    uint32_t reg_value = system_clock / baud;
    *reinterpret_cast<volatile uint32_t*>(UART_BAUD_REG) = reg_value;
}
class GPIODriver {
public:
void setDirection(uint8_t pin, bool isOutput);
bool readPin(uint8_t pin);
void writePin(uint8_t pin, bool value);
};
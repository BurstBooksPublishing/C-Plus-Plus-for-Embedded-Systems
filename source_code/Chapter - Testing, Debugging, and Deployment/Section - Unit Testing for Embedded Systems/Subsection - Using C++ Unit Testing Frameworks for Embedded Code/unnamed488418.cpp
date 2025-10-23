class HardwareTimer {
public:
void start(uint32_t microseconds);
bool isExpired() const;
void stop();
};
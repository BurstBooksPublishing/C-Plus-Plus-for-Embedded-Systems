#pragma pack(1)
typedef struct {
uint32_t timestamp;
float16_t value;
} SensorReading;
#define MAX_READINGS (1024 / sizeof(SensorReading))
SensorReading buffer[MAX_READINGS];
uint16_t current_index = 0;
void log_reading(uint32_t ts, float16_t val) {
buffer[current_index] = (SensorReading){ts, val};
current_index = (current_index + 1) % MAX_READINGS;
}
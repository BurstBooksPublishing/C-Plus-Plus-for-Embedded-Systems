#define BUFFER_SIZE 256
int16_t sensor_buffer[BUFFER_SIZE];
uint16_t idx = 0;
void add_sample(int16_t sample) {
sensor_buffer[idx++] = sample;
if (idx >= BUFFER_SIZE) idx = 0;
}
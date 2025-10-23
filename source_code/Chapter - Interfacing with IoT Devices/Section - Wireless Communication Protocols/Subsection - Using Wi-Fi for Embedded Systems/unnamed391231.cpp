#include
void setup() {
Serial.begin(115200);
WiFi.begin("TEST_NETWORK", "embedded_wifi_123");
}
void loop() {
int32_t rssi = WiFi.RSSI();
Serial.printf("RSSI: %d dBm\n", rssi);
delay(5000);
}
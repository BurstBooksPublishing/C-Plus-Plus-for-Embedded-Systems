void power_manage() {
// Current implementation:
enter_deep_sleep();
ble_wakeup(); // Takes 10 ms
}
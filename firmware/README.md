# Plant Monitor Firmware

The ESP32 firmware is in `PlantMonitor.ino`. It reads the BME280 temperature/humidity sensor and soil-moisture ADC, displays readings on the I²C OLED, drives the two status LEDs, and prints readings to Serial.

**Status:** Initial firmware prepared; hardware pin assignments, sensor addresses, and soil-moisture thresholds must be verified and calibrated with the final components.

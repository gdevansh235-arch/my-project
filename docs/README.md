# 🌱 Plant Monitor

A custom ESP32-based PCB project for monitoring plant conditions.

The goal of this project is to build a small device that can measure:
- 🌡️ Temperature
- 💧 Humidity
- 🌱 Soil moisture

The measurements will be shown on an OLED display, with LEDs providing additional status information.

## 🎯 Project Goal

I want to design and build a custom PCB around an ESP32.

The PCB will connect:
- ESP32
- BME280
- I²C OLED
- Soil-moisture sensor
- Green status LED
- Red status LED

The project is being developed step-by-step, from the initial idea and system design through schematic design, PCB layout, firmware, manufacturing, and testing.

## 🔌 Initial Pin Plan

| Function | ESP32 pin |
|---|---:|
| I²C SDA | GPIO21 |
| I²C SCL | GPIO22 |
| Soil moisture | GPIO34 |
| Green LED | GPIO25 |
| Red LED | GPIO26 |

The pin plan is an initial design and must be checked against the exact ESP32 development board before manufacturing.

## 📁 Repository Structure

- `docs/` — project documentation and journal
- `hardware/` — KiCad schematic and PCB files
- `firmware/` — ESP32 firmware

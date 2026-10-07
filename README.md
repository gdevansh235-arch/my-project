# 🌱 Plant Monitor

A custom ESP32-based PCB project for monitoring plant conditions.

The goal of this project is to build a small device that can measure:

- 🌡️ Temperature
- 💧 Humidity
- 🌱 Soil moisture

The measurements will be shown on an OLED display, with LEDs providing additional status information.

This project is being developed as a hardware project using KiCad.

---

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

---

## 🧩 Planned System

```text
                    ┌──────────────┐
                    │    BME280    │
                    │ Temp/Humidity│
                    └──────┬───────┘
                           │
                          I²C
                           │
                           ▼
┌────────────────┐   ┌──────────────┐
│ Soil Moisture  │──▶│    ESP32     │
│    Sensor      │ADC│  Controller  │
└────────────────┘   └──────┬───────┘
                            │
                           I²C
                            │
                            ▼
                    ┌──────────────┐
                    │     OLED     │
                    │   Display    │
                    └──────────────┘

                     ┌──────────┐
                     │   LEDs   │
                     └──────────┘

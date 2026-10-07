# Plant Monitor Firmware

ESP32 firmware for the Plant Monitor project.

## Hardware plan

| Function | ESP32 pin |
|---|---:|
| I²C SDA | GPIO21 |
| I²C SCL | GPIO22 |
| Soil moisture analog input | GPIO34 |
| Green status LED | GPIO25 |
| Red status LED | GPIO26 |

The BME280 and OLED share the planned I²C bus. Sensor and display modules use the planned 3.3 V supply and common GND.

## Arduino IDE libraries

Install:
- Adafruit BME280 Library
- Adafruit Unified Sensor
- Adafruit SSD1306
- Adafruit GFX Library

## Firmware behaviour

The firmware starts I²C, reads temperature and humidity from the BME280, reads soil moisture through the ESP32 ADC, shows the readings on the OLED, controls the LEDs and prints readings to Serial.

The soil-moisture threshold is only a starting value and must be calibrated with the actual sensor.

## PlantMonitor.ino

```cpp
#include <Wire.h>
#include <Adafruit_BME280.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SDA_PIN 21
#define SCL_PIN 22
#define SOIL_PIN 34
#define GREEN_LED 25
#define RED_LED 26

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define OLED_ADDRESS 0x3C

Adafruit_BME280 bme;
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

bool bmeFound = false;

void setup() {
  Serial.begin(115200);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);

  Wire.begin(SDA_PIN, SCL_PIN);

  if (bme.begin(0x76) || bme.begin(0x77)) {
    bmeFound = true;
  }

  if (display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS)) {
    display.clearDisplay();
    display.setTextColor(SSD1306_WHITE);
    display.setTextSize(1);
    display.setCursor(0, 0);
    display.println("Plant Monitor");
    display.println("Starting...");
    display.display();
    delay(1000);
  }
}

void loop() {
  int soilRaw = analogRead(SOIL_PIN);

  if (bmeFound) {
    float temperature = bme.readTemperature();
    float humidity = bme.readHumidity();

    Serial.printf("Temperature: %.1f C | Humidity: %.1f %% | Soil ADC: %d\n",
                  temperature, humidity, soilRaw);

    display.clearDisplay();
    display.setCursor(0, 0);
    display.println("Plant Monitor");
    display.printf("Temp: %.1f C\n", temperature);
    display.printf("Humidity: %.1f %%\n", humidity);
    display.printf("Soil ADC: %d\n", soilRaw);
    display.display();
  } else {
    Serial.printf("BME280 not found | Soil ADC: %d\n", soilRaw);
    display.clearDisplay();
    display.setCursor(0, 0);
    display.println("Plant Monitor");
    display.println("BME280 error");
    display.printf("Soil ADC: %d\n", soilRaw);
    display.display();
  }

  if (soilRaw < 1800) {
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(RED_LED, LOW);
  } else {
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(RED_LED, HIGH);
  }

  delay(2000);
}
```

## Status

**Initial firmware prepared.** Pin assignments, sensor addresses and moisture thresholds must be verified against the final hardware before testing.

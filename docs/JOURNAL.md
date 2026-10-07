# Project Journal

## My Hack Club Half Life Project

This journal documents my progress while building my hardware project. I will record what I worked on, what I learned, problems I encountered, and how I solved them.

---

## Day 1 — Getting Started

### What I did
* Started my Hack Club Half Life project.
* Set up my workspace and created the GitHub repository.
* Installed and opened KiCad.
* Created the initial KiCad project structure.
* Decided to build an ESP32-based Plant Monitor.
* Defined the first components: ESP32, BME280, I²C OLED, soil-moisture sensor, green LED and red LED.
* Created folders for documentation, hardware and firmware.

### What I learned
* How a KiCad project is organised.
* The difference between a schematic and a PCB layout.
* How an ESP32 can read sensors and control indicators.
* Why documenting design decisions is useful during a hardware project.

### Problems / Challenges
I am still learning KiCad and electronics, so I had to understand the basic workflow and check the purpose of each component before making connections.

### Next Steps
* Draw the initial schematic.
* Confirm the ESP32 pin assignments.
* Check the power and I²C connections.
* Start planning the firmware.

---

## Day 2 — Schematic

### What I did
* Started the Plant Monitor schematic in KiCad.
* Added the ESP32, BME280, OLED, soil-moisture sensor and two status LEDs.
* Planned the I²C bus for the BME280 and OLED.
* Planned GPIO34 as the analog input for the soil-moisture sensor.
* Planned GPIO25 for the green LED and GPIO26 for the red LED, each through a resistor.
* Planned 3.3 V power and common GND for the sensor and display modules.
* Reviewed the connections before moving toward PCB layout.

### What I learned
* How to represent sensors, connectors and GPIO connections in a schematic.
* That the BME280 and OLED can share the same I²C bus when their addresses do not conflict.
* Why power, ground and signal connections need to be checked before PCB routing.
* Why the exact ESP32 board and footprints must be confirmed before manufacturing.

### Problems / Challenges
The first design is still an initial schematic. The exact ESP32 board, module footprints and final connector choices need to be verified before the PCB is considered final.

### Next Steps
* Verify the schematic in KiCad.
* Assign and check footprints.
* Move the design into the PCB Editor.
* Begin PCB placement and routing.

---

## Day 3 — PCB Design

### What I did
* Started preparing the schematic for PCB layout.
* Reviewed the components that will need footprints.
* Planned a compact board layout around the ESP32.
* Planned accessible connectors for the BME280, OLED and soil-moisture sensor.
* Planned LED positions so the status indicators are easy to see.
* Considered keeping power and ground routing short and reliable.
* Checked that the PCB layout will leave suitable access for the ESP32 USB connection.

### What I learned
* How schematic decisions affect PCB placement and routing.
* Why footprints must match the physical components being used.
* Why connectors should be positioned for easy access.
* The importance of running DRC before manufacturing a PCB.

### Problems / Challenges
The PCB is not yet a manufacturing-ready design. The exact components and footprints still need to be verified, and the routing must be checked with KiCad's Design Rules Checker.

### Next Steps
* Finalize component footprints.
* Complete the board outline and placement.
* Route the connections.
* Add a ground plane if appropriate.
* Run DRC and fix any errors.
* Continue firmware development and hardware testing.

---

## Day 4 — Refining the Design

### What I did
*

### What I learned
*

### Problems / Challenges
*

### Next Steps
*

---

## Day 5 — Testing

### What I did
*

### What I learned
*

### Problems / Challenges
*

### Next Steps
*

---

## Day 6 — Final Improvements

### What I did
*

### What I learned
*

### Problems / Challenges
*

### Next Steps
*

---

## Day 7 — Shipping

### What I did
*

### Final Result
*

### What I Learned
*

### What I Would Improve
*

### Project Status

**Completed and shipped! 🚀**

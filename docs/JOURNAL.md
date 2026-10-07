# Project Journal

## My Hack Club Half Life Project

This journal documents my progress while building my hardware project. I will record what I worked on, what I learned, problems I encountered, and how I solved them.

---

## Day 1 — Getting Started

### What I did

- Started my Hack Club Half Life project.
- Set up my workspace and created the GitHub repository.
- Installed and opened KiCad.
- Created the initial KiCad project structure.
- Decided to build an ESP32-based Plant Monitor.
- Defined the first components: ESP32, BME280, I²C OLED, soil-moisture sensor, green LED and red LED.
- Created folders for documentation, hardware and firmware.

### What I learned

- How a KiCad project is organised.
- The difference between a schematic and a PCB layout.
- How an ESP32 can read sensors and control indicators.
- Why documenting design decisions is useful during a hardware project.

### Problems / Challenges

I am still learning KiCad and electronics, so I had to understand the basic workflow and check the purpose of each component before making connections.

### Next Steps

- Draw the initial schematic.
- Confirm the ESP32 pin assignments.
- Check the power and I²C connections.
- Start planning the firmware.

Start: 5:30 PM 
End: 6:58 PM 
Time: 1hr 28 mins

---

## Day 2 — Schematic — COMPLETED ✅

### What I did

- Completed the initial Plant Monitor schematic in KiCad.
- Added the ESP32, BME280, OLED, soil-moisture sensor and two status LEDs.
- Planned the I²C bus for the BME280 and OLED.
- Planned GPIO34 as the analog input for the soil-moisture sensor.
- Planned GPIO25 for the green LED and GPIO26 for the red LED, each through a resistor.
- Planned 3.3 V power and common GND for the sensor and display modules.
- Reviewed the connections before moving toward PCB layout.

### What I learned

- How to represent sensors, connectors and GPIO connections in a schematic.
- That the BME280 and OLED can share the same I²C bus when their addresses do not conflict.
- Why power, ground and signal connections need to be checked before PCB routing.
- Why the exact ESP32 board and footprints must be confirmed before manufacturing.

### Problems / Challenges

The first design is still an initial schematic. The exact ESP32 board, module footprints and final connector choices need to be verified before the PCB is considered final.

### Day 2 Status

**Completed. ✅**

### Next Step

**Start Day 3 — PCB Design.**
Start: 09:00 AM End: 11:00 AM
Start: 03:30 PM End: 5:27 PM
Time: 3hrs 57mins

---

## Day 3 — PCB Design — COMPLETED ✅

### What I did

- Prepared the completed schematic for PCB layout in KiCad.
- Assigned footprints for all components.
- Placed the components on the PCB and created the board outline using Edge.Cuts.
- Planned the board layout around the ESP32 and positioned the connectors and LEDs.
- Routed the PCB connections.
- Corrected connectivity and routing issues found during PCB checking.
- Ran KiCad DRC repeatedly while correcting the board.
- Finalized the verified PCB as `PlantMonitor_Day3_corrected_only_v14_regenerated.kicad_pcb`.

### What I learned

- How to assign and verify footprints in KiCad.
- How PCB placement and routing affect connectivity and board layout.
- How to use KiCad DRC to find and correct PCB design problems.
- Why a verified PCB should not be changed unnecessarily after the electrical and routing checks are complete.

### Problems / Challenges

The PCB initially had several DRC and connectivity issues. I corrected the actual electrical and routing problems and reran DRC until there were no unconnected pads and no footprint errors.

The final DRC showed only one remaining warning: a library footprint mismatch for the ESP32-WROOM-32E footprint. This was left unchanged because the board was already verified and changing the footprint could destabilize the completed layout.

### Day 3 Status

**Completed. ✅**

### Final DRC Status

- **0 unconnected pads**
- **0 footprint errors**
- **0 actual electrical/routing errors**
- **1 remaining warning:** ESP32-WROOM-32E library footprint mismatch

### Next Step

**Start Day 4 — BOM and vendor research.**


Start: 03:00 PM End: 5:00 PM
Time: 2hrs

---

## Day 4 — Refining the Design

### What I did

-

### What I learned

-

### Problems / Challenges

-

### Next Steps

-

---

## Day 5 — Testing

### What I did

-

### What I learned

-

### Problems / Challenges

-

### Next Steps

-

---

## Day 6 — Final Improvements

### What I did

-

### What I learned

-

### Problems / Challenges

-

### Next Steps

-

---

## Day 7 — Shipping

### What I did

-

### Final Result

-

### What I Learned

-

### What I Would Improve

-

### Project Status

**Completed and shipped! 🚀**

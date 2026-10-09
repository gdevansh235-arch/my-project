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

**Continue refining the KiCad design and check component details.**

Start: 03:00 PM End: 5:00 PM  
Time: 2hrs

---

## Day 4 — Refining the KiCad Design

### What I did

- Continued working in KiCad on the Plant Monitor hardware design.
- Reviewed the LED components and their footprints.
- Worked on the PCB outline and learned to find the Edge.Cuts layer.
- Practised using the rectangle tool to draw the board outline.
- Reviewed the placement of components and the purpose of component pads.
- Continued checking the design before making further changes.

### What I learned

- The Edge.Cuts layer defines the physical boundary of a PCB.
- The rectangle tool can be used to draw a simple board outline on the correct layer.
- Component pads are the conductive areas used to solder component leads or make electrical connections.
- Footprints and board outlines must be checked carefully before fabrication.

### Problems / Challenges

I needed help locating the Edge.Cuts layer and rectangle tool in KiCad. I also needed to understand what component pads are and how to work safely without accidentally changing a previously checked layout.

### Next Steps

- Continue the PCB work using the correct layers and tools.
- Verify the component footprints and ESP32 connections.
- Save a backup before making significant changes.
- Record the actual work-session time and keep screenshots of progress.

---

## Day 5 — Component Pins and Connection Review

### What I did

- Continued learning the ESP32 pin layout for the Plant Monitor project.
- Reviewed the meaning of the ESP32 3.3 V pin and its role in powering compatible components.
- Asked for help identifying pin numbers and understanding the connections.
- Reviewed how component pins and PCB pads relate to the schematic.
- Planned to check the sensor, display, LED, power and ground connections before treating the design as ready for fabrication.

### What I learned

- ESP32 pin numbers and GPIO names must be checked against the exact board or module being used.
- The 3.3 V pin is a power connection, not a general-purpose GPIO pin.
- A component's pad is the physical PCB connection point; its pin number links it to the component symbol and footprint.
- The schematic, footprints and PCB layout must agree before the board can be considered ready.

### Problems / Challenges

I needed guidance identifying pin numbers and distinguishing power pins, GPIO pins and component pads. The exact ESP32 board and its footprint still need to be checked carefully before manufacturing.

### Next Steps

- Verify the ESP32 model and pinout against its documentation.
- Check every schematic-to-footprint connection.
- Run the electrical rules check (ERC) and design rules check (DRC) after the design changes.
- Save screenshots of the completed checks and record the actual work-session time.
- Continue preparing the bill of materials (BOM) and project documentation.

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

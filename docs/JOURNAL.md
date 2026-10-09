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

## Day 3 — PCB Design and Refining the KiCad Design — COMPLETED ✅

### What I did

- Prepared the completed schematic for PCB layout in KiCad.
- Assigned footprints for the components and placed them on the PCB.
- Created the board outline using the Edge.Cuts layer.
- Positioned the ESP32, connectors and LEDs, then routed the PCB connections.
- Worked on refining the KiCad design, including learning where to find Edge.Cuts and how to use the rectangle tool.
- Reviewed component footprints, placement and the purpose of component pads.
- Corrected connectivity and routing issues and ran KiCad's Design Rules Checker (DRC).
- Saved the checked PCB as `PlantMonitor_Day3_corrected_only_v14_regenerated.kicad_pcb`.

### What I learned

- How component footprints connect the schematic design to the physical PCB.
- How placement, routing and board outlines affect the PCB layout.
- The Edge.Cuts layer defines the physical boundary of the board.
- Component pads are conductive areas used to solder component leads or make electrical connections.
- How DRC helps identify PCB design problems before fabrication.

### Problems / Challenges

I needed help finding the Edge.Cuts layer and rectangle tool in KiCad, and understanding component pads. The PCB also had connectivity and DRC issues that needed checking and correction.

The final DRC record showed no unconnected pads, no footprint errors and no actual electrical/routing errors, with one remaining ESP32-WROOM-32E library footprint mismatch warning. The exact footprint should still be verified before fabrication.

### Day 3 Status

**PCB design and KiCad refinement documented. ✅**

Start: 03:00 PM  
End: 5:00 PM  
Time: 2hrs

---

## Day 4 — Bill of Materials (BOM)

### What I did

- Worked on preparing the bill of materials for the ESP32 Plant Monitor project.
- Identified the main parts required by the design: ESP32, BME280 sensor, I²C OLED display, soil-moisture sensor, green LED, red LED and supporting resistors/connectors.
- Considered recording each component's name, quantity, footprint or module type, and sourcing details in the BOM.
- Reviewed why the BOM should match the schematic and PCB design.

### What I learned

- A bill of materials lists the parts needed to assemble a project.
- A useful BOM includes component descriptions, quantities and part or supplier details where available.
- The BOM must match the latest schematic and PCB so that parts are not missed or ordered incorrectly.
- Checking component availability and specifications before ordering helps avoid substitutions that do not fit the design.

### Problems / Challenges

The component list and exact part numbers, footprints and supplier details need to be checked against the final design before ordering. The BOM should not be treated as final until these details are verified.

### Next Steps

- Check the BOM against the schematic and PCB.
- Confirm exact part numbers, quantities and connector types.
- Research vendors and compare availability and prices.
- Save the BOM in the project repository and keep it updated when the design changes.

Start: 5:30 PM  
End: 7:00 PM  
Time: 1hr 30 mins

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
-
Start: 5:00 PM  
End: 7:30 PM  
Time: 1hr 30 mins

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

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

- Started preparing the schematic for PCB design in KiCad.
- Reviewed component footprints and began arranging the design for the PCB stage.
- Explored the Edge.Cuts layer and learned how to use the rectangle tool for a board outline.
- Reviewed component placement and learned what component pads are used for.
- Saved and reviewed the PCB design file: PlantMonitor_Day3_corrected_only_v14_regenerated.kicad_pcb.

### What I learned

- Component footprints represent physical parts and their pads on a PCB.
- The Edge.Cuts layer defines the physical boundary of the board.
- Component placement needs to allow room for connectors and later routing.
- KiCad design checks help identify issues to review before fabrication.

### Problems / Challenges

I needed help finding the Edge.Cuts layer and rectangle tool and understanding component pads. The exact ESP32 footprint and module details still need to be verified before fabrication.

### Day 3 Status

**Initial PCB design and KiCad refinement documented. ✅**

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

## Day 5 — PCB Layout

### What I did

- Created or refined the PCB board outline in KiCad.
- Placed the ESP32 on the board.
- Planned the USB-C connector placement.
- Placed the sensor and other connectors.
- Arranged the OLED connector.
- Positioned the green and red LEDs.
- Reviewed component spacing and placement before routing.

### What I learned

- The board outline sets the physical size and shape of the PCB.
- Component placement affects usability, connector access and how easily tracks can be routed.
- USB-C, sensor and OLED connectors need suitable positions and clearances.
- Components should be placed to make the later routing stage manageable.

### Problems / Challenges

Placement needs to be checked against the exact component footprints and board outline. Connector access, spacing and the ESP32 footprint should be verified before routing or fabrication.

### Next Steps

- Route power and signal connections.
- Add a ground plane.
- Check clearances and run the KiCad Design Rules Checker (DRC).

Time: Not recorded
---

## Day 6 — PCB Routing and Design Checks

### What I did

- Worked on routing the PCB power connections.
- Routed signal connections between the ESP32, sensors, OLED connector, LEDs and other connectors as required by the design.
- Added a ground plane to provide a common ground return.
- Checked track and copper clearances.
- Ran KiCad's Design Rules Checker (DRC) to review potential PCB layout issues.

### What I learned

- Power and signal tracks must connect the correct pads according to the schematic.
- A ground plane can provide a common ground connection when assigned and connected correctly.
- Clearances between tracks, pads, copper zones and the board edge must meet design and fabrication requirements.
- DRC helps identify layout issues, but its results must be reviewed before fabrication.

### Problems / Challenges

Routing and ground-plane setup require careful checking to ensure tracks connect to the intended pads and the copper zone is assigned to the correct ground net. Any DRC warnings or errors should be reviewed rather than assumed to be resolved.

### Next Steps

- Review the DRC report and address remaining errors or warnings.
- Confirm the ESP32 footprint, connector footprints and ground-plane connection.
- Save the final PCB and export fabrication files only after the design has been verified.

Time: Not recorded
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

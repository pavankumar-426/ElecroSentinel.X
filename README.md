# ElecroSentinel.X
# ElectroSentinel.X 🛡️⚡

An advanced Embedded Systems monitoring, protection, and diagnostic sentinel designed for real-time electronic parameter supervision, fault detection, and automated fail-safe actions.

---

## 📌 Overview

**ElectroSentinel.X** is a firmware and hardware prototype built to monitor critical electrical and operational parameters (such as voltage surges, overcurrent, thermal thresholds, and physical intrusions) in sensitive equipment. 

Operating under a deterministic real-time embedded architecture, ElectroSentinel swiftly identifies anomalies, isolates faults via output relays, logs diagnostic telemetry, and provides real-time status feedback through local displays and alert peripherals.

---

## 🚀 Key Features

- **Real-Time Sensor Acquisition:** Continuous sampling of analog and digital parameters (voltage, current, temperature, tamper sensors).
- **Fast Fault Detection & Interruption:** Low-latency cutoff routines to protect downstream hardware from electrical transients and short circuits.
- **Visual & Audio Diagnostics:** Status output via LCD/OLED display and buzzer/LED indicators for fault codes.
- **Embedded C / Bare-Metal Reliability:** Modular driver architecture optimized for limited memory footprints and high timing precision.
- **Simulation Ready:** Circuit schematics and firmware verified using Proteus Simulation and hardware testbenches.

---

## 🛠️ Hardware & Software Stack

### Hardware Components
* **Microcontroller:** Microchip PIC family (e.g., PIC16F / PIC18F) / ATMega / STM32
* **Display Interface:** 16x2 I2C / 4-bit Parallel LCD or 0.96" I2C OLED
* **Sensors:** 
  * Current Sensor (e.g., ACS712)
  * Voltage Divider / Sensing Module
  * Temperature Sensor (e.g., LM35 / DS18B20)
* **Actuators & Protection:** 5V Relay module, Buzzer, Optocouplers
* **Power Supply:** 5V/12V Regulated DC Supply

### Software & Toolchain
* **IDE:** Microchip MPLAB X IDE
* **Compiler:** XC8 / XC16 / GCC
* **Simulation:** Proteus VSM
* **Language:** Embedded C

---

## 📂 Repository Structure

```text
ElectroSentinel.X/
├── docs/                   # Circuit diagrams, block diagrams, flowcharts
├── firmware/
│   ├── src/                # Core source files (.c)
│   │   ├── main.c          # Application state machine & setup
│   │   ├── adc.c           # Analog-to-Digital conversion drivers
│   │   ├── lcd.c           # Display driver routines
│   │   └── protection.c    # Trip logic & threshold comparators
│   └── inc/                # Header files (.h)
│       ├── config.h        # MCU configuration bits & clock settings
│       ├── adc.h
│       └── lcd.h
├── simulation/             # Proteus (.pdsprj) simulation models
├── hardware/               # Schematics, pinout diagrams, BOM (Bill of Materials)
└── README.md

⚡ Getting Started
Prerequisites
Install MPLAB X IDE (v6.00 or higher recommended).

Install the Microchip XC8 / XC16 Compiler.

(Optional) Install Labcenter Proteus to run the hardware simulation files directly without physical parts.

Building the Project
Clone this repository:

Bash
git clone [https://github.com/your-username/ElectroSentinel.X.git](https://github.com/your-username/ElectroSentinel.X.git)
Open MPLAB X IDE.

Select File > Open Project... and navigate to the cloned directory containing ElectroSentinel.X.

Click Clean and Build Project (Shift + F11).

The compiled output (.hex) will be generated inside the dist/default/production/ folder.

Flashing or Simulating
Hardware: Connect your programmer/debugger (PICkit 3/4 or SNAP) and click Make and Program Device.

Simulation: Open simulation/ElectroSentinel.pdsprj in Proteus, link the generated .hex file to the microcontroller properties, and press Play.

📊 System Flowchart
Plaintext
           [System Initialization]
                     │
         [Configure Peripherals & ADC]
                     │
    ┌──────────> [Read Sensors]
    │                │
    │      [Thresholds Exceeded?]
    │        ├─── YES ───> [Trigger Relay Cutoff] ──> [Sound Alert & Log]
    │        │
    │        └─── NO  ───> [Update LCD Status]
    └────────────────┘
🤝 Contributing
Contributions, issues, and feature requests are welcome!

Fork the Project

Create your Feature Branch (git checkout -b feature/NewFeature)

Commit your Changes (git commit -m 'Add new feature')

Push to the Branch (git push origin feature/NewFeature)

Open a Pull Request

📜 License
Distributed under the MIT License. See LICENSE for more information.


***

<ElicitationsGroup message="If you want to tailor this further to your exact setup:">
  <Elicitation label="Customize with specific MCU and sensor model numbers" query="Update the ElectroSentinel.X README with my exact microcontroller, sensor pinouts, and custom features."/>
  <Elicitation label="Add Proteus simulation wiring table to the README" query="Add a detailed hardware pinout and Proteus simulation wiring table to the ElectroSentinel.X README."/>
</ElicitationsGroup>

# 🚶 Motion Sensored Light System Using Arduino

## 📌 Overview

This project implements a **motion-activated lighting system using Arduino and a PIR (Passive Infrared) sensor**. The system automatically turns on a light when motion is detected and turns it off after a predefined delay if no motion is detected, promoting **energy-efficient and automated lighting** for rooms, corridors, or outdoor spaces.

This project is beginner-friendly and it is the which got me into learning **embedded systems, sensor interfacing, and automation using Arduino**.

---

## ⚙️ Components Used

- Arduino UNO
- PIR Motion Sensor (HC-SR501)
- Relay Module (to control AC light) 
- Jumper Wires
- Breadboard
- USB B Cable for Arduino

---

## 🛠️ Working Principle

- The PIR sensor detects infrared signals from moving objects (like humans).
- When motion is detected, the PIR sensor outputs a HIGH signal to the Arduino.
- Arduino triggers a relay module to turn ON the connected light.
- After a **preset delay** (e.g., 30 seconds) without further motion, Arduino turns OFF the light automatically.
- Delay timing can be adjusted in the Arduino code (`delay_time` variable).

---

## 🔌 Circuit Connections

| PIR Sensor | Arduino |
|-----------|---------|
| VCC       | 5V      |
| GND       | GND     |
| OUT       | D2      |

| Relay Module | Arduino |
|-------------|---------|
| VCC         | 5V      |
| GND         | GND     |
| IN          | D8      |

---

### Block Diagram

```mermaid
flowchart LR
    PIR[PIR Motion Sensor] --> Arduino[Arduino UNO]
    Arduino --> Relay[Relay Module]
    Relay --> Load["12V DC Load (Light, Buzzer, Fan)"]


---

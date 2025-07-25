```mermaid
flowchart LR
    PIR[PIR Motion Sensor] --> Arduino[Arduino UNO]
    Arduino --> Relay[Relay Module]
    Relay --> Load["12V DC Load (Light, Buzzer, Fan)"]

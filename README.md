# Hawk tuah 
## Background 📑
Hawk tuah is a sumo robot created as part of [Hardware Hacking Village Philippines' (HHV PH)](https://www.facebook.com/people/Hardware-Hacking-Village-Philippines/61550357879842/) project and was demonstrated in [ROOTCON's](https://www.facebook.com/rootcon) HHV PH village last September 2024.

## Hardware Components ⚙️
The following is the list of components used in this project:
* (1) Chassis
* (1) Arduino Uno
* (1) Adafruit Time of Flight Distance Ranging Sensor (VL6180)
* (1) IR sensor (TCRT5000)
* (1) H-bridge motor driver (L298N)
* (1) DC motor (N20 500RPM)
* (2) Wheels
* (3) Battery (18650)
* (1) Battery case
* (1) Mini breadboard
* Jumper wires
* Screws and nut


## Pin Configuration 📌
You may view the [wiring diagram](wiring-diagram.png) for a detailed visual guide or follow the pin configuration from the sensors to the Ardiuno board below.

**Adafruit Time of Flight Distance Ranging Sensor (VL6180)**
* SCL - A5
* SDA - A4

**IR sensor (TCRT5000)**
* OUT - A0

**H-bridge motor driver (L298N)**
* ENA - 5
* IN1 - 6
* IN2 - 7
* IN3 - 8
* IN4 - 9
* ENB - 10
* 12V - Vin

## Notes 📝
* Install required library [Adafruit_VL6180X by Adafruit](https://github.com/adafruit/Adafruit_VL6180X).

## Contributors 
* cupid14y
* dyscry
* s1katuna





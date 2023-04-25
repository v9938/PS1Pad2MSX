# PlayStation 1/2 joypad to MSX Joystick Converter  

This is a PlayStation 1/2 joypad to MSX Joystick converter using Arduino.  
It requires installation of PlayStation 1/2 joypads library for Arduino IDE.

Instructions for wiring follows below.

## To PSX joypad  

|PSX Pin | PSX Signal | Arduino Pin | Arduino Signal |
| :- |  :- |  :- |  :- |
| 1 | DAT | D12 | MISO [need pullup by 1k owm registor to 5V] |
| 2 | CMD | D11 | MOSI |
| 3 | 9V (for motor, If you not necessary NC)| - | - |
| 4 | GND | GND | Power GND |
| 5 | 3.3V | 3.3V | Power 3.3V |
| 6 | Attention | D2 | Digital Pin |
| 7 | SCK | D13 | SCK |
| 8 | NC | - | - |
| 9 | ACK | - | - |


## To MSX Joystick  

|MSX DSUB Pin | MSX Joystick Signal | Arduino Pin | Arduino Signal |
| :- |  :- |  :- |  :- |
| 1 | UP | D4 | Digital Pin |
| 2 | DOWN | D5 | Digital Pin |
| 3 | LEFT | D5 | Digital Pin |
| 4 | RIGHT | D5 | Digital Pin |
| 5 | +5V | +5V | Power +5V |
| 6 | TRIG A | D5 | Digital Pin |
| 7 | TRIG B | D5 | Digital Pin |
| 8 | COM | - | - |
| 9 | GND | GND | Power GND |


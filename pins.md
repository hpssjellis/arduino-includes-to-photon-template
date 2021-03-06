For serial communication with the Particle.io Photon and sensor or actuator boards we need to understand a bit about Uart (Tx/Rx), SPI and I2C communication and what PINS on the photon to attach wires to.


The datasheet that explains everything (and some advanced options) is at 
 https://docs.particle.io/datasheets/photon-datasheet/ 

-------------------------------

If the Arduino file you are porting uses the include SPI.h (which can be commented out for the Photon) then the PIN connections should be

SS to A2 (or any PIN, may not be needed on some devices, switch LOW to activate, switch HIGH to deactivate all other devices)

SCK to A3

MISO to A4

MOSI to A5

----------------------------


If the Arduino file uses UART communication (which doesn't seem to have a specific include file except include application.h or Arduino.h) which when porting to the Photon we would change the include to include Particle.h 

The RX/TX communication is a bit confusing since RX on the device goes to TX on the Photon and vice-versa. Just be careful with where these are connected.

---------------------



I2C communication can be identified from Arduino code by the  include Wire.h which can be commented out on the Photon.

(Very important to research if a  4.7K resistor is needed to be on these wires to protect the Photon from the 5V transmission voltage). Interesting if the board can be run using the Photon's 3.3V then the protective resistros may not be needed.

Pin D1 connects to SCL

Pin D0 connects to SDA

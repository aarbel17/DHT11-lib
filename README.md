# DHT11-lib
Arduino library dor DHT 11 humidity and temperature sensor
This arduino library allows to read humidity, temperature in °C, °F and K

To use this library:

1. Initialize the DHT sensor using DH11 (Name of initize)=DHT(DC pin were the sensor is connected) before void setup
2. In void loop 
  - use float (variable) = gettemp(pin were the arduino is connected) to get temperature in °C
  - use float (variable) = gethum(pin were the arduino is connected) to get humidity
  - use float (variable) = getfar(pin were the arduino is connected) to get temperature in °F
  - use float (variable) = getK(pin were the arduino is connected) to get temperature in Kelvin
  

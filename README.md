# ArduinoSwitch

An easy to use Arduino switch class, simply define a switch with a given Arduino pin value, in this example pin 2
```
easySwitch mySwitch(2);
```
this will set the switches pin value to the passed value and set the switch state to off by default.
From here you can then call the other methods to set specific states.

These include:
```
void setSwitchOn();
void setSwitchOff();
void setSwitchPin(int pSwitchPin);
void toggleSwitch();
bool getSwitchState();
int getSwitchPin();
```

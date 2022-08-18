#include "easySwitch.h"

easySwitch::easySwitch(int pSwitchPin)
{
	switchPin = pSwitchPin;
	switchState = false;
}

void easySwitch::setSwitchOn()
{
	switchState = true;
}

void easySwitch::setSwitchOff()
{
	switchState = false;
}

void easySwitch::setSwitchPin(int pSwitchPin)
{
	switchPin = pSwitchPin;
}

void easySwitch::toggleSwitch()
{
	switchState = !switchState;
}

bool easySwitch::getSwitchState()
{
	return switchState;
}

int easySwitch::getSwitchPin()
{
	return switchPin;
}

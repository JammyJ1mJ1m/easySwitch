#include "easySwitch.h"

/// <summary>
/// easySwitch constructor
/// </summary>
/// <param name="pSwitchPin">The switches arduino pin </param>
easySwitch::easySwitch(int pSwitchPin)
{
	switchPin = pSwitchPin;
	switchState = false;
}

/// <summary>
/// Sets the switch state to true
/// </summary>
void easySwitch::setSwitchOn()
{
	switchState = true;
}

/// <summary>
/// Sets the switch state to false
/// </summary>
void easySwitch::setSwitchOff()
{
	switchState = false;
}

/// <summary>
/// Sets the switch pin to a given value
/// </summary>
/// <param name="pSwitchPin">Passed bool switch state value</param>
void easySwitch::setSwitchPin(int pSwitchPin)
{
	switchPin = pSwitchPin;
}

/// <summary>
/// Flips the current switch state
/// </summary>
void easySwitch::toggleSwitch()
{
	switchState = !switchState;
}

/// <summary>
/// Gets the switch state
/// </summary>
/// <returns>the switch bool state</returns>
bool easySwitch::getSwitchState()
{
	return switchState;
}

/// <summary>
/// Gets the swtich arduino pin
/// </summary>
/// <returns>The int switch pin</returns>
int easySwitch::getSwitchPin()
{
	return switchPin;
}

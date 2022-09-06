#pragma once
class easySwitch
{
public:
	easySwitch(int pSwitchPin);
	void setSwitchOn();
	void setSwitchOff();
	void setSwitchPin(int pSwitchPin);
	void toggleSwitch();
	bool getSwitchState();
	int getSwitchPin();
	bool getLastSwitchState();
	void setLastState(bool pState);

private:
	int switchPin;
	bool switchState;
	bool lastSwitchState;
};


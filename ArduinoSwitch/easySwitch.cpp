#include "easySwitch.h"

easySwitch::easySwitch(int pSwitchPin, bool activeHigh, unsigned long debounceTime) {
    switchPin = pSwitchPin;
    pinMode(switchPin, INPUT_PULLUP);  // assuming a pullup button, adjust if needed
    this->activeHigh = activeHigh;
    this->debounceTime = debounceTime;
    switchState = !activeHigh; // default state
    lastSwitchState = switchState;
    lastChangeTime = 0;
}

void easySwitch::update() {
    bool reading = digitalRead(switchPin);
    if (!activeHigh) reading = !reading; // invert logic if active LOW

    // Check for state change with debounce
    if (reading != lastSwitchState) {
        unsigned long currentMillis = millis();
        if (currentMillis - lastChangeTime >= debounceTime) {
            lastSwitchState = reading;
            switchState = reading;
            lastChangeTime = currentMillis;
        }
    }
}

bool easySwitch::isPressed() {
    return (switchState == true); //&& (lastSwitchState == false);
}

bool easySwitch::isReleased() {
    return (switchState == false);// && (lastSwitchState == true);
}

bool easySwitch::getState() {
    return switchState;
}

int easySwitch::getPin() {
    return switchPin;
}

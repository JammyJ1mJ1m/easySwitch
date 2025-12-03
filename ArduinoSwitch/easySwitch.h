#pragma once
#include <Arduino.h>

class easySwitch {
public:
    easySwitch(int pSwitchPin, bool activeHigh = true, unsigned long debounceTime = 10);

    void update();                 // Call in loop()
    bool isPressed();              // Returns true on rising edge
    bool isReleased();             // Returns true on falling edge
    bool getState();               // Current state (HIGH/LOW)
    int getPin();

private:
    int switchPin;
    bool switchState;              // current state
    bool lastSwitchState;          // previous state
    bool activeHigh;               // true if button is active HIGH
    unsigned long debounceTime;    // debounce period in ms
    unsigned long lastChangeTime;  // last time pin changed
};

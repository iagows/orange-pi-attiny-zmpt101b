#ifndef VOLTAGE_CHECKER_HPP
#define VOLTAGE_CHECKER_HPP

#include <Arduino.h>

class VoltageChecker {
public:
    VoltageChecker(uint8_t analogPin,
                   float refVoltage = 5.0,
                   float scale = 1.0,
                   float offset = 0.0);
    void begin();
    float readRMS();

private:
    uint8_t _pin;
    float _refVoltage;
    float _scale;
    float _offset;
    static const int SAMPLES = 100;
    uint16_t readRaw();
};

#endif
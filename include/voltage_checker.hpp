#ifndef VOLTAGE_CHECKER_HPP
#define VOLTAGE_CHECKER_HPP

#include <Arduino.h>

class VoltageChecker {
public:
//     VoltageChecker(uint8_t analogPin, float referenceVoltage = 5.0, float calibrationA = -90.24, float calibrationB = 420.76, float calibrationScale = -210.2, float calibrationOffset = 210.2);
//     float readRMS();
// private:
//     uint8_t _pin;
//     float _refVoltage;
//     // Calibration: Veff = ((VeffD - B) / A) * scale + offset
//     float _A, _B, _scale, _offset;
//     static const int SAMPLES = 100;
// hardware testing
    VoltageChecker(uint8_t pin);
    void begin();
    uint16_t readRaw();
private:
    uint8_t _pin;
};

#endif // VOLTAGE_CHECKER_HPP
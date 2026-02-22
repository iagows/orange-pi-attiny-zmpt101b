#include "voltage_checker.hpp"

// VoltageChecker::VoltageChecker(uint8_t analogPin, float referenceVoltage, float calibrationA, float calibrationB, float calibrationScale, float calibrationOffset)
//     : _pin(analogPin), _refVoltage(referenceVoltage), _A(calibrationA), _B(calibrationB), _scale(calibrationScale), _offset(calibrationOffset) {}

VoltageChecker::VoltageChecker(uint8_t pin): _pin(pin) {}

void VoltageChecker::begin() {
    pinMode(_pin, INPUT);
}

uint16_t VoltageChecker::readRaw() {
    return analogRead(_pin);
}
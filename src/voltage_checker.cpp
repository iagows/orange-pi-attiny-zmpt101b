#include "voltage_checker.hpp"
#include <math.h>

VoltageChecker::VoltageChecker(uint8_t analogPin, float refVoltage, float scale, float offset)
    : _pin(analogPin), _refVoltage(refVoltage), _scale(scale), _offset(offset) {}

void VoltageChecker::begin() {
    pinMode(_pin, INPUT);
}

uint16_t VoltageChecker::readRaw() {
    uint16_t maxADC = 0;
    for (int i = 0; i < SAMPLES; ++i) {
        uint16_t leitura = analogRead(_pin);
        if (leitura > 511 && leitura > maxADC) {
            maxADC = leitura;
        }
        delay(1);
    }
    return maxADC;
}

float VoltageChecker::readRMS() {
    uint16_t maxADC = readRaw();
    if (maxADC == 0) return 0.0;

    float VmaxD = (maxADC / 1023.0) * _refVoltage;
    float VeffD = VmaxD / sqrt(2);
    // Aplica calibração linear
    return _scale * VeffD + _offset;
}
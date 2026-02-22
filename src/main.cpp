#include <Arduino.h>

#include "voltage_checker.hpp"

VoltageChecker voltageChecker(A0);

void setup() {
    Serial.begin(9600);
    voltageChecker.begin();
}

void loop() {
  uint16_t rawValue = voltageChecker.readRaw();
  Serial.println(rawValue);
  delay(100);
}

#include <Arduino.h>

#include "voltage_checker.hpp"

VoltageChecker zmpt(A6, 5.0, 85.91, 0.0);

void setup() {
  Serial.begin(9600);
  zmpt.begin();
}

void loop() {
  float voltage = zmpt.readRMS();
  Serial.print("Voltage: ");
  Serial.println(voltage);
  delay(200); 
}
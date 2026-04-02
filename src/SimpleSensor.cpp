#include "SimpleSensor.h"

SimpleSensor::SimpleSensor(int pin) {
  _pin = pin;
  _rawValue = 0;
  _minCal = 0;
  _maxCal = 1023;
}

void SimpleSensor::begin() {
  pinMode(_pin, INPUT);
}

void SimpleSensor::update() {
  _rawValue = analogRead(_pin);
}

int SimpleSensor::getRaw() {
  return _rawValue;
}

void SimpleSensor::setCalibration(int minCal, int maxCal) {
  _minCal = minCal;
  _maxCal = maxCal;
}

int SimpleSensor::getMappedValue(int outMin, int outMax) {
  int clipped = constrain(_rawValue, _minCal, _maxCal);
  return map(clipped, _minCal, _maxCal, outMin, outMax);
}

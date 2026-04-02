#ifndef SIMPLESENSOR_H
#define SIMPLESENSOR_H

#include <Arduino.h>

class SimpleSensor {
  private:
    int _pin;
    int _rawValue;
    int _minCal;
    int _maxCal;

  public:
    SimpleSensor(int pin);
    void begin();
    void update();
    int getRaw();
    void setCalibration(int minCal, int maxCal);
    int getMappedValue(int outMin, int outMax);
};

#endif

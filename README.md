# sensor_lib
Beginner Arduino sensor library practice

# SimpleSensor

A beginner Arduino library for analog sensor handling.

## Features

- Read raw analog sensor values
- Store calibration range
- Map sensor output into a custom range

## Folder structure

- `src/` contains library source files
- `examples/BasicRead/` contains example usage

## Example

```cpp
#include <SimpleSensor.h>

SimpleSensor sensor(A5);

void setup() {
  Serial.begin(9600);
  sensor.begin();
  sensor.setCalibration(0, 1023);
}

void loop() {
  sensor.update();
  Serial.println(sensor.getRaw());
  delay(200);
}

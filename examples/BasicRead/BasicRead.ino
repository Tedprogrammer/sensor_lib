#include <SimpleSensor.h>

SimpleSensor sensor(A5);

void setup() {
  Serial.begin(9600);
  sensor.begin();
  sensor.setCalibration(0, 1023);
}

void loop() {
  sensor.update();

  Serial.print("Raw: ");
  Serial.print(sensor.getRaw());

  Serial.print("  Percent: ");
  Serial.println(sensor.getMappedValue(0, 100));

  delay(200);
}

#include <Arduino.h>

void setup()
{
  Serial.begin(115200);
  Serial.println();

  auto led = Led();
  led.on();
  led.off();

  Sensor().read();
}

void loop()
{
  delay(5000);
}

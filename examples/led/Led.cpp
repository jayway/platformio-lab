#include "Led.h"

Led::Led()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

Led::~Led()
{
}

void Led::on()
{
  Serial.println("Toggle on...");
  digitalWrite(LED_BUILTIN, HIGH);
}

void Led::off()
{
  Serial.println("Toggle off...");
  digitalWrite(LED_BUILTIN, LOW);
}

void Led::loop()
{
  Serial.println("Blinking forever...");
  for(;;)
  {
    on();
    delay(1000);
    off();
    delay(1000);
  }
}

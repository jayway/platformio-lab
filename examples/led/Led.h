#ifndef LED_H
#define LED_H

#include <Arduino.h>

class Led
{
public:
  Led();
  ~Led();

  void on();
  void off();
  void loop();
};

#endif /* LED_H */

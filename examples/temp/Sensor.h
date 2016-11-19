#ifndef SENSOR_H
#define SENSOR_H

#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

class Sensor
{
public:
  Sensor();
  ~Sensor();

  void read();

private:

  DHT dht;
  float humidity;
  float temperature;
};

#endif /* SENSOR_H */

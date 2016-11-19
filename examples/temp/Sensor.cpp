#include "Sensor.h"

Sensor::Sensor() :
  dht(DHTPIN, DHTTYPE),
  humidity(0),
  temperature(0)
{
  pinMode(DHTPIN, INPUT_PULLUP);
  dht.begin();
}

Sensor::~Sensor()
{
}

void Sensor::read()
{
  humidity = dht.readHumidity();
  temperature = dht.readTemperature();
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" (C)");
}

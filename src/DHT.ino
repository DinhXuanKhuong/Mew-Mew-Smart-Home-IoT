#include "DHT.h"

#define DHTPIN 4       // chân DATA nối với GPIO4
#define DHTTYPE DHT22  // dùng DHT22

DHT dht(DHTPIN, DHTTYPE);

void DHTSetup() {
  dht.begin();
}

bool getDHT(float &temperature, float &humidity) {
  float t = dht.readTemperature();
  float h = dht.readHumidity();

  if (isnan(t) || isnan(h)) {
    return false;
  }

  temperature = t;
  humidity = h;
  return true;
}
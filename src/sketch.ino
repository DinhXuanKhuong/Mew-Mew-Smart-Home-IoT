#include <WiFi.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

void wifiConnect() {
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println(" Connected!");
}

void setup() {
  Serial.begin(9600);
  Serial.print("Connecting to WiFi");

  wifiConnect();
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Reconnecting to WiFi");
    wifiConnect();
  }

  float t, h;
  getDHT(t, h);
  Serial.println("Temp: ");
  Serial.println(t);
  Serial.println("- Humi");
  
  Serial.println(h);

  delay(5000);
}
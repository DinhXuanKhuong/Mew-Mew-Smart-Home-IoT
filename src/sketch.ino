

void setup() {
  Serial.begin(9600);
  mqttSetup();
}

void loop() {
  // mqttClient.publish("/iot/food_and_drink", "Hello from ESP32");
  // delay(1000);
  mqttLoop();
  
}
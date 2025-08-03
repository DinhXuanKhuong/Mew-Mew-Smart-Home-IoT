#define MQ2_PIN 34

float getMQ2() {
    int adcValue = analogRead(MQ2_PIN);
    float voltage = adcValue * (3.3 / 4095.0);
    return voltage;
}

String getGasLevel(float voltage) {
  if (voltage < 0.4) return "Không khí sạch";
  else if (voltage < 1.2) return "Bình thường";
  else if (voltage < 2.0) return "Khí nhẹ";
  else if (voltage < 2.8) return "Rò rỉ nhẹ!";
  else return "Cảnh báo khí mạnh!";
}
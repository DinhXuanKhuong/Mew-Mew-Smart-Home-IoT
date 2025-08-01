#define TRIG_PIN 5
#define ECHO_PIN 18

void ultraSonicSetup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

int ultraDistance(){
  long duration;
  float distanceCm;

  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // read responding time
  duration = pulseIn(ECHO_PIN, HIGH);

  distanceCm = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distanceCm);
  Serial.println(" cm");

  return distanceCm;

}
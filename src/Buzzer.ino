#define BUZZER_PIN 27

void buzzer_setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void beep(){
  digitalWrite(BUZZER_PIN, HIGH);
  delay(2000);                 
  digitalWrite(BUZZER_PIN, LOW); 
}
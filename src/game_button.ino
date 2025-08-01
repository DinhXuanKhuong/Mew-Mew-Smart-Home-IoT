#define BUTTON_PIN 15
#define LED_PIN 2
void game_button_setup(){
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
}

void button_hit() {
  int buttonState = digitalRead(BUTTON_PIN);
  if(buttonState == LOW){
    // while(digitalRead(BUTTON_PIN) == HIGH);
    Serial.println("Button pressed");
    digitalWrite(LED_PIN, HIGH);
  }
  else {
    Serial.println("Button not pressed");
    digitalWrite(LED_PIN, LOW);
  }
  delay(200);
}
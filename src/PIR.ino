
#define PIR_PIN 14  

void PIR_setup(){
  pinMode(PIR_PIN, INPUT);
}

bool PIR_Detected(){
  return digitalRead(PIR_PIN);
}

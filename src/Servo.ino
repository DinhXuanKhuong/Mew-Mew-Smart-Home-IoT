#include <ESP32Servo.h>

#define servoPin  12


Servo servo;

void servoSetup(){
  servo.attach(servoPin);
  servo.write(0);
}

void handleServo(int status){
  // 1 -> on, 0 -> off 
  if (status == 1) {
    servo.write(90);
  }
  else {
    servo.write(0);
  }
}

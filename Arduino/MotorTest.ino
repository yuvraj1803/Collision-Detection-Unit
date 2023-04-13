// Adafruit Motor shield library
// copyright Adafruit Industries LLC, 2009
// this code is public domain, enjoy!

#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);


void setup() { 
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
  pinMode(2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {


  if(!digitalRead(2)){
    motor1.setSpeed(500);
    motor2.setSpeed(500);
    motor3.setSpeed(500);
    motor4.setSpeed(500);
    digitalWrite(LED_BUILTIN, HIGH);
  }else{
    motor1.setSpeed(0);
    motor2.setSpeed(0);
    motor3.setSpeed(0);
    motor4.setSpeed(0);
    digitalWrite(LED_BUILTIN, LOW);
  }

  motor1.run(FORWARD);
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);
}

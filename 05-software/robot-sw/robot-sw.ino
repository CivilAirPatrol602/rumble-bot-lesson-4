#include <Servo.h>

Servo headServo;
Servo tailServo;

void setup() {
  // servo setup
  headServo.attach(3);
  tailServo.attach(11);
  delay(1000);
  // slowly sweep head servo to 100
  while(headServo.read()<100) {
    headServo.write(headServo.read()+1);
    delay(50);
  }
  while(headServo.read()>100) {
    headServo.write(headServo.read()-1);
    delay(50);
  }
  delay(1000);
  // slowly sweep tail servo to 100
  while(tailServo.read()<100) {
    tailServo.write(tailServo.read()+1);
    delay(50);
  }
  while(tailServo.read()>100) {
    tailServo.write(tailServo.read()-1);
    delay(50);
  }
  delay(1000);
}

void loop() {
  while(tailServo.read()<115) {
    tailServo.write(tailServo.read()+1);
    delay(50);
  }
  delay(200);
  while(headServo.read()<110) {
    headServo.write(headServo.read()+1);
    delay(50);
  }
  delay(200);
  while(tailServo.read()>85) {
    tailServo.write(tailServo.read()-1);
    delay(50);
  }
  delay(200);
  while(headServo.read()>90) {
    headServo.write(headServo.read()-1);
    delay(50);
  }
  delay(200);
}

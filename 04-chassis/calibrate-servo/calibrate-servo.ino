#include <Servo.h>

Servo calibrationServo;

int servoPosn = 0;

void setup() {
  // servo setup
  calibrationServo.attach(3);
  delay(1000);
  // slowly sweep to 100
  while(calibrationServo.read()<100) {
    calibrationServo.write(calibrationServo.read()+1);
    delay(50);
  }
  while(calibrationServo.read()>100) {
    calibrationServo.write(calibrationServo.read()-1);
    delay(50);
  }
  delay(1000);
  // slowly sweep to 150
  while(calibrationServo.read()<150) {
    calibrationServo.write(calibrationServo.read()+1);
    delay(50);
  }
  delay(1000);
  // slowly sweep to 50
  while(calibrationServo.read()>50) {
    calibrationServo.write(calibrationServo.read()-1);
    delay(50);
  }
  delay(1000);
  // slowly center back at 100
  while(calibrationServo.read()<100) {
    calibrationServo.write(calibrationServo.read()+1);
    delay(50);
  }
  delay(1000);
}

void loop() {
  delay(1000);
}

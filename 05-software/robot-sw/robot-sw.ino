// Include libraries
#include <Servo.h>

// Choose a SPEED between 1 and 10!
// Careful, if the SPEED is too high, the servos will stall...
int SPEED = 1;

// Global variables
int LED_PIN = 13;
Servo headServo;
Servo tailServo;

void setup() {
  // LED setup
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  // servo setup
  headServo.attach(3);
  delay(500);
  tailServo.attach(11);
  delay(500);
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
  digitalWrite(LED_PIN, LOW);
  while(tailServo.read()<115) {
    tailServo.write(tailServo.read()+1);
    delay(50-SPEED);
  }
  delay(200);
  digitalWrite(LED_PIN, HIGH);
  while(headServo.read()<110) {
    headServo.write(headServo.read()+1);
    delay(50-SPEED);
  }
  delay(200);
  digitalWrite(LED_PIN, LOW);
  while(tailServo.read()>85) {
    tailServo.write(tailServo.read()-1);
    delay(50-SPEED);
  }
  delay(200);
  digitalWrite(LED_PIN, HIGH);
  while(headServo.read()>90) {
    headServo.write(headServo.read()-1);
    delay(50-SPEED);
  }
  delay(200);
}

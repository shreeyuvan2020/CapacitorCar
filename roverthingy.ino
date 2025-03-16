#define RIGHT_MOTOR_POS 21  // GPIO pin controlling 2N3055 for right motor positive
#define LEFT_MOTOR_POS 20   // GPIO pin controlling 2N3055 for left motor positive

void setup() {
}

void loop() {
  moveForward();
  delay(2000);
  moveBackward();
  delay(2000);
  turnRight();
  delay(2000);
  turnLeft();
  stopMotors();
  delay(2000);
}

void moveForward() {
  digitalWrite(LEFT_MOTOR_POS, HIGH);
  digitalWrite(RIGHT_MOTOR_POS, HIGH);
}

void moveBackward() {
  digitalWrite(LEFT_MOTOR_POS, LOW);
  digitalWrite(RIGHT_MOTOR_POS, LOW);
}

void turnRight() {
  digitalWrite(LEFT_MOTOR_POS, HIGH);
  digitalWrite(RIGHT_MOTOR_POS, LOW);
}

void turnLeft() {
  digitalWrite(LEFT_MOTOR_POS, LOW);
  digitalWrite(RIGHT_MOTOR_POS, HIGH);
}

void stopMotors() {
  digitalWrite(RIGHT_MOTOR_POS, LOW);
  digitalWrite(LEFT_MOTOR_POS, LOW);
}

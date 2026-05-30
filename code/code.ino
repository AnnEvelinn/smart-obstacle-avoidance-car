#include <Servo.h>

Servo servo;

#define TRIG_PIN 9
#define ECHO_PIN 10

#define ENA 5
#define IN1 6
#define IN2 7

#define ENB 11
#define IN3 12
#define IN4 13

int distance = 0;

void setup() {

  servo.attach(3);
  servo.write(90);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  analogWrite(ENA, 180);
  analogWrite(ENB, 180);

  delay(1000);
}

void loop() {

  distance = getDistance();

  if(distance > 20) {
    moveForward();
  }
  else {

    stopCar();
    delay(300);

    moveBackward();
    delay(500);

    stopCar();
    delay(300);

    int rightDistance = lookRight();
    int leftDistance  = lookLeft();

    if(rightDistance > leftDistance) {
      turnRight();
      delay(500);
    }
    else {
      turnLeft();
      delay(500);
    }

    stopCar();
  }
}

int getDistance() {

  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH);

  int distance = duration * 0.034 / 2;

  if(distance == 0)
    distance = 250;

  return distance;
}

int lookRight() {

  servo.write(20);
  delay(700);

  int d = getDistance();

  servo.write(90);
  delay(300);

  return d;
}

int lookLeft() {

  servo.write(160);
  delay(700);

  int d = getDistance();

  servo.write(90);
  delay(300);

  return d;
}

void moveForward() {

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void moveBackward() {

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void turnLeft() {

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void turnRight() {

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void stopCar() {

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
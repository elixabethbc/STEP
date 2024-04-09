#include <Servo.h>

Servo BLDC1;
byte pin_BLDC1 = 5;

int speed = 1500;
int runtime = 250;
int pin_startswitch = 3;
byte startswitch = LOW;


void setup() {
  BLDC1.attach(pin_BLDC1, 1000, 2000);
  pinMode(pin_startswitch, INPUT_PULLUP);
  Serial.begin(9600);
  BLDC1.writeMicroseconds(1000);
  delay(500);
}

void loop() {

  startswitch=HIGH;

  while (startswitch == HIGH) {
    startswitch=digitalRead(pin_startswitch);
    Serial.println("startswitch = HIGH");
  }

  int throttle = speed;

  BLDC1.writeMicroseconds(throttle);
  Serial.println ("throttle Sent = ");
  Serial.println (speed);
  delay(runtime);
  throttle=1000;
  BLDC1.writeMicroseconds(throttle);
  Serial.println("throttle Stop");
  delay(500);
}

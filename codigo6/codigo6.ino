#include <Servo.h>

int potPin = A0;
int servoPin = 7;

Servo myservo;

void setup() {
  Serial.begin(9600);
  myservo.attach(servoPin);
}

void loop() {
  int potValue = analogRead(potPin);

  Serial.print("Valor do potenciometro = ");
  Serial.println(potValue);

  int servoValue = map(potValue, 0, 1023, 0, 180);
  myservo.write(servoValue);
  delay(1000);
}

#include <WiFi.h>
void setup() {
  pinMode(4,OUTPUT);
  pinMode(15,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(0,OUTPUT);
  pinMode(16,OUTPUT);
  pinMode(17,OUTPUT);
}

void loop() {
  digitalWrite(15, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(0, HIGH);
  digitalWrite(16, HIGH);
  digitalWrite(17, LOW);
  delay(2000);
  digitalWrite(15, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(0, HIGH);
  digitalWrite(16, HIGH);
  digitalWrite(17, LOW);
  delay(600);
  digitalWrite(15, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(0, HIGH);
  digitalWrite(16, HIGH);
  digitalWrite(17, LOW);
  delay(2000);
  digitalWrite(15, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(0, HIGH);
  digitalWrite(16, HIGH);
  digitalWrite(17, LOW);
  delay(600);
}
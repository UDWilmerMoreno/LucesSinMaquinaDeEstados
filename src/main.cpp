#include <Arduino.h>

#define Rojo 16
#define Verde 5
#define Azul 4
int retardo = 1000;

void setup()
{
  pinMode(Rojo, OUTPUT);
  pinMode(Verde, OUTPUT);
  pinMode(Azul, OUTPUT);
}

void loop()
{
  digitalWrite(Rojo, LOW);
  digitalWrite(Verde, LOW);
  digitalWrite(Azul, HIGH);
  delay(retardo);
  digitalWrite(Rojo, LOW);
  digitalWrite(Verde, HIGH);
  digitalWrite(Azul, HIGH);
  delay(retardo);
  digitalWrite(Rojo, LOW);
  digitalWrite(Verde, HIGH);
  digitalWrite(Azul, LOW);
  delay(retardo);
  digitalWrite(Rojo, HIGH);
  digitalWrite(Verde, HIGH);
  digitalWrite(Azul, LOW);
  delay(retardo);
  digitalWrite(Rojo, HIGH);
  digitalWrite(Verde, LOW);
  digitalWrite(Azul, LOW);
  delay(retardo);
  digitalWrite(Rojo, HIGH);
  digitalWrite(Verde, LOW);
  digitalWrite(Azul, HIGH);
  delay(retardo);
  digitalWrite(Rojo, HIGH);
  digitalWrite(Verde, HIGH);
  digitalWrite(Azul, HIGH);
  delay(retardo);
}
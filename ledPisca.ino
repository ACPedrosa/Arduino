/**
  Sketch para fazer um LED piscar a cada segundo
  Name: ledPisca.ino
  Purpose: algoritmo para acender um LED

  @author Ana Caroline Pedrosa e Silva
  @version 1.0 06/07/2024
*/

#define LED 13

void setup() {
  pinMode(LED, OUTPUT); 
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(2000);
  digitalWrite(LED, LOW);
  delay(1000);
}
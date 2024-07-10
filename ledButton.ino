/**
  Sketch: acendendo um LED por meio de um botão
  Name: ledButton.ino
  Purpose: algoritmo para acender LED quando um botão for precionado

  @author Ana Caroline Pedrosa e Silva
  @version 1.0 10/07/2024
*/

#define PINLED 7
#define PINBUTTON 8

void setup() {
  pinMode(PINLED, OUTPUT);
  pinMode(PINBUTTON, INPUT); 
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(PINBUTTON) == HIGH){ //se o sinal lógico do botão for 1
    digitalWrite(PINLED, HIGH); //LED ligado 
    Serial.print("LED ligado");
  }
  else{
    digitalWrite(PINLED, LOW); 
    Serial.print("LED desligado");
  }
  delay(100);
}
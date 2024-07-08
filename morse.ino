/**
  Sketch: sinalizador de código morse S.O.S.
  Name: morse.ino
  Purpose: algoritmo para sinalizar com o auxilio de um led as letras S.O.S.

  @author Ana Caroline Pedrosa e Silva
  @version 1.0 07/07/2024
*/

#define LED 13

void setup() {
  pinMode(LED, OUTPUT); 
}
void loop() {
  //3 pontos
  for (int i = 0; i<3; i++){
    digitalWrite(LED, HIGH);
    delay(300);
    digitalWrite(LED, LOW);
    delay(150);
  }
  delay(200);

  //3 traços
  for (int i = 0; i < 3; i++){
    digitalWrite(LED, HIGH);
    delay(800);
    digitalWrite(LED, LOW);
    delay(400);
  }
  delay(200);
}
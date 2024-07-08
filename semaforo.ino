/**
  Sketch: simulando um semáforo
  Name: semaforo.ino
  Purpose: algoritmo para acender 3 LEDs, com o objetivo de simular um semáforo

  @author Ana Caroline Pedrosa e Silva
  @version 1.0 08/07/2024
*/

#define LEDRED 13
#define LEDYELLOW 12
#define LEDGREEN 11
int ledDelay = 10000;

void setup() {
  pinMode(LEDRED, OUTPUT); 
  pinMode(LEDYELLOW, OUTPUT);
  pinMode(LEDGREEN, OUTPUT);
}

void loop() {
  //acende os LEDS vermelho e amarelo
  digitalWrite(LEDRED, HIGH);
  delay(ledDelay);
  digitalWrite(LEDYELLOW, HIGH);
  delay(3000);

  //acende o LED vermelho e deliga os demais 
  digitalWrite(LEDGREEN, HIGH);
  digitalWrite(LEDRED, LOW);
  digitalWrite(LEDYELLOW, LOW);
  delay(ledDelay);

  //desliga o LEDverde e liga o LED amarelo
  digitalWrite(LEDGREEN, LOW);
  digitalWrite(LEDYELLOW, HIGH);
  delay(3000);

  //deliga o LED amarelo
  digitalWrite(LEDYELLOW, LOW);
}
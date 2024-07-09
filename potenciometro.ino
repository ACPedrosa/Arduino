/**
  Sketch: lendo sinais analógicos
  Name: potenciometro.ino
  Purpose: algoritmo para ler sinais analógicos pelo potenciômetro

  @version 1.0 09/07/2024
*/

#define pinPotenciometro A0
int sensorValue = 0;
float voltage;

void setup() {
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  sensorValue = analogRead(pinPotenciometro); //recebe o retorno do sinal analógico conectado à A0
  voltage = sensorValue * (5.0 / 1024); //cálculo de tensão
  Serial.print("Tensão do potenciometro: "); // imprime no monitor serial
  Serial.print(voltage); // imprime a tensão
  Serial.print(" Valor: "); // imprime no monitor serial
  Serial.println(sensorValue); // imprime o valor
  delay(500); // atraso de 500 milisegundos
} 


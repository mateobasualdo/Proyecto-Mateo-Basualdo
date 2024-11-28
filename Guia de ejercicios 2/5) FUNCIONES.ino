int lanzarDado(int lados) {
  if (lados < 2) {
  }
  int resultado = random(1, lados + 1);
}

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(A0));

  int resultado = lanzarDado(6);

  if (resultado != -1) {
    Serial.print("Valor del dado de ");
    Serial.print(6);
    Serial.print(" lados: ");
    Serial.println(resultado);
  }
}

void loop() {
}

void setup() {
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
}

void loop() {
  int valorRojo = analogRead(A0);
  int valorVerde = analogRead(A1);
  int valorAzul = analogRead(A2);

  int intensidadRojo = map(valorRojo, 0, 1023, 0, 255);
  int intensidadVerde = map(valorVerde, 0, 1023, 0, 255);
  int intensidadAzul = map(valorAzul, 0, 1023, 0, 255);

  analogWrite(3, intensidadRojo);
  analogWrite(6, intensidadVerde);
  analogWrite(5, intensidadAzul);
  delay(10);
}

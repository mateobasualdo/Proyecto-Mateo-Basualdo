void setup() {
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
}

void loop() {
  int intensidadRojo = map(analogRead(A0), 0, 1023, 0, 255);
  int intensidadVerde = map(analogRead(A1), 0, 1023, 0, 255);
  int intensidadAzul = map(analogRead(A2), 0, 1023, 0, 255);

  analogWrite(3, intensidadRojo);
  analogWrite(6, intensidadVerde);
  analogWrite(5, intensidadAzul);
  delay(10);
}

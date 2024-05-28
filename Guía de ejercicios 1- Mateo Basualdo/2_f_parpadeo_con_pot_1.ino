void setup() {
  pinMode(3, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  int valorPot = analogRead(A0);
  int tiempo = map(valorPot, 0, 1023, 0, 10000);

  digitalWrite(3, HIGH); 
  delay(tiempo);
  digitalWrite(3, LOW); 
  delay(tiempo);
}

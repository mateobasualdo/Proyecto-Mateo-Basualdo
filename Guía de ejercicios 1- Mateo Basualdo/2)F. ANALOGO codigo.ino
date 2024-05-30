void setup() {
  pinMode(3, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  int tiempo = map(analogRead(A0), 0, 1023, 0, 10000);

  digitalWrite(3, HIGH); 
  delay(tiempo);
  digitalWrite(3, LOW); 
  delay(tiempo);
}

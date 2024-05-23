void setup()
{
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}
void loop()
{
  // LED ROJO
  analogWrite(A2, 255);
  digitalWrite(5, LOW);
  delay(1000);
  
  // LED MAGENTA
  analogWrite(A2, 0);
  digitalWrite(5, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);
  
  // LED CIAN
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  analogWrite(A3, 255);
  analogWrite(A4, 255);
  delay(1000);
  
  analogWrite(A3, 0);
  analogWrite(A4, 0);
  digitalWrite(5, HIGH);
  delay(1000);
  
}
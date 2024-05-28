void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  tone(4, 400);
  delay(400); 
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  tone(4, 1000);
  delay(400); 
}
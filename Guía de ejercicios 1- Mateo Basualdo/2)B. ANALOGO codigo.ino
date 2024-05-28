
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
}

void loop()
{
  analogWrite(3, 250);
  delay(500);
  analogWrite(5, 217);
  delay(500);
  analogWrite(6, 186);
  delay(500);
  analogWrite(9, 155);
  delay(500);
  analogWrite(10, 124);
  delay(500);
  analogWrite(11, 93);
  delay(500);
  analogWrite(A1, 50);
  delay(500);
  analogWrite(A2, 0);
  delay(500);
}
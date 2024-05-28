void setup()
{
  pinMode(A0, INPUT_PULLUP);
  pinMode(3,  OUTPUT);
  pinMode(4,  OUTPUT);
  pinMode(5,  OUTPUT);
  pinMode(6,  OUTPUT);
  pinMode(7,  OUTPUT);
  pinMode(8,  OUTPUT);
  pinMode(9,  OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  if (digitalRead(A0) != HIGH){
    
  digitalWrite(3,  LOW);
  digitalWrite(4,  LOW);
  digitalWrite(5,  LOW);
  digitalWrite(6,  LOW);
  digitalWrite(7,  LOW);
  digitalWrite(8,  LOW);
  digitalWrite(9,  LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
    
  }else{
  digitalWrite(3, HIGH);
  delay(50);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(50);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(50);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(50);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(50);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  delay(50);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(50);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(50);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(50);
  digitalWrite(12, LOW);
  delay(50);
  }
}
 
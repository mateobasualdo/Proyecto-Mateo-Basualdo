void setup()
{
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);
}

void loop()
{
  if(digitalRead(2)!= HIGH){
     digitalWrite(3, HIGH);
  delay(300);
     digitalWrite(3, LOW);
  delay(300);
  }else{
     digitalWrite(3, LOW);
  }
}
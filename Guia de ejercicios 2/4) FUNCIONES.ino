#define PIR 3
#define LED 4

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(PIR, INPUT);
}

void loop()
{
  movimiento();
  delay(100);
}

void movimiento()
{
  bool move = digitalRead(PIR);
  if(move == HIGH){
    digitalWrite(LED, HIGH);
  
  }else{
    digitalWrite(LED, LOW);
  }
}
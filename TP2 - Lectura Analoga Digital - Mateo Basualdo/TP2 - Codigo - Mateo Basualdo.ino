bool botonPausa = false;

void setup()
{
  pinMode(A0, INPUT_PULLUP);
  pinMode(A1, INPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int delayPot = map(analogRead(A1), 0, 1023, 200, 1500);
  
  Serial.print("velocidad de secuencia: ");
  Serial.println(delayPot);
  
  if (digitalRead(A0) == LOW) {
    botonPausa = !botonPausa;
    delay(50); 
    while(digitalRead(A0) == LOW); 
    delay(50); 
  }

  if (botonPausa) {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    analogWrite(A2, 0);
    analogWrite(A3, 0);
    analogWrite(A4, 0);
    Serial.println("secuencia en pausa");
    return;
  }
    
  // LED ROJO 
  analogWrite(A2, 255);
  digitalWrite(5, LOW);
  delay(delayPot);
  
  // LED MAGENTA
  analogWrite(A2, 0);
  digitalWrite(5, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(delayPot);
  
  // LED CIAN
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  analogWrite(A3, 128);
  analogWrite(A4, 128);
  delay(delayPot);
  
  analogWrite(A3, 0);
  analogWrite(A4, 0);
  digitalWrite(5, HIGH);
  delay(delayPot);
}  
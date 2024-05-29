bool iniciarSecuencia = false;
int estadoBotonAnterior = HIGH;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT_PULLUP);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() 
{
 int estadoBotonActual = digitalRead(A1);
  if (estadoBotonActual == LOW && estadoBotonAnterior == HIGH) {
    delay(50); 
    estadoBotonActual = digitalRead(A1);
    if (estadoBotonActual == LOW) {
      iniciarSecuencia = !iniciarSecuencia;
      while (digitalRead(A1) == LOW); 
      delay(50); 
   }
 }
  if (iniciarSecuencia) {
    int tiempoRetardo = map(analogRead(A0), 0, 1023, 0, 1000); 
    
    analogWrite(A2, 255 );  // ROJO
    delay(tiempoRetardo );
    
    analogWrite(A2, 0   );
    analogWrite(A3, 255 );  // AZUL
    delay(tiempoRetardo );
    
    analogWrite(A3, 0   );
    analogWrite(A4, 255 );  // VERDE
    delay(tiempoRetardo );
    
    analogWrite(A4, 0   );
    analogWrite(A5, 255 );  // MORADO
    delay(tiempoRetardo );
    
    analogWrite(A5, 0   );
    digitalWrite(2, HIGH);  // CIAN
    delay(tiempoRetardo);
    
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);  // AMARILLO
    delay(tiempoRetardo);
    
    digitalWrite(4, LOW);
    digitalWrite(8, HIGH);  // BLANCO
    digitalWrite(13, HIGH);  
    delay(tiempoRetardo);
    
    digitalWrite(8, LOW);
    digitalWrite(13, LOW);
    digitalWrite(7, HIGH);  // NARANJA
    analogWrite(3, 100);
    delay(tiempoRetardo);
    
    digitalWrite(7, LOW); 
    analogWrite(3, 0);
    digitalWrite(12, HIGH); // VERDE LIMA
    analogWrite(5, 50);    
    analogWrite(6, 50);  
    delay(tiempoRetardo);
    
    
    digitalWrite(12, LOW);
    analogWrite(5, 0);    
    analogWrite(6, 0);
    analogWrite(9, 50);   // ROSA
    analogWrite(10, 150); 
    analogWrite(11, 255);
    delay(tiempoRetardo);
    
    analogWrite(9, 0); 
    analogWrite(10, 0); 
    analogWrite(11, 0);
    delay(tiempoRetardo);
    
    } else {
    analogWrite(A2, 0);
    analogWrite(A3, 0);
    analogWrite(A4, 0);
    analogWrite(A5, 0);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
   }
}
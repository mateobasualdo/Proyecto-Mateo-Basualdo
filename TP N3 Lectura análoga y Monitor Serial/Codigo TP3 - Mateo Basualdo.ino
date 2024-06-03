void setup() 
{
  pinMode(A3, INPUT_PULLUP);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT); 
  pinMode(11, OUTPUT);  
  Serial.begin(9600); 
}

void loop()
{
  int potenciometro1 = map(analogRead(A0), 0, 1023, 0, 255);
  int potenciometro2 = map(analogRead(A1), 0, 1023, 0, 255);
  int potenciometro3 = map(analogRead(A2), 0, 1023, 0, 255);

  if(analogRead(A3) == LOW)
  {
    Serial.println("Tiene 5s para configurar el color del led");
    analogWrite(9, 0);
    analogWrite(10, 0);
    analogWrite(11, 0);
    delay(5000);

    potenciometro1 = map(analogRead(A0), 0, 1023, 0, 255);
    potenciometro2 = map(analogRead(A1), 0, 1023, 0, 255);
    potenciometro3 = map(analogRead(A2), 0, 1023, 0, 255);

    Serial.print("El led esta usando esta configuracion de colores RGB:(");
    Serial.print(potenciometro1);
    Serial.print("; ");
    Serial.print(potenciometro2);
    Serial.print("; ");
    Serial.print(potenciometro3);
    Serial.println(")");

    analogWrite(9, potenciometro3); 
    analogWrite(10, potenciometro2); 
    analogWrite(11, potenciometro1); 
    delay(5000);
    
  }else{
    analogWrite(9, 0);
    analogWrite(10, 0);
    analogWrite(11, 0);
  }
}
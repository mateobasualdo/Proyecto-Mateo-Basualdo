void setup() 
{
  pinMode(A0, INPUT);  
  pinMode(3, OUTPUT); 
}

void loop() 
{
  int frecuencias = map(analogRead(A0), 0, 1023, 100, 1000);
  tone(3, frecuencias);
}

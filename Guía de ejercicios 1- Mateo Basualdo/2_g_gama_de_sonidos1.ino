void setup() 
{
  pinMode(A0, INPUT);  
  pinMode(3, OUTPUT); 
}

void loop() 
{
  int volumen = analogRead(A0);
  int frecuencias = map(volumen, 0, 1023, 100, 1000);
  tone(3, frecuencias);
}
#define TRIG 9
#define ECHO 10

void setup() {
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop() {
  float distancia = medirDistancia();
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");
  delay(1000);
}

float medirDistancia() {
  
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);        
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);       
  digitalWrite(TRIG, LOW);  
  
  int duracion = pulseIn(ECHO, HIGH);

  float distancia = duracion * 0.034 / 2; 
  return distancia;
}

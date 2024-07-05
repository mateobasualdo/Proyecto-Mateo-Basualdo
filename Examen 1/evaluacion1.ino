#define BUZZ 5
#define TRIG 4
#define ECHO 3
#define POT  A0

#define MSG(x,y,z) Serial.print(x); Serial.print(y); Serial.println(z);

int x = 0;

void setup()
{
 pinMode( ECHO, INPUT);
 pinMode( POT,  INPUT);
 pinMode( BUZZ, INPUT);
 pinMode( TRIG, OUTPUT);
 Serial.begin(9600);
}

void loop()
{
  int potenciometro = analogRead(POT);
  int distanciaPot = map(potenciometro, 0, 1023, 50, 200);
 
  /// SENSOR ULTRASONICO
  
  digitalWrite( TRIG , LOW);
  delayMicroseconds(2);
  digitalWrite( TRIG , HIGH);
  delayMicroseconds(10);
  digitalWrite( TRIG , LOW);
  float duracion = pulseIn( ECHO , HIGH);
  float distancia = duracion / 57.6;
 
  int distSensor = map(distancia, 6, 300, 20, 330);
 
 if (POT > distancia)
 {
   x = POT - distSensor;
 }else{
   x = distSensor - POT;
 }

  analogWrite(BUZZ, 255);
  delay(x);
  analogWrite(BUZZ, 0);
  delay(x);
 
  MSG("Distancia actual: ", distancia, "cm");
  MSG("Posicion del objetivo: ", distanciaPot, "cm");
  MSG("Velocidad ", x, "ms");  
}

// 3 maps
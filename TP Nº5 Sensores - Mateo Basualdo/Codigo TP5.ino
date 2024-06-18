#define LED_R_DIS 5
#define LED_R_PIR 8
#define LED_G     6
#define TRIG      4
#define ECHO      3
#define PIR       2
#define BUZ       7

#define MSG(a,b) Serial.print(a); Serial.println(b);

void setup()
{
  pinMode(LED_R_PIR, OUTPUT );
  pinMode(LED_R_DIS, OUTPUT );
  pinMode(LED_G,     OUTPUT );
  pinMode(ECHO,      INPUT  );
  pinMode(TRIG,      OUTPUT );
  pinMode(PIR,       INPUT  );
  pinMode(BUZ,       OUTPUT );
  Serial.begin(9600);
}

void loop()
{
  ////////// SENSOR PIR MOVIMIENTO
  
  bool move = digitalRead(PIR);
  if( move == HIGH ){
    digitalWrite(LED_G, HIGH);
    digitalWrite(LED_R_PIR, HIGH); 
    MSG("ALERTA:", "intruso");
    
  }else{
    digitalWrite(LED_G,    HIGH);
    digitalWrite(LED_R_PIR, LOW);
  }
  
  ////////// SENSOR ULTRASONICO
  
  digitalWrite(TRIG, LOW); 
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);    
  digitalWrite(TRIG, LOW); 
  
  float tiempo = pulseIn( ECHO, HIGH );
  float distancia = tiempo / 57.6;  
  MSG("Distancia:", distancia);
  
  if (distancia < 100)
  {
    digitalWrite(LED_R_DIS, HIGH);
    digitalWrite(BUZ, HIGH);
    delay(100);
    
  }else{
    digitalWrite(BUZ, LOW);
    digitalWrite(LED_R_DIS, LOW);
    delay(100);
  }
}
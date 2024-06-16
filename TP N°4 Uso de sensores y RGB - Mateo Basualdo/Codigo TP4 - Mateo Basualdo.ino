#define LED_R 9
#define LED_B 10
#define LED_G 11
#define LDR   A0
#define TMP   A1

#define MSG(a,b) Serial.print(a); Serial.println(b);

void setup()
{
  pinMode(LDR,   INPUT  );
  pinMode(TMP,   INPUT  );
  pinMode(LED_R, OUTPUT );
  pinMode(LED_B, OUTPUT );
  pinMode(LED_G, OUTPUT );
  
  Serial.begin(9600);
}

void loop()
{
  int t = analogRead(TMP);
  float temperatura = (t * 5.0 / 1024) * 100 - 50;
  
MSG("Temp.:", temperatura);
  
int x = analogRead(LDR); // 1-310
int luz = map(x, 1, 310, 0, 100);

MSG("LUZ(%):",luz);
MSG("LDR:", x);

if(luz >= 30 && luz <= 70)
  {
    if (temperatura > 90)
    {  
      digitalWrite(LED_R, HIGH);
    } 
    else
    {
      digitalWrite(LED_R, LOW);
    }
    
    if (temperatura < 18)
    {  
      digitalWrite(LED_B, HIGH);
    }
    else
    {
      digitalWrite(LED_B, LOW);
    }
    
    if (temperatura >= 18 && temperatura <= 90)
    {  
      digitalWrite(LED_G, HIGH);
    }
    else
    {
      digitalWrite(LED_G, LOW);
    }
  }
  else
  {
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_B, LOW);
    digitalWrite(LED_G, LOW);
  }
}
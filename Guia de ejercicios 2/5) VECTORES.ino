#define LED_R 10
#define LED_B 11

int vec1[] = {1, 0, 0, 1, 1, 0, 1, 1};  
int vec2[] = {0, 1, 0, 1, 0, 0, 1, 0};  

int numeros = sizeof(vec1) / sizeof(vec1[0]);


void setup() {
  pinMode(LED_R, OUTPUT);
  pinMode(LED_B, OUTPUT);
}

void loop() {
  for (int i = 0; i < numeros; i++) {
    if (vec1[i] == 1) {
      digitalWrite(LED_R, HIGH); 
    } else {
      digitalWrite(LED_R, LOW);   
    }

    
    if (vec2[i] == 1) {
      digitalWrite(LED_B, HIGH);
    } else {
      digitalWrite(LED_B, LOW);  
    }
    delay(1000);
  }
}

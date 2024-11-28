#define BUZZ 3

int numeros[10];

void setup() {
  pinMode(BUZZ, OUTPUT);
  Serial.begin(9600);
  

  for (int i = 0; i < 10; i++) {
    numeros[i] = random(1, 11);
    Serial.print("Numeros generados: ");
    Serial.println(numeros[i]);

    if (numeros[i] == 5) {
      digitalWrite(BUZZ, HIGH);
      delay(500);
      digitalWrite(BUZZ, LOW);
    }
  }
}

void loop() {
  
}

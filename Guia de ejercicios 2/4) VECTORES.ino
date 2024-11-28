#define LED 13

int vec[] = {1, 0, 0, 1, 1, 0, 1, 1};
int numeros = sizeof(vec) / sizeof(vec[0]);

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  for (int i = 0; i < numeros; i++) {
    if (vec[i] == 1) {
      digitalWrite(LED, HIGH);
    } else {
      digitalWrite(LED, LOW);
    }
    delay(1000);
  }
}

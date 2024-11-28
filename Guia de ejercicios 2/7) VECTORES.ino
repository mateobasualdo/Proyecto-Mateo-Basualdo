const int ledsPines[] = {13, 12, 11, 10, 9};
int numLeds = sizeof(ledsPines) / sizeof(ledsPines[0]);

int vector[][5] = {
  {1, 0, 0, 0, 0},
  {1, 1, 0, 0, 0},
  {1, 1, 1, 0, 0},
  {1, 1, 1, 1, 0},
  {1, 1, 1, 1, 1},
  {0, 1, 1, 1, 1},
  {0, 0, 1, 1, 1},
  {0, 0, 0, 1, 1},
  {0, 0, 0, 0, 1},
  {0, 0, 0, 0, 0}
};

int filas = sizeof(vector) / sizeof(vector[0]);


void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledsPines[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < numLeds; j++) {
      digitalWrite(ledsPines[j], vector[i][j]);
    }
    
    delay(500);
  }
}

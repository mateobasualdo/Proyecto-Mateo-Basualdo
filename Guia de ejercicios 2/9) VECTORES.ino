#define LED_R 11
#define LED_B 10
#define LED_G 9

Int L1[] = {122, 234, 21};
int L2[] = {33, 53, 155};
int L3[] = {200, 255, 12};

int colores[3][3] = {
  {122, 234, 21},   // L1
  {33, 53, 155},    // L2
  {200, 255, 12}    // L3
};

void setup() {
  
  pinMode(LED_R, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(LED_G, OUTPUT);
}

void loop() {
  
  for (int i = 0; i < 3; i++) {
    analogWrite(LED_R, colores[i][0]);
    analogWrite(LED_G, colores[i][1]);
    analogWrite(LED_B, colores[i][2]);

    delay(1000);
  }
}

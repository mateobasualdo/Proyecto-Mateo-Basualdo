#define LED_R 9
#define LED_G 10
#define LED_B 11

void setup() {
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
}

void loop() {
  for (int red = 0; red <= 255; red++) {
    for (int green = 0; green <= 255; green++) {
      for (int blue = 0; blue <= 255; blue++) {
        analogWrite(LED_R, red);
        analogWrite(LED_G, green);
        analogWrite(LED_B, blue);
        delay(1);
      }
    }
  }
}

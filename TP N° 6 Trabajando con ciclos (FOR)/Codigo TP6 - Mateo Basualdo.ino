#define LED_R 9
#define LED_G 10
#define LED_B 11

#define LED_RGB(rojo, verde, azul) \
  analogWrite(LED_R, rojo); \
  analogWrite(LED_G, verde); \
  analogWrite(LED_B, azul); \
  Serial.print(" Rojo: "); Serial.print(rojo); \
  Serial.print(" Verde: "); Serial.print(verde); \
  Serial.print(" Azul: "); Serial.println(azul);

void setup() {
  pinMode(LED_R, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(LED_G, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for (int rojo = 0; rojo <= 255; rojo += 5) {
    for (int verde = 0; verde <= 255; verde += 5) {
      for (int azul = 0; azul <= 255; azul += 5) {
        LED_RGB(rojo, verde, azul);
        delay(10);
    }
  }
 }
}

void funcionMultiplos(int vec[], int numeros) {
  
  for (int i = 0; i < numeros; i++) {
    vec[i] = random(1, 11) * 10;
  }
}

void setup() {
  
  Serial.begin(9600);
  randomSeed(analogRead(0));

  int vecRandom[5];
  funcionMultiplos(vecRandom, 5);

  Serial.println("Vector de numeros aleatorios multiplos de 10: ");
  for (int i = 0; i < 5; i++) {
    Serial.println(vecRandom[i]);
  }
}

void loop() {

}

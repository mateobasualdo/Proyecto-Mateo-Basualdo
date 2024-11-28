float vec1[] = {5.4, 5.39, 5.38, 5.31, 5.21, 5.03, 4.45, 3.95, 2.6, 1.49};
int numeros = sizeof(vec1) / sizeof(vec1[0]);

void setup() {
  Serial.begin(9600);
  float max = vec1[0];

  for (int i = 1; i < numeros; i++) {
    if (vec1[i] > max) {
      max = vec1[i]; 
    }
  }

  Serial.print("El mayor numero del vector es: ");
  Serial.println(max);
}

void loop() {
  
}

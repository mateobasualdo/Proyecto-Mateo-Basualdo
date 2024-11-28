int vec1[] = {10, 4, 2};
int numeros = sizeof(vec1) / sizeof(vec1[0]);

void setup()
{
  Serial.begin(9600);
  Serial.println("Vector original:");
  for (int i = 0; i < numeros; i++) {
    Serial.print(vec1[i]);
    Serial.print(" ");
  }
  Serial.println();

  for (int i = 0; i < numeros - 1; i++) {
    for (int j = 0; j < numeros - i - 1; j++) {
      if (vec1[j] > vec1[j + 1]) {
        
        int temp = vec1[j];
        vec1[j] = vec1[j + 1];
        vec1[j + 1] = temp;
      }
    }
  }

  Serial.println("Vector ordenado:");
  for (int i = 0; i < numeros; i++) {
    Serial.print(vec1[i]);
    Serial.print(" ");
  }
    Serial.println();
}

void loop() {
  
}

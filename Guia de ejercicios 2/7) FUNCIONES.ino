
void funcionOrdenar(int vector[], int numerosVec) {
  for (int i = 0; i < numerosVec - 1; i++) {
    for (int a = 0; a < numerosVec - i - 1; a++) {
      if (vector[a] < vector[a + 1]) { 
        
        int temp = vector[a];
        vector[a] = vector[a + 1];
        vector[a + 1] = temp;
      }
    }
  }
}

void setup() {
  Serial.begin(9600);
  
  Serial.println("Ingrese la cantidad de numeros del vector:");
  while (Serial.available() == 0);
  int numeros = Serial.readString().toInt();

  int vector[numeros];

  for (int i = 0; i < numeros; i++) {
    Serial.print("Ingresa el numero ");
    Serial.print(i + 1);
    Serial.println(":");
    while (Serial.available() == 0);
    vector[i] = Serial.readString().toInt();
  }

  Serial.println("Vector original:");
  for (int i = 0; i < numeros; i++) {
    Serial.println(vector[i]);
  }

  funcionOrdenar(vector, numeros);

  Serial.println("Vector ordenado de mayor a menor:");
  for (int i = 0; i < numeros; i++) {
    Serial.println(vector[i]);
  }
}


void loop() {

}

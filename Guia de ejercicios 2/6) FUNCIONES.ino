int vec[5];
int pinesIng = 0;

void funcion(int vec[], int vecIng) {
  for (int i = 0; i < vecIng; i++) {
    digitalWrite(vec[i], HIGH);
  }
}

void setup() {
  Serial.begin(9600);
  
  Serial.println("Ingrese la cantidad de pines del vector: ");
  while (Serial.available() == 0);
  pinesIng = Serial.read();
  
  if (pinesIng > 5) {
    pinesIng = 5;
  }

  for (int i = 0; i < pinesIng; i++) {
    Serial.print("Ingrese el pin ");
    Serial.print(i + 1);
    Serial.println(": ");
    
    while (Serial.available() == 0);
    vec[i] = Serial.read();
  }

  for (int i = 0; i < pinesIng; i++) {
    pinMode(vec[i], OUTPUT);
  }

  funcion(vec, pinesIng);
}

void loop() {

}

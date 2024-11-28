int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; 
int numeros = sizeof(array) / sizeof(array[0]);  
int suma = 0; 
float media = 0; 


void setup() {
  Serial.begin(9600);

  for (int i = 0; i < numeros; i++) {
    suma += array[i];
  }

  media = (float)suma / numeros;

  Serial.print("La media es: ");
  Serial.println(media);
}

void loop() {
 
}

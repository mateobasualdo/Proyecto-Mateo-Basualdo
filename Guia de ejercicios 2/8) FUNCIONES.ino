bool esMultiplo(int num1, int num2) {
  return (num1 % num2 == 0);
}

void setup() {
  Serial.begin(9600);

  Serial.println("Ingrese el primer numero:");
  while (Serial.available() == 0);
  int numero1 = Serial.readString().toInt();

  Serial.println("Ingrese el segundo numero:");
  while (Serial.available() == 0);
  int numero2 = Serial.readString().toInt();

  if (esMultiplo(numero1, numero2)) {
    Serial.print(numero1);
    Serial.print(" es multiplo de ");
    Serial.println(numero2);
  } else {
    Serial.print(numero1);
    Serial.print(" no es multiplo de ");
    Serial.println(numero2);
  }
}


void loop() {

}


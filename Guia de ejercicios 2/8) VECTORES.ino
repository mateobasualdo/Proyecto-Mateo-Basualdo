#define LED   13
#define BOTON A0
int vector[5];
int contador = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BOTON, INPUT_PULLUP);
  
  Serial.begin(9600);
}

void loop() {
  
  while (contador < 5) {
    digitalWrite(LED, HIGH);
    delay(3000);

    int estadoBoton = digitalRead(BOTON);
    digitalWrite(LED, LOW);
    delay(1000);  

    vector[contador] = estadoBoton;
    contador++;
    delay(1000);
  }

  Serial.println("Secuencia de botones:");
  for (int i = 0; i < 5; i++) {
    Serial.print(vector[i]);
    Serial.print(" ");
  }
  Serial.println();
  
  contador = 0;
  delay(2000);
}

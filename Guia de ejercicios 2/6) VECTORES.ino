int vec[] = {2, 6, 10, 11};
int numeros = sizeof(vec) / sizeof(vec[0]);

void setup(){
  Serial.begin(9600);
  delay(1000);
  
 for(int i = 0; i < numeros; i++){
   Serial.print("Multiplos de ");
   Serial.print(vec[i]);
   Serial.println(":");
  
 for(int a = 1; a <= 5; a++){
   Serial.print(vec[i] * a);
   Serial.print(" ");
  }
   
  Serial.println();
 }
}

void loop() {
  
}
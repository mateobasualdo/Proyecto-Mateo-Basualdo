int conteo = 0;

void setup()
{
  pinMode(2,  INPUT_PULLUP);
  pinMode(3,  OUTPUT);
  pinMode(4,  OUTPUT);
  pinMode(5,  OUTPUT);
  pinMode(6,  OUTPUT); 
  pinMode(7,  OUTPUT); 
  pinMode(8,  OUTPUT);
  pinMode(9,  OUTPUT);  
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT); 
}

void loop()
{
  if(digitalRead(2) == LOW){
    conteo = conteo + 1;
    if(conteo > 3){
      conteo = 1; 
}
  }else{
    
  digitalWrite(11, LOW);
 
  }if(conteo == 1){
    
    digitalWrite(3,  HIGH);
    
  }else if(conteo == 2){
    
    digitalWrite(3,  LOW);
    digitalWrite(7,  HIGH);  
    
  }else if(conteo == 3){
    
    digitalWrite(7,  LOW); 
    digitalWrite(11, HIGH); 
 }  
}
    

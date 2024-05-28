int conteo = 0;

void setup() 
{
  pinMode(2, INPUT_PULLUP);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() 
{
  if(digitalRead(2) != HIGH){
    conteo = conteo + 1;
    if(conteo > 7){
      conteo = 1; 
    }
  }else{

    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);

  }if(conteo == 1){
    
    digitalWrite(4, HIGH); 
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
     
  }else if(conteo == 2){
    
    digitalWrite(4 , LOW);
    digitalWrite(7, HIGH);  
    digitalWrite(8, HIGH);
    
  }else if(conteo == 3){
    
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);  
    digitalWrite(8, HIGH);
    
  }else if(conteo == 4){
    
    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH);  
    digitalWrite(8,  LOW);
    
  }else if(conteo == 5){
    
    digitalWrite(4, LOW);
    digitalWrite(7, HIGH);  
    digitalWrite(8,  LOW);
    
  }else if(conteo == 6){
    
    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH);  
    digitalWrite(8, HIGH);
    
  }else if(conteo == 7){
    
    digitalWrite(4, HIGH);
    digitalWrite(7, LOW);  
    digitalWrite(8, HIGH);
  } 
}
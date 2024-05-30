bool luzPrendida = false;

void setup() 
{
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2,  INPUT_PULLUP);
  pinMode(A1, INPUT);
}

void loop() 
{
  if (digitalRead(2) == LOW) {
    delay(50); 
    if (digitalRead(2) == LOW) {
      luzPrendida = !luzPrendida;
      while (digitalRead(2) == LOW); 
      delay(50); 
    }
  }

  if (luzPrendida) {
    int volumenRojo = 0;
    int volumenVerde = 0;
    int volumenAzul = 0;

    if (analogRead(A1) < 341) {
      volumenRojo = map(analogRead(A1), 0, 340, 0, 255);
      volumenVerde = 0;
      volumenAzul = 0;
    } else if (valorPotencio < 682) {
      volumenRojo = 0;
      volumenVerde = map(analogRead(A1), 341, 681, 0, 255);
      volumenAzul = 0;
    } else {
      volumenRojo = 0;
      volumenVerde = 0;
      volumenAzul = map(analogRead(A1), 682, 1023, 0, 255);
    }

    analogWrite(3,  volumenRojo);
    analogWrite(5,  volumenVerde);
    analogWrite(6,  volumenAzul);
  } else {
    analogWrite(3, 0);
    analogWrite(5, 0);
    analogWrite(6, 0);
  }
}

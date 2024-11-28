#include <LiquidCrystal.h> 

LiquidCrystal LCD(2, 4, 6, 7, 8, 9);

byte customChar[] = {
  B00000,
  B01010,
  B01010,
  B01010,
  B00000,
  B10001,
  B01110,
  B00000
};
  

void setup()
{
  LCD.createChar(4, customChar);
  LCD.begin(16, 2);
  
  bienvenida();
  delay(2000);  
  
  inicio();
  delay(2000);
  
  fin();
  delay(2000);
  
  int puntuacion = puntuacionAleatoria(); 
  puntuacionFinal(puntuacion);
  delay(2000);
}

void loop()
{
  
}


void bienvenida() 
{
  delay(1000);
  LCD.clear();
  LCD.setCursor(0, 0);
  LCD.print("Bienvenido al");
  LCD.setCursor(0, 1);
  LCD.print("juego!");
  LCD.setCursor(6, 1);
  LCD.write( byte(4) );
}

void inicio()
{
  delay(1000);
  LCD.clear();
  LCD.setCursor(0, 0);
  LCD.print("Iniciando");
  LCD.setCursor(0, 1);
  LCD.print("partida...");
}

void fin()
{
  delay(1000);
  LCD.clear();
  LCD.setCursor(0, 0);
  LCD.print("Fin del juego.");
}

int puntuacionAleatoria()
{
  randomSeed(analogRead(0));
  int puntuacion = random(1, 101);
  return puntuacion;
}

void puntuacionFinal(int puntuacion)
{
  delay(1000);
  LCD.clear();
  LCD.setCursor(0, 0);
  LCD.print("Puntuacion final: ");
  LCD.setCursor(0, 1);
  LCD.print(puntuacion);
}



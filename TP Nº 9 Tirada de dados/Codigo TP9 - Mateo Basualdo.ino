#define DISPLAY1_A 2
#define DISPLAY1_B 3
#define DISPLAY1_C 4
#define DISPLAY1_D 5
#define DISPLAY1_E 6
#define DISPLAY1_F 7
#define DISPLAY1_G 8

#define DISPLAY2_A 9
#define DISPLAY2_B 10
#define DISPLAY2_C 11
#define DISPLAY2_D 12
#define DISPLAY2_E 13
#define DISPLAY2_F A0
#define DISPLAY2_G A1

#define BOTON      A2
#define BUZZER     A3

int cero[7] = {1, 1, 1, 1, 1, 1, 0};
int uno[7]  = {0, 1, 1, 0, 0, 0, 0};
int dos[7]  = {1, 1, 0, 1, 1, 0, 1}; 
int tres[7] = {1, 1, 1, 1, 0, 0, 1}; 
int cuatro[7] = {0, 1, 1, 0, 0, 1, 1}; 
int cinco[7]  = {1, 0, 1, 1, 0, 1, 1}; 
int seis[7]   = {1, 0, 1, 1, 1, 1, 1}; 

int* numeros[] = {cero, uno, dos, tres, cuatro, cinco, seis};


void setup()
{
    for (int x = 0; x < 7; x++) {
        pinMode(x + DISPLAY1_A, OUTPUT);
        pinMode(x + DISPLAY2_A, OUTPUT);
    }
    pinMode(BOTON , INPUT_PULLUP);
    pinMode(BUZZER, OUTPUT      );
    
    randomSeed(analogRead(A0));
}

void loop()
{
      if (digitalRead(BOTON) == LOW) {
        int dado1, dado2;
        
        for (int i = 0; i < 10; i++) {
            int numAleatorio1 = random(6);
            int numAleatorio2 = random(6);
            
            for (int x = 0; x < 7; x++) {
                digitalWrite(x + DISPLAY1_A, numeros[numAleatorio1][x]);
            }
            for (int x = 0; x < 7; x++) {
                digitalWrite(x + DISPLAY2_A, numeros[numAleatorio2][x]);
            }

            delay(100);
        }

        dado1 = random(1, 7);
        dado2 = random(1, 7);

        for (int x = 0; x < 7; x++) {
            digitalWrite(x + DISPLAY1_A, numeros[dado1][x]);
        }
        delay(1000);
        for (int x = 0; x < 7; x++) {
            digitalWrite(x + DISPLAY2_A, numeros[dado2][x]);
        }
        delay(1000);
        
        if (dado1 + dado2 == 7) {
            tone(BUZZER, 800, 258);
        } else {
        }
        
        while (digitalRead(BOTON) == LOW);
    }
}

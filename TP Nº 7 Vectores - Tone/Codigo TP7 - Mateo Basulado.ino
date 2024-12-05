// defino las notas a utilizar y el pin del buzzer
#define NOTE_B3  247
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_E5  659
#define SILENCIO  0

#define buzzer   10

// creo los vectores correspondientes, uno para las notas
// y otro para sus duraciones, ordenados para evitar confusiones

int melodia[]        = { NOTE_E4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_A4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_B4, NOTE_E4, NOTE_E4, NOTE_C5, NOTE_B4, NOTE_G4, NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_B3, NOTE_E4, NOTE_FS4, NOTE_E4 ,SILENCIO, NOTE_D4,SILENCIO, NOTE_E4,SILENCIO,  NOTE_E4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_A4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_B4, NOTE_E4, NOTE_E4, NOTE_C5, NOTE_B4, NOTE_G4, NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_B3, NOTE_E4, NOTE_FS4, NOTE_E4 ,SILENCIO };
int duracion[]       = {    8   ,    8   ,    8   ,    8   ,    8   ,    8   ,    8   ,    8   ,   8    ,    8   ,    8   ,     8  ,    8   ,    8   ,    8   ,    8   ,    8   ,    8   ,    8   ,    8   ,    8   ,    8   ,    8   ,    4    ,    8   ,    8   ,   32   ,   8    ,    8    ,     8   ,    8   ,    8   ,    8   ,    8   ,    8   ,    8   ,    8   ,   8    ,    8   ,    8   ,     8  ,    8   ,    8   ,    8   ,    8   ,    8   ,    8   ,    8   ,    8   ,    8   ,    8   ,    8    ,    4    ,    8    };


int tempo = 1300;   // creo la variable para el tempo y le doy valor
float factor = 1.50; // creo la variable para el factor y le dy su valor

void setup()
{
  pinMode(buzzer, OUTPUT); // defino al buzzer como salida
}

void loop()
{
  for(int i = 0 ; i < sizeof (melodia) /2 ; i++ ) 
    // ciclo for para reproducir las notas
  
  {
    
  	int duracionNota = tempo / duracion[ i ];
    
    tone (buzzer, melodia[ i ], duracionNota );
  
    int pausa = duracionNota * factor; // variable para generar una breve pausa
    delay( pausa );
    
    noTone( buzzer );
      
  }
  delay(tempo); // delay para que se vuelva a reproducir la melodia
}




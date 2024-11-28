#define BUZZ 3
#define NOTE_C  261  // Do
#define NOTE_D  294  // Re
#define NOTE_E  329  // Mi
#define NOTE_F  349  // Fa
#define NOTE_G  392  // Sol
#define NOTE_A  440  // La
#define NOTE_B  494  // Si

void setup() {
  pinMode(BUZZ, OUTPUT);
}

void loop() {
  melodia1();
  delay(500);  
  melodia2();
  delay(500);  
  melodia3();
  delay(500);  
}

void melodia1() {
  tone(BUZZ, NOTE_C, 500);  
  delay(500);
  tone(BUZZ, NOTE_D, 500);  
  delay(500);
  tone(BUZZ, NOTE_E, 500);  
  delay(500);
  tone(BUZZ, NOTE_F, 500);  
  delay(500);
  tone(BUZZ, NOTE_G, 500);  
  delay(500);
  noTone(BUZZ);
}

void melodia2() {
  tone(BUZZ, NOTE_E, 300);
  delay(300);
  tone(BUZZ, NOTE_G, 300);
  delay(300);
  tone(BUZZ, NOTE_A, 300);
  delay(300);
  tone(BUZZ, NOTE_G, 300);
  delay(300);
  tone(BUZZ, NOTE_E, 300);
  delay(300);
  noTone(BUZZ);
}

void melodia3() {
  tone(BUZZ, NOTE_C, 400);
  delay(400);
  tone(BUZZ, NOTE_E, 400);
  delay(400);
  tone(BUZZ, NOTE_G, 400);
  delay(400);
  noTone(BUZZ);
}

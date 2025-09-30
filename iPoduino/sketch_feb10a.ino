#include "pitches.h"
#define PIN6 6
#define RED 13
#define BLUE 12
#define GREEN 8
#define PIN11 11
#define PIN10 10
#define PIN9 9
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
    
    pinMode(PIN6, OUTPUT);
    pinMode(RED, OUTPUT);
    pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
    pinMode(PIN11, INPUT);
    pinMode(PIN10, INPUT);
    pinMode(PIN9, INPUT);
    

  
}

void play(int note, int dur)
{
 	tone(PIN6, note);
}


void loop()
{

  if(digitalRead(PIN11) == HIGH)
  {
    digitalWrite(RED, 255);
    digitalWrite(BLUE, 0);
    digitalWrite(GREEN, 0);
  	GiveYouUp();
    digitalWrite(RED, 0);
    digitalWrite(BLUE, 0);
    digitalWrite(GREEN, 0);
  } 
  else if(digitalRead(PIN10) == HIGH)
  {
    digitalWrite(RED, 0);
    digitalWrite(BLUE, 255);
    digitalWrite(GREEN, 0);
    LittleLamb();
    digitalWrite(RED, 0);
    digitalWrite(BLUE, 0);
    digitalWrite(GREEN, 0);
  }

  else if(digitalRead(PIN9) == HIGH)
  {
    digitalWrite(RED, 0);
    digitalWrite(BLUE, 0);
    digitalWrite(GREEN, 255);
    JingleBells();
    digitalWrite(RED, 0);
    digitalWrite(BLUE, 0);
    digitalWrite(GREEN, 0);
  }
  else
  {
    noTone(PIN6);
  }
}


void GiveYouUp()
{
  play(NOTE_E4, 4);
  delay(200);
  play(NOTE_FS4, 4);
  delay(200);
  play(NOTE_G4, 4);
  delay(400);
  play(NOTE_G4, 4);
  delay(100);
  play(NOTE_A4, 4);
  delay(300);
  play(NOTE_FS4, 4);
  delay(800);
 


  play(NOTE_E4, 4);
 
  delay(300);
noTone(PIN6);
   delay(100);
  play(NOTE_E4, 4);
  delay(200);

  play(NOTE_FS4, 4);
   delay(200);
   
  play(NOTE_G4, 4);
  delay(500);
   
  play(NOTE_D4, 4);
  delay(500);
 
  play(NOTE_D5, 4);
  delay(200);
 
  noTone(PIN6);
   delay(150);
    play(NOTE_D5, 4);
  delay(300);
      
  play(NOTE_A4, 4);
  delay(500);
}

void LittleLamb() 
{
    play(NOTE_E4, 4);
    delay(200);
    play(NOTE_D4, 4);
    delay(200);
    play(NOTE_C4, 4);
    delay(200);
    play(NOTE_D4, 4);
    delay(200);
    play(NOTE_E4, 4);
    delay(200);
    noTone(PIN6);
    delay(50);
    play(NOTE_E4, 4);
    delay(200);
    noTone(PIN6);
    delay(50);
    play(NOTE_E4, 4);
    delay(200);
    play(NOTE_D4, 4);
    delay(200);
    noTone(PIN6);
    delay(50);
    play(NOTE_D4, 4);
    delay(200);
    noTone(PIN6);
    delay(50);
    play(NOTE_D4, 4);
    delay(200);
    play(NOTE_E4, 4);
    delay(200);
    noTone(PIN6);
    delay(50);
    play(NOTE_E4, 4);
    delay(200);
    noTone(PIN6);
    delay(50);
    play(NOTE_E4, 4);
    delay(200);
    play(NOTE_E4, 4);
    delay(200);
    play(NOTE_D4, 4);
    delay(200);
    play(NOTE_C4, 4);
    delay(200);
    play(NOTE_D4, 4);
    delay(200);
    play(NOTE_E4, 4);
    delay(200);
    noTone(PIN6);
    delay(50);
    play(NOTE_E4, 4);
    delay(200);
    noTone(PIN6);
    delay(50);
    play(NOTE_E4, 4);
    delay(100);
    noTone(PIN6);
    delay(50);
    play(NOTE_E4, 4);
    delay(200);
    play(NOTE_D4, 4);
    delay(200);
    play(NOTE_D4, 4);
    delay(200);
    play(NOTE_E4, 4);
    delay(200);
    play(NOTE_D4, 4);
    delay(200);
    play(NOTE_C4, 4);
    delay(200);
   /*  */
}

void JingleBells()
{
  play(NOTE_E4, 4);
    delay(300);
    noTone(PIN6);
    delay(50);
    play(NOTE_E4, 4);
    delay(300);
    noTone(PIN6);
    delay(50);
    play(NOTE_E4, 4);
    delay(300);
    noTone(PIN6);
    delay(300);

play(NOTE_E4, 4);
    delay(300);
    noTone(PIN6);
    delay(50);
    play(NOTE_E4, 4);
    delay(300);
    noTone(PIN6);
    delay(50);
    play(NOTE_E4, 4);
    delay(300);
    noTone(PIN6);
    delay(300);


    play(NOTE_E4, 4);
    delay(300);
    play(NOTE_G4, 4);
    delay(300);
    play(NOTE_C4, 4);
    delay(300);
    play(NOTE_D4, 4);
    delay(300);
    play(NOTE_E4, 4);
    delay(800);
    
}

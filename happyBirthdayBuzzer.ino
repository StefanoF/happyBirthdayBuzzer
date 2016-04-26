/*
 Happy birthday melody using buzzer
 Sheet: http://www.music-for-music-teachers.com/images/happy-birthday-lead-sheet.gif
 Diego Marcia
 Stefano Fadda
 coded @ Genuino Day 2016 - Fablab Sardegna Ricerche (Pula - Italy)
 */

int pwm = 9;
int tot = 254;
int note = tot/14; // two scale

int delayLong = 500;
int delayInterNote = 100;

void setup() {
  // declare pin 9 to be an output:
  pinMode(pwm, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // la
  makeNote(6, delayLong/2);
  // la
  makeNote(6, delayLong/4);
  // si
  makeNote(7, delayLong/2);
  // la
  makeNote(6, delayLong/2);
  // re
  makeNote(9, delayLong/2);
  // do
  makeNote(8, delayLong);
  
  // la
  makeNote(6, delayLong/2);
  // la
  makeNote(6, delayLong/4);
  // si
  makeNote(7, delayLong/2);
  // la
  makeNote(6, delayLong/2);
  // mi
  makeNote(10, delayLong/2);
  // re
  makeNote(9, delayLong);

  // la
  makeNote(6, delayLong/2);
  // la
  makeNote(6, delayLong/4);
  // la
  makeNote(13, delayLong/2);
  // fa
  makeNote(11, delayLong/2);
  // re
  makeNote(9, delayLong/2);
  // do
  makeNote(8, delayLong/2);
  // si
  makeNote(7, delayLong/2);

  // sol
  makeNote(12, delayLong/2);
  // sol
  makeNote(12, delayLong/4);
  // fa
  makeNote(11, delayLong/2);
  // re
  makeNote(9, delayLong/2);
  // mi
  makeNote(8, delayLong/2);
  // re
  makeNote(9, delayLong);
  
  delay(delayLong);
}

void makeNote(int n, int typeOfDelay){
  analogWrite(pwm, note*n);
  delay(typeOfDelay);
  analogWrite(pwm, 0);
  delay(delayInterNote); //pause between notes
}

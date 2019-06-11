/*
  Arduino Zelda Ending Theme
  With Piezo buzzz and PWM

  Connect the positive side of the buzzz to pin 3,
  then the negative side to a 1k ohm resistor. Connect
  the other side of the 1 k ohm resistor to
  ground(GND) pin on the Arduino.

  by: Akram S0LTAN1
  last updated: 11/12/17
*/
//Zelda Ending Theme
int melodyzelda[] = {
  NOTE_G6, NOTE_G5, NOTE_C6, NOTE_E6,
  NOTE_DS6, NOTE_G5, NOTE_B6, NOTE_B5,
  NOTE_A6, NOTE_C6, NOTE_E6,  NOTE_A6,
  NOTE_G6, NOTE_C6, NOTE_D6, NOTE_E6,

  NOTE_A6, NOTE_C6, NOTE_F6, NOTE_A6,
  NOTE_GS6, NOTE_C6, NOTE_D6, NOTE_F6,
  NOTE_E6, NOTE_G5, NOTE_C6, NOTE_E6,
  NOTE_D6, NOTE_A5, NOTE_B5, NOTE_D6,

};
//Zelda Ending Theme tempoz
int tempoz[] = {
  3, 3, 3, 3,
  3, 3, 3, 3,
  3, 3, 3, 3,
  3, 3, 3, 3,

  3, 3, 3, 3,
  3, 3, 3, 3,
  3, 3, 3, 3,
  3, 3, 3, 3,

  };

int songz = 0;

void buzzz(int targetPin, long frequency, long length) {
  digitalWrite(ledpin2, HIGH);
  long delayValue = 1000000 / frequency / 2; // calculate the delay value between transitions
  //// 1 second's worth of microseconds, divided by the frequency, then split in half since
  //// there are two phases to each cycle
  long numCycles = frequency * length / 1000; // calculate the number of cycles for proper timing
  //// multiply frequency, which is really cycles per second, by the number of seconds to
  //// get the total number of cycles to produce
  for (long i = 0; i < numCycles; i++) { // for the calculated length of time...
    digitalWrite(targetPin, HIGH); // write the buzzz pin high to push out the diaphram
    delayMicroseconds(delayValue); // wait for the calculated delay value
    digitalWrite(targetPin, LOW); // write the buzzz pin low to pull back the diaphram
    delayMicroseconds(delayValue); // wait again or the calculated delay value
  }
  digitalWrite(ledpin2, LOW);

}
void singz(int s) {
  // iterate over the notes of the melodyzelda:
  songz = s;

    Serial.println(" 'Zelda Ending Theme'");
    int size = sizeof(melodyzelda) / sizeof(int);
    for (int thisNote = 0; thisNote < size; thisNote++) {

      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / tempoz[thisNote];

      buzzz(A5, melodyzelda[thisNote], noteDuration);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 0.30;
      delay(pauseBetweenNotes);

      // stop the tone playing:
      buzzz(A5, 0, noteDuration);
      }
}

void zelda()
{
  //singz the tunes
  singz(1);
}

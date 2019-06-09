/*
as you can see, this is just an adaption of the toneMelody demo.
*/

/*
  Melody

 Plays a melody

 circuit:
 * 8-ohm speaker on digital pin 8

 created 21 Jan 2010
 by Tom Igoe
This example code is in the public domain.

 http://arduino.cc/en/Tutorial/Tone

 */
 // #include "pitches.h"

// notes in the melody:
int melody[] = {
    NOTE_C6, NOTE_F5, NOTE_C6, NOTE_A5,
    NOTE_C6, NOTE_F5, NOTE_C6,
    NOTE_C6, NOTE_F5, NOTE_C6, NOTE_F5,
    NOTE_AS6, NOTE_G6, NOTE_F5, NOTE_E7, NOTE_D5, NOTE_CS6,
    NOTE_C6, NOTE_F5, NOTE_C6, NOTE_A5, // the same again
    NOTE_C6, NOTE_F5, NOTE_C6,
    NOTE_AS5, 0, NOTE_G6, NOTE_F5,
    NOTE_E6, NOTE_D5, NOTE_CS6, NOTE_C6};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
    4,    4,    4,    4,
    4,    4,          2,
    4,    4,    4,    4,
    3,   8, 8, 8, 8, 8,
    4,    4,    4,    4, // the same again
    4,    4,          2,
    4, 8, 8,    4,    4,
    4,    4,    4,    4,
    0};

// void setup() {
//   // iterate over the notes of the melody:

//     // to calculate the note duration, take one second
//     // divided by the note type.
//     //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.

//     // to distinguish the notes, set a minimum time between them.
//     // the note's duration + 30% seems to work well:
//     //int pauseBetweenNotes = noteDuration * 1.30;
//     //delay(pauseBetweenNotes);
// }

void jeopardy() {
  for (int thisNote = 0; noteDurations[thisNote] != 0; thisNote++) {
    int noteDuration = 2000/noteDurations[thisNote];
    tone(A5, melody[thisNote],noteDuration * 0.9);
    delay(noteDuration);
  }
  // no need to repeat the melody.
}
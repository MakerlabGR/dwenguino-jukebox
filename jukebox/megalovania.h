// Based on score by https://musescore.com/jestermusician/undertale_megalovania
// Program written by Peter Schaedler, 2016

#define buzz A5
#define led ledpin2
#define beat 500 // = 60 s / 120 bpm * 1000 ms

#define cnat 16.35
#define csharp 17.32
#define dnat 18.35
#define eb 19.45
#define enat 20.60
#define fnat 21.83
#define fsharp 23.12
#define gnat 24.50
#define gsharp 25.96
#define anat 27.50
#define bb 29.14
#define bnat 30.87

#define oct(note, octave) note * pow(2, octave)

// void setup() {
//   pinMode(led, OUTPUT);
// }


void play2(double note, int octave, double note_val) {
  digitalWrite(led, HIGH);
  tone(buzz, oct(note, octave));
  delay((beat * note_val) - 20);
  noTone(buzz);
  digitalWrite(led, LOW);
  delay(20);
}

void rest2(double note_val) {
  delay(beat * note_val);
}

void vibrato(double note, int octave, double note_val) {
  for (int i = 0; i < 4; i++) {
    tone(buzz, oct(note, octave));
    delay(beat * note_val / 16);
    tone(buzz, oct(note, octave) - 20);
    delay(beat * note_val / 16);
    tone(buzz, oct(note, octave));
    delay(beat * note_val / 16);
    tone(buzz, oct(note, octave) + 20);
    delay(beat * note_val / 16);
  }
}

void megalovania() {
  // Measure 1
  play2(dnat, 4, .25);
  play2(dnat, 4, .25);
  play2(dnat, 5, .25);
  rest2(.25);
  play2(anat, 4, .25);
  rest2(.5);
  play2(gsharp, 4, .25);
  rest2(.25);
  play2(gnat, 4, .25);
  rest2(.25);
  play2(fnat, 4, .5);
  play2(dnat, 4, .25);
  play2(fnat, 4, .25);
  play2(gnat, 4, .25);

  play2(cnat, 4, .25);
  play2(cnat, 4, .25);
  play2(dnat, 5, .25);
  rest2(.25);
  play2(anat, 4, .25);
  rest2(.5);
  play2(gsharp, 4, .25);
  rest2(.25);
  play2(gnat, 4, .25);
  rest2(.25);
  play2(fnat, 4, .5);
  play2(dnat, 4, .25);
  play2(fnat, 4, .25);
  play2(gnat, 4, .25);

  play2(bnat, 3, .25);
  play2(bnat, 3, .25);
  play2(dnat, 5, .25);
  rest2(.25);
  play2(anat, 4, .25);
  rest2(.5);
  play2(gsharp, 4, .25);
  rest2(.25);
  play2(gnat, 4, .25);
  rest2(.25);
  play2(fnat, 4, .5);
  play2(dnat, 4, .25);
  play2(fnat, 4, .25);
  play2(gnat, 4, .25);

  play2(bb, 3, .25);
  play2(bb, 3, .25);
  play2(dnat, 5, .25);
  rest2(.25);
  play2(anat, 4, .25);
  rest2(.5);
  play2(gsharp, 4, .25);
  rest2(.25);
  play2(gnat, 4, .25);
  rest2(.25);
  play2(fnat, 4, .5);
  play2(dnat, 4, .25);
  play2(fnat, 4, .25);
  play2(gnat, 4, .25);

  // 5
  play2(dnat, 4, .25);
  play2(dnat, 4, .25);
  play2(dnat, 5, .25);
  rest2(.25);
  play2(anat, 4, .25);
  rest2(.5);
  play2(gsharp, 4, .25);
  rest2(.25);
  play2(gnat, 4, .25);
  rest2(.25);
  play2(fnat, 4, .5);
  play2(dnat, 4, .25);
  play2(fnat, 4, .25);
  play2(gnat, 4, .25);

  play2(cnat, 4, .25);
  play2(cnat, 4, .25);
  play2(dnat, 5, .25);
  rest2(.25);
  play2(anat, 4, .25);
  rest2(.5);
  play2(gsharp, 4, .25);
  rest2(.25);
  play2(gnat, 4, .25);
  rest2(.25);
  play2(fnat, 4, .5);
  play2(dnat, 4, .25);
  play2(fnat, 4, .25);
  play2(gnat, 4, .25);

  play2(bnat, 3, .25);
  play2(bnat, 3, .25);
  play2(dnat, 5, .25);
  rest2(.25);
  play2(anat, 4, .25);
  rest2(.5);
  play2(gsharp, 4, .25);
  rest2(.25);
  play2(gnat, 4, .25);
  rest2(.25);
  play2(fnat, 4, .5);
  play2(dnat, 4, .25);
  play2(fnat, 4, .25);
  play2(gnat, 4, .25);

  play2(bb, 3, .25);
  play2(bb, 3, .25);
  play2(dnat, 5, .25);
  rest2(.25);
  play2(anat, 4, .25);
  rest2(.5);
  play2(gsharp, 4, .25);
  rest2(.25);
  play2(gnat, 4, .25);
  rest2(.25);
  play2(fnat, 4, .5);
  play2(dnat, 4, .25);
  play2(fnat, 4, .25);
  play2(gnat, 4, .25);

  // 9
  play2(dnat, 5, .25);
  play2(dnat, 5, .25);
  play2(dnat, 6, .25);
  rest2(.25);
  play2(anat, 5, .25);
  rest2(.5);
  play2(gsharp, 5, .25);
  rest2(.25);
  play2(gnat, 5, .25);
  rest2(.25);
  play2(fnat, 5, .5);
  play2(dnat, 5, .25);
  play2(fnat, 5, .25);
  play2(gnat, 5, .25);

  play2(cnat, 5, .25);
  play2(cnat, 5, .25);
  play2(dnat, 6, .25);
  rest2(.25);
  play2(anat, 5, .25);
  rest2(.5);
  play2(gsharp, 5, .25);
  rest2(.25);
  play2(gnat, 5, .25);
  rest2(.25);
  play2(fnat, 5, .5);
  play2(dnat, 5, .25);
  play2(fnat, 5, .25);
  play2(gnat, 5, .25);

  play2(bnat, 4, .25);
  play2(bnat, 4, .25);
  play2(dnat, 6, .25);
  rest2(.25);
  play2(anat, 5, .25);
  rest2(.5);
  play2(gsharp, 5, .25);
  rest2(.25);
  play2(gnat, 5, .25);
  rest2(.25);
  play2(fnat, 5, .5);
  play2(dnat, 5, .25);
  play2(fnat, 5, .25);
  play2(gnat, 5, .25);

  play2(bb, 4, .25);
  play2(bb, 4, .25);
  play2(dnat, 6, .25);
  rest2(.25);
  play2(anat, 5, .25);
  rest2(.5);
  play2(gsharp, 5, .25);
  rest2(.25);
  play2(gnat, 5, .25);
  rest2(.25);
  play2(fnat, 5, .5);
  play2(dnat, 5, .25);
  play2(fnat, 5, .25);
  play2(gnat, 5, .25);

  // Repeat 9
  play2(dnat, 5, .25);
  play2(dnat, 5, .25);
  play2(dnat, 6, .25);
  rest2(.25);
  play2(anat, 5, .25);
  rest2(.5);
  play2(gsharp, 5, .25);
  rest2(.25);
  play2(gnat, 5, .25);
  rest2(.25);
  play2(fnat, 5, .5);
  play2(dnat, 5, .25);
  play2(fnat, 5, .25);
  play2(gnat, 5, .25);

  play2(cnat, 5, .25);
  play2(cnat, 5, .25);
  play2(dnat, 6, .25);
  rest2(.25);
  play2(anat, 5, .25);
  rest2(.5);
  play2(gsharp, 5, .25);
  rest2(.25);
  play2(gnat, 5, .25);
  rest2(.25);
  play2(fnat, 5, .5);
  play2(dnat, 5, .25);
  play2(fnat, 5, .25);
  play2(gnat, 5, .25);

  play2(bnat, 4, .25);
  play2(bnat, 4, .25);
  play2(dnat, 6, .25);
  rest2(.25);
  play2(anat, 5, .25);
  rest2(.5);
  play2(gsharp, 5, .25);
  rest2(.25);
  play2(gnat, 5, .25);
  rest2(.25);
  play2(fnat, 5, .5);
  play2(dnat, 5, .25);
  play2(fnat, 5, .25);
  play2(gnat, 5, .25);

  play2(bb, 4, .25);
  play2(bb, 4, .25);
  play2(dnat, 6, .25);
  rest2(.25);
  play2(anat, 5, .25);
  rest2(.5);
  play2(gsharp, 5, .25);
  rest2(.25);
  play2(gnat, 5, .25);
  rest2(.25);
  play2(fnat, 5, .5);
  play2(dnat, 5, .25);
  play2(fnat, 5, .25);
  play2(gnat, 5, .25);

  // 13
  play2(fnat, 5, .5);
  play2(fnat, 5, .25);
  play2(fnat, 5, .25);
  rest2(.25);
  play2(fnat, 5, .25);
  rest2(.15);
  play2(enat, 5, .10);
  play2(fnat, 5, .5);
  play2(dnat, 5, .5);
  play2(dnat, 5, 1.25);

  play2(fnat, 5, .5);
  play2(fnat, 5, .25);
  play2(fnat, 5, .25);
  rest2(.25);
  play2(gnat, 5, .25);
  rest2(.25);
  play2(gsharp, 5, .5);
  play2(gnat, 5, .083);
  play2(gsharp, 5, .083);
  play2(gnat, 5, .084);
  play2(fnat, 5, .25);
  play2(dnat, 5, .25);
  play2(fnat, 5, .25);
  play2(gnat, 5, .25);
  rest2(.5);

  play2(fnat, 5, .5);
  play2(fnat, 5, .25);
  play2(fnat, 5, .25);
  rest2(.25);
  play2(gnat, 5, .25);
  rest2(.25);
  play2(gsharp, 5, .25);
  rest2(.25);
  play2(anat, 5, .25);
  rest2(.25);
  play2(cnat, 6, .25);
  rest2(.25);
  play2(anat, 5, .75);

  play2(dnat, 6, .25);
  rest2(.25);
  play2(dnat, 6, .25);
  rest2(.25);
  play2(dnat, 6, .25);
  play2(anat, 5, .25);
  play2(dnat, 6, .25);
  play2(cnat, 6, 1);
  for (double i = cnat; i < gnat; i += .509375) {
    tone(buzz, oct(i, 6));
    rest2(.015625);
  }
  vibrato(gnat, 6, 1);

  // 17
  play2(anat, 5, .5);
  play2(anat, 5, .25);
  play2(anat, 5, .25);
  rest2(.25);
  play2(anat, 5, .25);
  rest2(.15);
  play2(gnat, 5, .10);
  play2(anat, 5, .5);
  play2(gnat, 5, .5);
  play2(gnat, 5, 1.25);

  play2(anat, 5, .5);
  play2(anat, 5, .25);
  play2(anat, 5, .25);
  rest2(.25);
  play2(anat, 5, .25);
  rest2(.25);
  play2(gnat, 5, .25);
  rest2(.25);
  play2(anat, 5, .25);
  rest2(.25);
  play2(dnat, 6, .25);
  rest2(.25);
  play2(anat, 5, .25);
  play2(gnat, 5, .5);

  play2(dnat, 6, .5);
  play2(anat, 5, .5);
  play2(gnat, 5, .5);
  play2(fnat, 5, .5);
  play2(cnat, 6, .5);
  play2(gnat, 5, .5);
  play2(fnat, 5, .5);
  play2(enat, 5, .5);

  play2(bb, 4, .5);
  play2(cnat, 5, .25);
  play2(dnat, 5, .25);
  rest2(.25);
  play2(fnat, 5, .25);
  rest2(.25);
  play2(cnat, 6, 2.25);

  // 21
  rest2(2);
  play2(fnat, 5, .25);
  play2(dnat, 5, .25);
  play2(fnat, 5, .25);
  play2(gnat, 5, .25);
  play2(gsharp, 5, .25);
  play2(gnat, 5, .25);
  play2(fnat, 5, .25);
  play2(dnat, 5, .25);

  play2(gsharp, 5, .125);
  play2(gnat, 5, .125);
  play2(fnat, 5, .125);
  play2(dnat, 5, .125);
  play2(fnat, 5, .5);
  play2(gnat, 5, 2.25);
  play2(gsharp, 5, .5);
  play2(anat, 5, .25);

  play2(cnat, 6, .5);
  play2(anat, 5, .25);
  play2(gsharp, 5, .25);
  play2(gnat, 5, .25);
  play2(fnat, 5, .25);
  play2(dnat, 5, .25);
  play2(enat, 5, .25);
  play2(fnat, 5, .5);
  play2(gnat, 5, .5);
  play2(anat, 5, .5);
  play2(cnat, 6, .5);

  play2(csharp, 6, .5);
  play2(gsharp, 5, .25);
  rest2(.25);
  play2(gsharp, 5, .25);
  play2(gnat, 5, .25);
  play2(fnat, 5, .25);
  play2(gnat, 5, 2.25);

  // 25
  play2(fnat, 4, .5);
  play2(gnat, 4, .5);
  play2(anat, 4, .5);
  play2(fnat, 5, .5);
  play2(enat, 5, 1);
  play2(dnat, 5, 1);

  play2(enat, 5, 1);
  play2(fnat, 5, 1);
  play2(gnat, 5, 1);
  play2(enat, 5, 1);

  play2(anat, 5, 2);
  play2(anat, 5, .25);
  play2(gsharp, 5, .25);
  play2(gnat, 5, .25);
  play2(fsharp, 5, .25);
  play2(fnat, 5, .25);
  play2(enat, 5, .25);
  play2(eb, 5, .25);
  play2(dnat, 5, .25);

  play2(csharp, 5, 2);
  play2(eb, 5, 2);

  // Repeat 21-28
  rest2(2);
  play2(fnat, 5, .25);
  play2(dnat, 5, .25);
  play2(fnat, 5, .25);
  play2(gnat, 5, .25);
  play2(gsharp, 5, .25);
  play2(gnat, 5, .25);
  play2(fnat, 5, .25);
  play2(dnat, 5, .25);

  play2(gsharp, 5, .125);
  play2(gnat, 5, .125);
  play2(fnat, 5, .125);
  play2(dnat, 5, .125);
  play2(fnat, 5, .5);
  play2(gnat, 5, 2.25);
  play2(gsharp, 5, .5);
  play2(anat, 5, .25);

  play2(cnat, 6, .5);
  play2(anat, 5, .25);
  play2(gsharp, 5, .25);
  play2(gnat, 5, .25);
  play2(fnat, 5, .25);
  play2(dnat, 5, .25);
  play2(enat, 5, .25);
  play2(fnat, 5, .5);
  play2(gnat, 5, .5);
  play2(anat, 5, .5);
  play2(cnat, 6, .5);

  play2(csharp, 6, .5);
  play2(gsharp, 5, .25);
  rest2(.25);
  play2(gsharp, 5, .25);
  play2(gnat, 5, .25);
  play2(fnat, 5, .25);
  play2(gnat, 5, 2.25);

  play2(fnat, 4, .5);
  play2(gnat, 4, .5);
  play2(anat, 4, .5);
  play2(fnat, 5, .5);
  play2(enat, 5, 1);
  play2(dnat, 5, 1);

  play2(enat, 5, 1);
  play2(fnat, 5, 1);
  play2(gnat, 5, 1);
  play2(enat, 5, 1);

  play2(anat, 5, 2);
  play2(anat, 5, .25);
  play2(gsharp, 5, .25);
  play2(gnat, 5, .25);
  play2(fsharp, 5, .25);
  play2(fnat, 5, .25);
  play2(enat, 5, .25);
  play2(eb, 5, .25);
  play2(dnat, 5, .25);

  play2(csharp, 5, 2);
  play2(eb, 5, 2);

  // 29
}


// By Luke Cyca
// https://lukecyca.com
// https://github.com/lukecyca/TetrisThemeArduino

#define PIEZO_PIN  (A5)

// A rest
#define _R     (0)

// beats per minute
// #define BPM   (120.0)
float BPM = 120;

float lead_notes[] = {
  // part 1
  _E5, _B4, _C5, _D5, _C5, _B4, _A4, _A4, _C5, _E5, _D5, _C5, _B4, _B4, _C5, _D5, _E5, _C5, _A4, _A4, _R,
  _D5, _F5, _A5, _G5, _F5, _E5, _C5, _E5, _D5, _C5, _B4, _B4, _C5, _D5, _E5, _C5, _A4, _A4, _R,

  // part 2
  _E4, _C4, _D4, _B3, _C4, _A3, _GS3, _B3,
  _E4, _C4, _D4, _B3, _C4, _E4, _A4, _A4, _GS4, _R

};
float lead_times[] = {
  // part 1
  1.0, 0.5, 0.5, 1.0, 0.5, 0.5, 1.0, 0.5, 0.5, 1.0, 0.5, 0.5, 1.0, 0.5, 0.5, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
  1.5, 0.5, 1.0, 0.5, 0.5, 1.5, 0.5, 1.0, 0.5, 0.5, 1.0, 0.5, 0.5, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,

  // part 2
  2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0,
  2.0, 2.0, 2.0, 2.0, 1.0, 1.0, 1.0, 1.0, 3.0, 1.0

};

float bass_notes[] = {
  // part 1
  _E2, _E3, _E2, _E3, _E2, _E3, _E2, _E3, _A1, _A2, _A1, _A2, _A1, _A2, _A1, _A2, _GS1, _GS2, _GS1, _GS2, _GS1, _GS2, _GS1, _GS2, _A1, _A2, _A1, _A2, _A1, _B2, _C3, _E3,
  _D2, _D3, _D2, _D3, _D2, _D3, _D2, _D3, _C2, _C3, _C2, _C3, _C2, _C3, _C2, _C3, _B1, _B2, _B1, _B2, _B1, _B2, _B1, _B2, _A1, _A2, _A1, _A2, _A1, _A2, _A1, _A2,

  // part 2
  _A1, _E2, _A1, _E2, _A1, _E2, _A1, _E2, _GS1, _E2, _GS1, _E2, _GS1, _E2, _GS1, _E2, _A1, _E2, _A1, _E2, _A1, _E2, _A1, _E2, _GS1, _E2, _GS1, _E2, _GS1, _E2, _GS1, _E2,
  _A1, _E2, _A1, _E2, _A1, _E2, _A1, _E2, _GS1, _E2, _GS1, _E2, _GS1, _E2, _GS1, _E2, _A1, _E2, _A1, _E2, _A1, _E2, _A1, _E2, _GS1, _E2, _GS1, _E2, _GS1, _E2, _GS1, _E2


};
float bass_times[] = {
  // part 1
  0.5,  0.5,  0.5,  0.5,  0.5,  0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5,
  0.5,  0.5,  0.5,  0.5,  0.5,  0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5,

  // part 2
  0.5,  0.5,  0.5,  0.5,  0.5,  0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5,
  0.5,  0.5,  0.5,  0.5,  0.5,  0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5

};


// duration is in microseconds
void play_one_note(float frequency, unsigned long duration) {
    if (digitalRead(SW_E) == PRESSED) {
    while(digitalRead(SW_E) == PRESSED) {
      delay(10);
    }
    strobe_effect = !strobe_effect;
  }
  BPM = analogRead(A0);
  long outputValue = map(BPM, 0, 1023, 500, 2000);
  BPM = outputValue/10.0;
  dwenguinoLCD.setCursor(0,1);
  dwenguinoLCD.print(String("Tempo: "));
  dwenguinoLCD.setCursor(8,1);
  dwenguinoLCD.print(BPM);

  unsigned long period = 1000000.0/frequency;
  for (unsigned int cycles=duration/period; cycles>0; cycles--) {
    // half the time on
    digitalWrite(PIEZO_PIN, HIGH);
    delayMicroseconds( period/2 );
  analogWrite(ledpin1, 255);

    // half the time off
    digitalWrite(PIEZO_PIN, LOW);
    delayMicroseconds( period/2 );
  analogWrite(ledpin1, 0);
  }

  // If the duration wasn't a multiple of the period, delay the remainder
  delayMicroseconds(duration % period);
}

// Time (in microseconds) to spend on each note while simulating polyphony
// If this is too small, low frequency notes will be inaudible.
#define POLY_DELTA (14400)

// duration is in microseconds
void play_two_notes(float freq1, float freq2, unsigned long duration) {
      if (digitalRead(SW_E) == PRESSED) {
    while(digitalRead(SW_E) == PRESSED) {
      delay(10);
    }
    strobe_effect = !strobe_effect;
  }
  BPM = analogRead(A0);
  long outputValue = map(BPM, 0, 1023, 500, 2000);
  BPM = outputValue/10.0;
  dwenguinoLCD.setCursor(0,1);
  dwenguinoLCD.print(String("Tetris: "));
  dwenguinoLCD.setCursor(8,1);
  dwenguinoLCD.print(BPM);
  analogWrite(ledpin2, 255);
  analogWrite(ledpin3, 255);
    for (unsigned long t=0; t<duration; t+=2*POLY_DELTA) {
      play_one_note(freq1, POLY_DELTA);
      play_one_note(freq2, POLY_DELTA);
    }
  analogWrite(ledpin2, 0);
  analogWrite(ledpin3, 0);

}

int lead_note_count = sizeof(lead_notes) / sizeof(float);
int bass_note_count = sizeof(bass_notes) / sizeof(float);


// void setup() {
//   pinMode(PIEZO_PIN, OUTPUT);
// }

void tetris() {
  int curr_lead_note = 0;
  int curr_bass_note = 0;
  float curr_lead_note_time_remaining = lead_times[curr_lead_note];
  float curr_bass_note_time_remaining = bass_times[curr_bass_note];
  float lead_freq, bass_freq, note_value;
  unsigned long duration;

  while (curr_lead_note < lead_note_count && curr_bass_note < bass_note_count) {
    lead_freq = lead_notes[curr_lead_note];
    bass_freq = bass_notes[curr_bass_note];
    note_value = min(curr_lead_note_time_remaining, curr_bass_note_time_remaining);
    duration = note_value * 1000000 * (60.0/BPM);

    if (lead_freq > 0 && bass_freq > 0) {
      play_two_notes(lead_freq, bass_freq, duration);
    } else if (lead_freq > 0) {
      play_one_note(lead_freq, duration);
    } else if (bass_freq > 0) {
      play_one_note(bass_freq, duration);
    } else {
      delay( duration/1000 );
    }

    // Advance lead note
    curr_lead_note_time_remaining -= note_value;
    if (curr_lead_note_time_remaining < 0.001) {
      curr_lead_note++;
      curr_lead_note_time_remaining = lead_times[curr_lead_note];
    }

    // Advance bass note
    curr_bass_note_time_remaining -= note_value;
    if (curr_bass_note_time_remaining < 0.001) {
      curr_bass_note++;
      curr_bass_note_time_remaining = bass_times[curr_bass_note];
    }
  }

}


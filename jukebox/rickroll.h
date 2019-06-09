/*  Rick Roll Code
    AUTHOR: Samantha Lagestee
    Copyright 2017 samilagestee at gmail dot com

    This program is free software: you can redistribute it and/or
    modify it under the terms of the GNU General Public License as
    published by the Free Software Foundation, either version 3 of
    the License, or (at your option) any later version.

    DISCLAIMER: The song "Never Gonna Give You Up" by Rick Astley
    is not the creative property of the author. This code simply
    plays a Piezo buzzer rendition of the song.
*/


// change these pins according to your setup
int piezo = A5;
int led = 9;

volatile int beatlength = 100; // determines tempo
float beatseparationconstant = 0.3;

// int a_; // part index
// int b_; // song index
// int c_; // lyric index

// boolean flag; // play/pause

// Parts 1 and 2 (Intro)

int song1_intro_melody[] =
{c5s, e5f, e5f, f5, a5f, f5s, f5, e5f, c5s, e5f, rest_, a4f, a4f};

int song1_intro_rhythmn[] =
{6, 10, 6, 6, 1, 1, 1, 1, 6, 10, 4, 2, 10};

// Parts 3 or 5 (Verse 1)

int song1_verse1_melody[] =
{ rest_, c4s, c4s, c4s, c4s, e4f, rest_, c4, b3f, a3f,
  rest_, b3f, b3f, c4, c4s, a3f, a4f, a4f, e4f,
  rest_, b3f, b3f, c4, c4s, b3f, c4s, e4f, rest_, c4, b3f, b3f, a3f,
  rest_, b3f, b3f, c4, c4s, a3f, a3f, e4f, e4f, e4f, f4, e4f,
  c4s, e4f, f4, c4s, e4f, e4f, e4f, f4, e4f, a3f,
  rest_, b3f, c4, c4s, a3f, rest_, e4f, f4, e4f
};

int song1_verse1_rhythmn[] =
{ 2, 1, 1, 1, 1, 2, 1, 1, 1, 5,
  1, 1, 1, 1, 3, 1, 2, 1, 5,
  1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 3,
  1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 4,
  5, 1, 1, 1, 1, 1, 1, 1, 2, 2,
  2, 1, 1, 1, 3, 1, 1, 1, 3
};

char* lyrics_verse1[] =
{ "We're ", "no ", "strangers ", "", "to ", "love ", "", "\r\n",
  "You ", "know ", "the ", "rules ", "and ", "so ", "do ", "I\r\n",
  "A ", "full ", "commitment's ", "", "", "what ", "I'm ", "thinking ", "", "of", "\r\n",
  "You ", "wouldn't ", "", "get ", "this ", "from ", "any ", "", "other ", "", "guy\r\n",
  "I ", "just ", "wanna ", "", "tell ", "you ", "how ", "I'm ", "feeling", "\r\n",
  "Gotta ", "", "make ", "you ", "understand", "", "\r\n"
};

// Parts 4 or 6 (Chorus)

int song1_chorus_melody[] =
{ b4f, b4f, a4f, a4f,
  f5, f5, e5f, b4f, b4f, a4f, a4f, e5f, e5f, c5s, c5, b4f,
  c5s, c5s, c5s, c5s,
  c5s, e5f, c5, b4f, a4f, a4f, a4f, e5f, c5s,
  b4f, b4f, a4f, a4f,
  f5, f5, e5f, b4f, b4f, a4f, a4f, a5f, c5, c5s, c5, b4f,
  c5s, c5s, c5s, c5s,
  c5s, e5f, c5, b4f, a4f, rest_, a4f, e5f, c5s, rest_
};

int song1_chorus_rhythmn[] =
{ 1, 1, 1, 1,
  3, 3, 6, 1, 1, 1, 1, 3, 3, 3, 1, 2,
  1, 1, 1, 1,
  3, 3, 3, 1, 2, 2, 2, 4, 8,
  1, 1, 1, 1,
  3, 3, 6, 1, 1, 1, 1, 3, 3, 3, 1, 2,
  1, 1, 1, 1,
  3, 3, 3, 1, 2, 2, 2, 4, 8, 4
};

char* lyrics_chorus[] =
{ "Never ", "", "gonna ", "", "give ", "you ", "up\r\n",
  "Never ", "", "gonna ", "", "let ", "you ", "down", "", "\r\n",
  "Never ", "", "gonna ", "", "run ", "around ", "", "", "", "and ", "desert ", "", "you\r\n",
  "Never ", "", "gonna ", "", "make ", "you ", "cry\r\n",
  "Never ", "", "gonna ", "", "say ", "goodbye ", "", "", "\r\n",
  "Never ", "", "gonna ", "", "tell ", "a ", "lie ", "", "", "and ", "hurt ", "you\r\n"
};

// void setup()
// {
//   pinMode(piezo, OUTPUT);
//   // pinMode(led, OUTPUT);
//   // digitalWrite(led, LOW);
//   Serial.begin(9600);
//   flag = true;
//   a = 4;
//   b = 0;
//   c = 0;
// }


void play() {
  int notelength;
  if (a_ == 1 || a_ == 2) { // Intro
    // intro
    notelength = beatlength * song1_intro_rhythmn[b_];
    if (song1_intro_melody[b_] > 0) { // if not a rest_, play note
      digitalWrite(led, HIGH);
      tone(piezo, song1_intro_melody[b_], notelength);
    }
    b_++;
    if (b_ >= sizeof(song1_intro_melody) / sizeof(int)) {
      a_++;
      b_ = 0;
      c_ = 0;
    }
  }
  else if (a_ == 3 || a_ == 5) { // Verse 1
    // verse
    notelength = beatlength * 2 * song1_verse1_rhythmn[b_];
    if (song1_verse1_melody[b_] > 0) {
      digitalWrite(led, HIGH);
      Serial.print(lyrics_verse1[c_]);
      tone(piezo, song1_verse1_melody[b_], notelength);
      c_++;
    }
    b_++;
    if (b_ >= sizeof(song1_verse1_melody) / sizeof(int)) {
      a_++;
      b_ = 0;
      c_ = 0;
    }
  }
  else if (a_ == 4 || a_ == 6) { //chorus
    // chorus
    notelength = beatlength * song1_chorus_rhythmn[b_];
    if (song1_chorus_melody[b_] > 0) {
      digitalWrite(led, HIGH);
      Serial.print(lyrics_chorus[c_]);
      tone(piezo, song1_chorus_melody[b_], notelength);
      c_++;
    }
    b_++;
    if (b_ >= sizeof(song1_chorus_melody) / sizeof(int)) {
      Serial.println("");
      a_++;
      b_ = 0;
      c_ = 0;
    }
  }
  delay(notelength); // necessary because piezo is on independent timer
  noTone(piezo);
  digitalWrite(led, LOW);
  delay(notelength * beatseparationconstant); // create separation between notes
  if (a_ == 7) { // loop back around to beginning of song
    a_ = 1;
  }
}
void rickroll()
{
  // edit code here to define play conditions
  /*
    if (CONDITION 1) { // play
    flag = true;
    }
    else if (CONDITION2) { // pause
    flag = false;
    }
  */

  // play next step in song
  if (flag == true) {
    play();
  }
}
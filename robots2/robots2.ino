#include <Wire.h>
#include <Dwenguino.h>
#include <LiquidCrystal.h>

#include "pitches1.h"


int const speakerPin = A5;
int tempo = 115.5;
boolean continuePlaying = true; //Set to true to continuously play (otherwise, false)
int continueDelay = 0; //Time to wait before continuing playing

void loop(){
    spacedNote(NOTE_D3, EIGHTHNOTE);
    rest(QUARTERNOTE);

    spacedNote(NOTE_D3, EIGHTHNOTE);
    spacedNote(NOTE_F3, EIGHTHNOTE);
    spacedNote(NOTE_D3, EIGHTHNOTE);
    rest(QUARTERNOTE);

    spacedNote(NOTE_F4, QUARTERNOTE);
    spacedNote(NOTE_G4, EIGHTHNOTE);
    spacedNote(NOTE_C5, EIGHTHNOTE);
    spacedNote(NOTE_A4, EIGHTHNOTE);
    rest(DOTTEDQUARTERNOTE);
    // rest(EIGHTHNOTE);

  noTone(speakerPin);
  while(continuePlaying == false);
  delay(continueDelay);
}

void setup(){
    initDwenguino();
    
    dwenguinoLCD.setCursor(0,0);
    dwenguinoLCD.print(String("The Robots"));
    dwenguinoLCD.setCursor(0,1);
    dwenguinoLCD.print(String("Kraftwerk"));
    
    pinMode(speakerPin, OUTPUT);
    Serial.begin(9600);
}

void spacedNote(int frequencyInHertz, int noteLength)
    {
      tone(speakerPin, frequencyInHertz);
      float delayTime = (1000.0/tempo) * (60.0/4) * noteLength;
      delay(delayTime - 50);
      noTone(speakerPin);
      delay(50);
    }
    // void note(int frequencyInHertz, int noteLength)  //Code to take care of the note
    // {
    //   tone(speakerPin, frequencyInHertz);
    //   float delayTime = (1000.0/tempo) * (60.0/4) * noteLength;
    //   delay(delayTime);
    // }
    void rest(int restLength)
    {
      noTone(speakerPin);
      float delayTime = (1000.0/tempo) * (60.0/4) * restLength;
      delay(delayTime);
    }

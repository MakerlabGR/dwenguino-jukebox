#include <Wire.h>
#include <Dwenguino.h>
#include <LiquidCrystal.h>

#include "pitches1.h"


bool strobe_effect = false;
int ledpin1 = 25;
int ledpin2 = 26;
int ledpin3 = 27;
int speakerPin = A5;
float tempo = 115.5;


void rest(int restLength) {
    noTone(speakerPin);
    float delayTime = (1000.0/tempo) * (60.0/4) * restLength;
    delay(delayTime);
}

void spacedNote(int frequencyInHertz, int noteLength, int ledpin) {
    if (digitalRead(SW_E) == PRESSED) {
        while(digitalRead(SW_E) == PRESSED) {
            delay(10);
        }
        strobe_effect = !strobe_effect;
    }

    tempo = analogRead(A0);
    long outputValue = map(tempo, 0, 1023, 500, 2000);
    tempo = outputValue/10.0;
    // Serial.println(strobe_effect);
    dwenguinoLCD.setCursor(0,1);
    dwenguinoLCD.print(tempo);

    tone(speakerPin, frequencyInHertz);

    analogWrite(ledpin, 255);

    float delayTime = (1000.0/tempo) * (60.0/4) * noteLength;
    delay(delayTime - 50);

    analogWrite(ledpin, 0);

    noTone(speakerPin);
    delay(50);
}

void setup(){
    initDwenguino();

    dwenguinoLCD.setCursor(0,0);
    dwenguinoLCD.print(String("The Robots 1"));

    pinMode(speakerPin, OUTPUT);
    pinMode(A0, INPUT);
    pinMode(ledpin1, OUTPUT);
    pinMode(ledpin2, OUTPUT);
    pinMode(ledpin3, OUTPUT);
    // Serial.begin(9600);
}

void loop(){
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_C3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_C3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_C3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_C3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    rest(EIGHTHNOTE);

    spacedNote(NOTE_F3, SIXTEENTHNOTE, ledpin2);
    spacedNote(NOTE_F3, SIXTEENTHNOTE, ledpin2);
    rest(EIGHTHNOTE);

    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_C3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_C3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_C3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_C3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);


    rest(EIGHTHNOTE);

    noTone(speakerPin);
}

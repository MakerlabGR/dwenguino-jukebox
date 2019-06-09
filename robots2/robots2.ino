#include <Wire.h>
#include <Dwenguino.h>
#include <LiquidCrystal.h>

#include "pitches1.h"

bool strobe_effect = false;
int ledpin1 = 27;
int ledpin2 = 26;
int ledpin3 = 25;
int speakerPin = A5;
float tempo = 116.0;

void rest(int restLength) {
    noTone(speakerPin);
    float delayTime = (1000.0/tempo) * (60.0/4) * restLength;
    delay(delayTime);
}

void spacedNote(int frequencyInHertz, int noteLength, int ledpin) {
    // if (digitalRead(SW_E) == PRESSED) {
    //     while(digitalRead(SW_E) == PRESSED) {
    //         delay(10);
    //     }
    //     strobe_effect = !strobe_effect;
    // }

    // tempo = analogRead(A0);
    // long outputValue = map(tempo, 0, 1023, 1140, 1180);
    // tempo = outputValue/10.0;
    // Serial.println(strobe_effect);
    // dwenguinoLCD.setCursor(0,1);
    // dwenguinoLCD.print(tempo);

    tone(speakerPin, frequencyInHertz);

    analogWrite(ledpin, 255);

    float delayTime = (1000.0/tempo) * (60.0/4) * noteLength;
    delay(delayTime - 50);

    analogWrite(ledpin, 0);

    noTone(speakerPin);
    delay(50);
}

void loop(){
    spacedNote(NOTE_D2, EIGHTHNOTE, ledpin1);
    spacedNote(NOTE_C2, EIGHTHNOTE, ledpin1);
    spacedNote(NOTE_D2, EIGHTHNOTE, ledpin1);
    spacedNote(NOTE_C2, EIGHTHNOTE, ledpin1);
    spacedNote(NOTE_D2, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D2, SIXTEENTHNOTE, ledpin1);
    rest(EIGHTHNOTE);

    spacedNote(NOTE_F2, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_F2, SIXTEENTHNOTE, ledpin1);
    rest(EIGHTHNOTE);

    spacedNote(NOTE_D2, EIGHTHNOTE, ledpin1);
    spacedNote(NOTE_C2, EIGHTHNOTE, ledpin1);
    spacedNote(NOTE_D2, EIGHTHNOTE, ledpin1);
    spacedNote(NOTE_C2, EIGHTHNOTE, ledpin1);
    spacedNote(NOTE_D2, EIGHTHNOTE, ledpin1);
    spacedNote(NOTE_D2, EIGHTHNOTE, ledpin1);

    rest(QUARTERNOTE);
}

void setup(){
    initDwenguino();

    dwenguinoLCD.setCursor(0,0);
    dwenguinoLCD.print(String("The Robots 2"));
    // dwenguinoLCD.setCursor(0,1);
    // dwenguinoLCD.print(String("Kraftwerk"));

    pinMode(speakerPin, OUTPUT);
    Serial.begin(9600);

    dwenguinoLCD.setCursor(0,1);
    dwenguinoLCD.print(String("Measures left: 2"));
    rest(WHOLENOTE);
    rest(WHOLENOTE);
    dwenguinoLCD.setCursor(0,1);
    dwenguinoLCD.print(String("Measures left: 1"));
    rest(WHOLENOTE);
    rest(WHOLENOTE);
    // dwenguinoLCD.setCursor(0,1);
    // dwenguinoLCD.print(String("Measures left: 1"));
    // rest(WHOLENOTE);
    // rest(WHOLENOTE);

    dwenguinoLCD.clear();
    dwenguinoLCD.print(String("The Robots"));
    dwenguinoLCD.setCursor(0,1);
    dwenguinoLCD.print(String("Kraftwerk"));

}

#include <Wire.h>
#include <Dwenguino.h>
#include <LiquidCrystal.h>

#include "pitches1.h"

bool strobe_effect = false;
int ledpin1 = 27;
int ledpin2 = 25;
int ledpin3 = 26;

//comment out to enable onboard dwenguino leds:
// int ledpin1 = 36;
// int ledpin2 = 35;
// int ledpin3 = 34;

int speakerPin = A5;
float tempo = 115.0;

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

void setup(){
    initDwenguino();

    dwenguinoLCD.setCursor(0,0);
    dwenguinoLCD.print(String("The Robots 3"));
    // dwenguinoLCD.setCursor(0,1);
    // dwenguinoLCD.print(String("Kraftwerk"));

    pinMode(speakerPin, OUTPUT);
    Serial.begin(9600);

    dwenguinoLCD.setCursor(0,1);
    dwenguinoLCD.print(String("Measures left: 6"));
    rest(WHOLENOTE);
    rest(WHOLENOTE);
    dwenguinoLCD.setCursor(0,1);
    dwenguinoLCD.print(String("Measures left: 5"));
    rest(WHOLENOTE);
    rest(WHOLENOTE);
    dwenguinoLCD.setCursor(0,1);
    dwenguinoLCD.print(String("Measures left: 4"));
    rest(WHOLENOTE);
    rest(WHOLENOTE);
    dwenguinoLCD.setCursor(0,1);
    dwenguinoLCD.print(String("Measures left: 3"));
    rest(WHOLENOTE);
    rest(WHOLENOTE);
    dwenguinoLCD.setCursor(0,1);
    dwenguinoLCD.print(String("Measures left: 2"));
    rest(WHOLENOTE);
    rest(WHOLENOTE);
    dwenguinoLCD.setCursor(0,1);
    dwenguinoLCD.print(String("Measures left: 1"));
    rest(WHOLENOTE);
    rest(WHOLENOTE);
    dwenguinoLCD.clear();
    dwenguinoLCD.print(String("The Robots"));
    dwenguinoLCD.setCursor(0,1);
    dwenguinoLCD.print(String("Kraftwerk"));

}

void loop(){
    spacedNote(NOTE_D3, EIGHTHNOTE, ledpin1);
    rest(QUARTERNOTE);

    spacedNote(NOTE_D3, EIGHTHNOTE, ledpin1);
    spacedNote(NOTE_F3, EIGHTHNOTE, ledpin2);
    spacedNote(NOTE_D3, EIGHTHNOTE, ledpin1);
    rest(QUARTERNOTE);

    spacedNote(NOTE_F4, QUARTERNOTE, ledpin1);
    spacedNote(NOTE_G4, EIGHTHNOTE, ledpin2);
    spacedNote(NOTE_C5, EIGHTHNOTE, ledpin3);
    spacedNote(NOTE_A4, EIGHTHNOTE, ledpin1);
    rest(EIGHTHNOTE);
    rest(QUARTERNOTE);

    noTone(speakerPin);
}

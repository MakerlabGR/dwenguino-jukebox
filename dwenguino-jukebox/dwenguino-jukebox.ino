#include <Wire.h>

#include <Dwenguino.h>

#include <LiquidCrystal.h>

#include "pitches1.h"
#include "pitches2.h"
#include "pitches3.h"
#include "pitches4.h"

#include "gameofthrones.h"
#include "carrabean.h"
// #include "furelise.h"
// #include "jeopardy.h"
// #include "rickroll.h"
// #include "starwars.h"
// #include "supermario.h"
// #include "tetris.h"

  int m=0;
  int n=0;

void setup()
{
  pinMode(BUZZER, OUTPUT);
  initDwenguino();
  dwenguinoLCD.setCursor(0,0);
  dwenguinoLCD.print(String("Dwenguino"));
  dwenguinoLCD.setCursor(8,1);
  dwenguinoLCD.print(String("Jukebox"));

   Serial.begin(9600);

}


void loop()
{
    if (digitalRead(SW_S) == PRESSED) {
    m++;
    // Serial.print(m);
    }

    if (digitalRead(SW_N) == PRESSED) {
    m--;
    }

    if (digitalRead(SW_C) == PRESSED) {
    n=m;}

  if (m==0){
  dwenguinoLCD.clear();
  dwenguinoLCD.setCursor(0,0);
  dwenguinoLCD.print(String("Dwenguino"));
  dwenguinoLCD.setCursor(8,1);
  dwenguinoLCD.print(String("Jukebox"));
  }
  if (m==1){
   dwenguinoLCD.clear();
   dwenguinoLCD.setCursor(0,0);
   dwenguinoLCD.print(String("Game Of Thrones"));
  }

    if (n==1){
      // noTone(A5);
      // for (int i=0; i<3; i++){
      GameOfThrones();
      // }
    }


  // if (m==2){
  //  dwenguinoLCD.clear();
  //  dwenguinoLCD.clear();
  //  dwenguinoLCD.setCursor(0,0);
  //  dwenguinoLCD.print(String("Pirates Of The Carrabean"));
  // }

    if (digitalRead(SW_C) == PRESSED) {
      dwenguinoLCD.clear();
      dwenguinoLCD.setCursor(0,0);
      dwenguinoLCD.print(String("Game Of Thrones"));
      noTone(A5);
      for (int i=0; i<3; i++){
      GameOfThrones();
      }
    }

    // if
    // if (digitalRead(SW_N) == PRESSED) {
    //   noTone(A5);
    //   carrabean();
    //   dwenguinoLCD.clear();
    //   dwenguinoLCD.setCursor(0,0);
    //   dwenguinoLCD.print(String("Carrabean"));

    // }
    // if (digitalRead(SW_S) == PRESSED) {
    //   noTone(BUZZER);
    //   tone(BUZZER, 340);
    //   dwenguinoLCD.clear();
    //   dwenguinoLCD.setCursor(0,0);
    //   dwenguinoLCD.print(String("340"));

    // }
    // if (digitalRead(SW_W) == PRESSED) {
    //   noTone(BUZZER);
    //   dwenguinoLCD.clear();
    //   dwenguinoLCD.setCursor(0,0);
    //   dwenguinoLCD.print(String("Stopped"));

    // }

}

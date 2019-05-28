#include <Wire.h>

#include <Dwenguino.h>

#include <LiquidCrystal.h>

#include "pitches1.h"
#include "pitches2.h"
#include "pitches3.h"
#include "pitches4.h"

#include "gameofthrones.h"
#include "furelise.h"
#include "jeopardy.h"
#include "rickroll.h"
#include "starwars.h"
#include "supermario.h"
#include "tetris.h"


void setup()
{
  pinMode(BUZZER, OUTPUT);
  initDwenguino();
  dwenguinoLCD.setCursor(0,0);
  dwenguinoLCD.print(String("Dwenguino"));
  dwenguinoLCD.setCursor(8,1);
  dwenguinoLCD.print(String("Jukebox"));

}


void loop()
{
    if (digitalRead(SW_C) == PRESSED) {
      noTone(BUZZER);
      GameOfThrones();
      dwenguinoLCD.clear();
      dwenguinoLCD.setCursor(0,0);
      dwenguinoLCD.print(String("Game Of Thrones"));

    }
    if (digitalRead(SW_N) == PRESSED) {
      noTone(BUZZER);
      tone(BUZZER, 540);
      dwenguinoLCD.clear();
      dwenguinoLCD.setCursor(0,0);
      dwenguinoLCD.print(String("540"));

    }
    if (digitalRead(SW_S) == PRESSED) {
      noTone(BUZZER);
      tone(BUZZER, 340);
      dwenguinoLCD.clear();
      dwenguinoLCD.setCursor(0,0);
      dwenguinoLCD.print(String("340"));

    }
    if (digitalRead(SW_W) == PRESSED) {
      noTone(BUZZER);
      dwenguinoLCD.clear();
      dwenguinoLCD.setCursor(0,0);
      dwenguinoLCD.print(String("Stopped"));

    }

}

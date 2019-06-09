#include <Wire.h>
#include <Dwenguino.h>
#include <LiquidCrystal.h>

#include "pitches1.h"
#include "pitches2.h"
#include "pitches3.h"
#include "pitches4.h"

int ledpin1 = 27;
int ledpin2 = 26;
int ledpin3 = 25;
int ledpin4 = 28;
int ledpin5 = 29;
int ledpin6 = 30;
int ledpin7 = 31;
int ledpin8 = 32;

#include "gameofthrones.h"
#include "carrabean.h"
#include "furelise.h"
#include "jeopardy.h"
// #include "rickroll.h"
#include "starwars.h"
#include "supermario.h"
#include "tetris.h"
#include "robots.h"
#include "megalovania.h"


// int m=map(m,0,2,0,2);

int m;
int n;

int buttonState_S = 0;
int buttonState_N = 0;
int buttonState_C = 0;
int lastButtonState_S = 0;
int lastButtonState_N = 0;
int lastButtonState_C = 0;

void setup()
{
  initDwenguino();
  pinMode(BUZZER, OUTPUT);
  pinMode(PIEZO_PIN, OUTPUT);
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
  pinMode(ledpin3, OUTPUT);
  // dwenguinoLCD.setCursor(0,0);
  // dwenguinoLCD.print(String("Dwenguino"));
  // dwenguinoLCD.setCursor(8,1);
  // dwenguinoLCD.print(String("Jukebox"));

   Serial.begin(9600);

}


void loop()
{
  m=constrain(m, 0, 10);

  buttonState_S = digitalRead(SW_S);
  buttonState_N = digitalRead(SW_N);
  buttonState_C = digitalRead(SW_C);

    if (buttonState_S != lastButtonState_S) {
      if(buttonState_S == HIGH) {
        m++;
        dwenguinoLCD.clear();
      }
      delay(50);
    }

  if (buttonState_N != lastButtonState_N) {
      if(buttonState_N == HIGH) {
        m--;
        dwenguinoLCD.clear();
      }
      delay(50);
    }

    if (buttonState_C != lastButtonState_C) {
      if(buttonState_C == HIGH) {
        n=m;
        dwenguinoLCD.clear();
      Serial.print("n: ");
        Serial.println(n);
      }
      delay(50);
    }

    lastButtonState_C = buttonState_C;
    lastButtonState_S = buttonState_S;
    lastButtonState_N = buttonState_N;


  if (m==0){
  // dwenguinoLCD.clear();
  dwenguinoLCD.setCursor(0,0);
  dwenguinoLCD.print(String("Dwenguino"));
  dwenguinoLCD.setCursor(8,1);
  dwenguinoLCD.print(String("Jukebox"));
  // dwenguinoLCD.clear();

  }
   // dwenguinoLCD.setCursor(0,1);
   // dwenguinoLCD.print(m);
  if (m==1){
   // dwenguinoLCD.clear();
   dwenguinoLCD.setCursor(0,0);
   dwenguinoLCD.print(String("Game Of Thrones"));
  }
    if (n==1){
      // noTone(A5);
       for (int i=0; i<500; i++){
          GameOfThrones();
    }
    }

   if (m==2){
  //  dwenguinoLCD.clear();
  //  dwenguinoLCD.clear();
    dwenguinoLCD.setCursor(0,0);
    dwenguinoLCD.print(String("Pirates of the"));
    dwenguinoLCD.setCursor(0,1);
    dwenguinoLCD.print(String("Carrabean"));
   }
    if (n==2){
      for (int i=0; i<500; i++){
        carrabean();
      }
    }

  if (m==3){
   dwenguinoLCD.setCursor(0,0);
   dwenguinoLCD.print(String("Fur Elise"));
    }
    if (n==3){
       for (int i=0; i<500; i++){
          furelise();
      }
    }

    if (m==4){
   dwenguinoLCD.setCursor(0,0);
   dwenguinoLCD.print(String("Star Wars"));
    }
    if (n==4){
       for (int i=0; i<500; i++){
          starwars();
      }
    }

    if (m==5){
   dwenguinoLCD.setCursor(0,0);
   dwenguinoLCD.print(String("Jeopardy"));
    }
    if (n==5){
       for (int i=0; i<500; i++){
          jeopardy();
      }
    }

    if (m==6){
   dwenguinoLCD.setCursor(0,0);
   dwenguinoLCD.print(String("Tetris"));
    }
    if (n==6){
       for (int i=0; i<500; i++){
          tetris();
      }
    }

    if (m==7){
   dwenguinoLCD.setCursor(0,0);
   dwenguinoLCD.print(String("Super Mario"));
    }
    if (n==7){
       for (int i=0; i<500; i++){
          supermario();
      }
    }

    if (m==8){
   dwenguinoLCD.setCursor(0,0);
   dwenguinoLCD.print(String("Megalovania"));
    }
    if (n==8){
       for (int i=0; i<500; i++){
          megalovania();
      }
    }

    if (m==9){
   dwenguinoLCD.setCursor(0,0);
   dwenguinoLCD.print(String("The Robots 1"));
    }
    if (n==9){
       for (int i=0; i<500; i++){
          robots1();
      }
    }

    if (m==10){
   dwenguinoLCD.setCursor(0,0);
   dwenguinoLCD.print(String("The Robots 2"));
    }
    if (n==10){
       for (int i=0; i<500; i++){
          robots2();
      }
    }
}


 //  Leds
 // int ledpin1 = 12;
 // int ledpin2 = 11;
 // int ledpin3 = 10;
 // int ledpin4 = 9;
 // int ledpin5 = 8;
 // int ledpin6 = 7;
 // int ledpin7 = 6;
 // int ledpin8 = 5;

 // void setup() {
 //     pinMode(A5, OUTPUT);
 //     pinMode(ledpin1, OUTPUT);
 //     pinMode(ledpin2, OUTPUT);
 //     pinMode(ledpin3, OUTPUT);
 //     pinMode(ledpin4, OUTPUT);
 //     pinMode(ledpin5, OUTPUT);
 //     pinMode(ledpin6, OUTPUT);
 //     pinMode(ledpin7, OUTPUT);
 //     pinMode(ledpin8, OUTPUT);
 // }

 // void loop() {
 //     GameOfThrones();
 // }


// void ilumina(int note){
//   if(note == NOTE_G4 || note == NOTE_G3 || note == NOTE_GS3) {
//    digitalWrite(ledpin1, HIGH);
//   } else if (note == NOTE_C4) {
//     digitalWrite(ledpin2, HIGH);
//   } else if(note == NOTE_AS3) {
//     digitalWrite(ledpin3, HIGH);
//   } else if (note == NOTE_DS4) {
//     digitalWrite(ledpin4, HIGH);
//   } else if (note == NOTE_D4) {
//     digitalWrite(ledpin7, HIGH);
//   } else if (note == NOTE_F4) {
//     digitalWrite(ledpin8, HIGH);
//   } else if (note == NOTE_F3) {
//     digitalWrite(ledpin5, HIGH);
//   } else if(note == NOTE_E4) {
//     digitalWrite(ledpin6, HIGH);
//   }
// }

// void apaga(int note){
//   if(note == NOTE_G4 || note == NOTE_G3 || note == NOTE_GS3) {
//    digitalWrite(ledpin1, LOW);
//   } else if (note == NOTE_C4) {
//     digitalWrite(ledpin2, LOW);
//   } else if(note == NOTE_AS3) {
//     digitalWrite(ledpin3, LOW);
//   } else if (note == NOTE_DS4) {
//     digitalWrite(ledpin4, LOW);
//   } else if (note == NOTE_D4) {
//     digitalWrite(ledpin7, LOW);
//   } else if (note == NOTE_F4) {
//     digitalWrite(ledpin8, LOW);
//   } else if (note == NOTE_F3) {
//     digitalWrite(ledpin5, LOW);
//   } else if(note == NOTE_E4) {
//     digitalWrite(ledpin6, LOW);
//   }
// }

void ilumina(int note){
  if(note == NOTE_G4 || note == NOTE_G3 || note == NOTE_GS3) {
   digitalWrite(ledpin3, HIGH);
  } 
  if(note == NOTE_C4) {
   digitalWrite(ledpin2, HIGH);
  }
  if(note == NOTE_D4 || note == NOTE_DS4) {
   digitalWrite(ledpin3, HIGH);
  }
  if(note == NOTE_AS3) {
   digitalWrite(ledpin1, HIGH);
  }
  if(note == NOTE_E4) {
   digitalWrite(ledpin1, HIGH);
  }
  if(note == NOTE_F3 || note == NOTE_F4) {
   digitalWrite(ledpin2, HIGH);
  }
}

void apaga(int note){
  if(note == NOTE_G4 || note == NOTE_G3 || note == NOTE_GS3) {
   digitalWrite(ledpin3, LOW);
  } 
  if(note == NOTE_C4) {
   digitalWrite(ledpin2, LOW);
  }
  if(note == NOTE_D4 || note == NOTE_DS4) {
   digitalWrite(ledpin3, LOW);
  }
  if(note == NOTE_AS3) {
   digitalWrite(ledpin1, LOW);
  }
  if(note == NOTE_E4) {
   digitalWrite(ledpin1, LOW);
  }
  if(note == NOTE_F3 || note == NOTE_F4) {
   digitalWrite(ledpin2, LOW);
  }
}

// void ilumina(int note){
//   if(note == NOTE_AS3 || note == NOTE_C4 || note == NOTE_GS3 || note == NOTE_E4) {
//    digitalWrite(ledpin1, HIGH);
//   } 
//   if(note == NOTE_F3 || note == NOTE_F4|| note == NOTE_D4) {
//    digitalWrite(ledpin2, HIGH);
//   }
//   if(note == NOTE_G3 || note == NOTE_DS4|| note == NOTE_G4) {
//    digitalWrite(ledpin3, HIGH);
//   }
// }

// void apaga(int note){
//   if(note == NOTE_AS3 || note == NOTE_C4 || note == NOTE_GS3 || note == NOTE_E4) {
//    digitalWrite(ledpin1, LOW);
//   } 
//   if(note == NOTE_F3 || note == NOTE_F4|| note == NOTE_D4) {
//    digitalWrite(ledpin2, LOW);
//   }
//   if(note == NOTE_G3 || note == NOTE_DS4|| note == NOTE_G4) {
//    digitalWrite(ledpin3, LOW);
//   }
// }



void GameOfThrones() {
  for(int i=0; i<4; i++) {
    tone(A5, NOTE_G4);
     ilumina(NOTE_G4);
    delay(500);
    noTone(A5);
     apaga(NOTE_G4);

    tone(A5, NOTE_C4);
     ilumina(NOTE_C4);
    delay(500);
    noTone(A5);
     apaga(NOTE_C4);

    tone(A5, NOTE_DS4);
     ilumina(NOTE_DS4);
    delay(250);
    noTone(A5);
     apaga(NOTE_DS4);

    tone(A5, NOTE_F4);
     ilumina(NOTE_F4);
    delay(250);
    noTone(A5);
     apaga(NOTE_F4);
  }

  for(int i=0; i<4; i++){
    tone(A5, NOTE_G4);
     ilumina(NOTE_G4);
    delay(500);
    noTone(A5);
     apaga(NOTE_G4);

    tone(A5, NOTE_C4);
     ilumina(NOTE_C4);
    delay(500);
    noTone(A5);
     apaga(NOTE_C4);

    tone(A5, NOTE_E4);
     ilumina(NOTE_E4);
    delay(250);
    noTone(A5);
     apaga(NOTE_E4);

    tone(A5, NOTE_F4);
     ilumina(NOTE_F4);
    delay(250);
    noTone(A5);
     apaga(NOTE_F4);
  }

    tone(A5, NOTE_G4);
     ilumina(NOTE_G4);
    delay(1500);
    noTone(A5);
     apaga(NOTE_G4);

    tone(A5, NOTE_C4);
     ilumina(NOTE_C4);
    delay(1500);
     apaga(NOTE_C4);


    tone(A5, NOTE_E4);
     ilumina(NOTE_E4);
    delay(250);
     apaga(NOTE_C4);

    tone(A5, NOTE_F4);
     ilumina(NOTE_F4);
    delay(250);
     apaga(NOTE_C4);

    tone(A5, NOTE_G4);
     ilumina(NOTE_G4);
    delay(1000);
    noTone(A5);
     apaga(NOTE_G4);

    tone(A5, NOTE_C4);
     ilumina(NOTE_C4);
    delay(1000);
     apaga(NOTE_C4);

    tone(A5, NOTE_DS4);
     ilumina(NOTE_DS4);
    delay(250);
    noTone(A5);
     apaga(NOTE_DS4);

    tone(A5, NOTE_F4);
     ilumina(NOTE_F4);
    delay(250);
    noTone(A5);
     apaga(NOTE_F4);

  for(int i=0; i<3; i++) {

    tone(A5, NOTE_D4);
     ilumina(NOTE_D4);
    delay(500);
    noTone(A5);
     apaga(NOTE_D4);

    tone(A5, NOTE_G3);
     ilumina(NOTE_G3);
    delay(500);
    noTone(A5);
     apaga(NOTE_G3);

    tone(A5, NOTE_AS3);
     ilumina(NOTE_AS3);
    delay(250);
    noTone(A5);
     apaga(NOTE_AS3);

    tone(A5, NOTE_C4);
     ilumina(NOTE_C4);
    delay(250);
    noTone(A5);
     apaga(NOTE_C4);


  }



      tone(A5, NOTE_D4);
       ilumina(NOTE_D4);
      delay(1500);
      noTone(A5);
       apaga(NOTE_D4);

      tone(A5, NOTE_F4);
       ilumina(NOTE_F4);
      delay(1500);
      noTone(A5);
       apaga(NOTE_F4);

      tone(A5, NOTE_AS3);
       ilumina(NOTE_AS3);
      delay(1000);
      noTone(A5);
       apaga(NOTE_AS3);

      tone(A5, NOTE_DS4);
       ilumina(NOTE_DS4);
      delay(250);
      noTone(A5);
       apaga(NOTE_DS4);

      tone(A5, NOTE_D4);
       ilumina(NOTE_D4);
      delay(250);
      noTone(A5);
       apaga(NOTE_D4);

      tone(A5, NOTE_F4);
       ilumina(NOTE_F4);
      delay(1000);
      noTone(A5);
       apaga(NOTE_F4);

      tone(A5, NOTE_AS3);
       ilumina(NOTE_AS3);
      delay(1000);
      noTone(A5);
       apaga(NOTE_AS3);

      tone(A5, NOTE_DS4);
       ilumina(NOTE_DS4);
      delay(250);
      noTone(A5);
       apaga(NOTE_DS4);

      tone(A5, NOTE_D4);
       ilumina(NOTE_D4);
      delay(250);
      noTone(A5);
       apaga(NOTE_D4);

      tone(A5, NOTE_C4);
       ilumina(NOTE_C4);
      delay(500);
      noTone(A5);
       apaga(NOTE_C4);

  for(int i=0; i<3; i++) {
      tone(A5, NOTE_GS3);
       ilumina(NOTE_GS3);
      delay(250);
      noTone(A5);
       apaga(NOTE_GS3);

      tone(A5, NOTE_AS3);
       ilumina(NOTE_AS3);
      delay(250);
      noTone(A5);
       apaga(NOTE_AS3);

      tone(A5, NOTE_C4);
       ilumina(NOTE_C4);
      delay(500);
      noTone(A5);
       apaga(NOTE_C4);

      tone(A5, NOTE_F3);
       ilumina(NOTE_F3);
      delay(500);
      noTone(A5);
       apaga(NOTE_F3);
  }

    tone(A5, NOTE_G4);
     ilumina(NOTE_G4);
    delay(1000);
    noTone(A5);
     apaga(NOTE_G4);

    tone(A5, NOTE_C4);
     ilumina(NOTE_C4);
    delay(1000);
    noTone(A5);
     apaga(NOTE_C4);

    tone(A5, NOTE_DS4);
     ilumina(NOTE_DS4);
    delay(250);
    noTone(A5);
     apaga(NOTE_DS4);

    tone(A5, NOTE_F4);
     ilumina(NOTE_F4);
    delay(250);
    noTone(A5);
     apaga(NOTE_F4);

    tone(A5, NOTE_G4);
     ilumina(NOTE_G4);
    delay(1000);
    noTone(A5);
     apaga(NOTE_G4);

    tone(A5, NOTE_C4);
     ilumina(NOTE_C4);
    delay(1000);
    noTone(A5);
     apaga(NOTE_C4);

    tone(A5, NOTE_DS4);
     ilumina(NOTE_DS4);
    delay(250);
    noTone(A5);
     apaga(NOTE_DS4);

    tone(A5, NOTE_F4);
     ilumina(NOTE_F4);
    delay(250);
    noTone(A5);
     apaga(NOTE_F4);

    tone(A5, NOTE_D4);
     ilumina(NOTE_D4);
    delay(500);
    noTone(A5);
     apaga(NOTE_D4);

  for(int i=0; i<4; i++) {
    tone(A5, NOTE_G3);
     ilumina(NOTE_G3);
    delay(500);
    noTone(A5);
     apaga(NOTE_G3);

    tone(A5, NOTE_AS3);
     ilumina(NOTE_AS3);
    delay(250);
    noTone(A5);
     apaga(NOTE_AS3);

    tone(A5, NOTE_C4);
     ilumina(NOTE_C4);
    delay(250);
    noTone(A5);
     apaga(NOTE_C4);

    tone(A5, NOTE_D4);
     ilumina(NOTE_D4);
    delay(500);
    noTone(A5);
     apaga(NOTE_D4);
  }
}

// G4 G3 GS3 > ledpin1

// C4 AS3 DS4 D4 F4 F3 E4

//  1  2 3 1 2 3
// AS3
//         F3
//           G3
//           GS3
//   C4
//     D4
//     DS4
//       E4
//         F4
//           G4
// -----------------------------------------------------------------

//  1  2 3 1 2 3
// AS3
//   F3  
//     G3
//       GS3
//       C4
//         D4
//           DS4
//       E4
//         F4
//           G4
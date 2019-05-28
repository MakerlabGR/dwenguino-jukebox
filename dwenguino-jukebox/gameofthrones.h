
// // Leds
// int led1 = 12;
// int led2 = 11;
// int led3 = 10;
// int led4 = 9;
// int led5 = 8;
// int led6 = 7;
// int led7 = 6;
// int led8 = 5;

// void setup() {
    // pinMode(A5, OUTPUT);
    // pinMode(led1, OUTPUT);
    // pinMode(led2, OUTPUT);
    // pinMode(led3, OUTPUT);
    // pinMode(led4, OUTPUT);
    // pinMode(led5, OUTPUT);
    // pinMode(led6, OUTPUT);
    // pinMode(led7, OUTPUT);
    // pinMode(led8, OUTPUT);
// }

// void loop() {
//     GameOfThrones();
// }

// void ilumina(int note){
//   if(note == NOTE_G4 || note == NOTE_G3 || note == NOTE_GS3) {
//    digitalWrite(led1, HIGH);
//   } else if (note == NOTE_C4) {
//     digitalWrite(led2, HIGH);
//   } else if(note == NOTE_AS3) {
//     digitalWrite(led3, HIGH);
//   } else if (note == NOTE_DS4) {
//     digitalWrite(led4, HIGH);
//   } else if (note == NOTE_D4) {
//     digitalWrite(led7, HIGH);
//   } else if (note == NOTE_F4) {
//     digitalWrite(led8, HIGH);
//   } else if (note == NOTE_F3) {
//     digitalWrite(led5, HIGH);
//   } else if(note == NOTE_E4) {
//     digitalWrite(led6, HIGH);
//   }
// }

// void apaga(int note){
//   if(note == NOTE_G4 || note == NOTE_G3 || note == NOTE_GS3) {
//    digitalWrite(led1, LOW);
//   } else if (note == NOTE_C4) {
//     digitalWrite(led2, LOW);
//   } else if(note == NOTE_AS3) {
//     digitalWrite(led3, LOW);
//   } else if (note == NOTE_DS4) {
//     digitalWrite(led4, LOW);
//   } else if (note == NOTE_D4) {
//     digitalWrite(led7, LOW);
//   } else if (note == NOTE_F4) {
//     digitalWrite(led8, LOW);
//   } else if (note == NOTE_F3) {
//     digitalWrite(led5, LOW);
//   } else if(note == NOTE_E4) {
//     digitalWrite(led6, LOW);
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

//
    tone(A5, NOTE_E4);
    ilumina(NOTE_E4);
    delay(250);
    apaga(NOTE_C4);

    tone(A5, NOTE_F4);
    ilumina(NOTE_F4);
    delay(250);
    apaga(NOTE_C4);
//
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

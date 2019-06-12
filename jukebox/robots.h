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


void robots1(){
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_C3, SIXTEENTHNOTE, ledpin3);
    spacedNote(NOTE_C3, SIXTEENTHNOTE, ledpin3);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_C3, SIXTEENTHNOTE, ledpin3);
    spacedNote(NOTE_C3, SIXTEENTHNOTE, ledpin3);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    rest(EIGHTHNOTE);

    spacedNote(NOTE_F3, SIXTEENTHNOTE, ledpin2);
    spacedNote(NOTE_F3, SIXTEENTHNOTE, ledpin2);
    rest(EIGHTHNOTE);

    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_C3, SIXTEENTHNOTE, ledpin3);
    spacedNote(NOTE_C3, SIXTEENTHNOTE, ledpin3);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_C3, SIXTEENTHNOTE, ledpin3);
    spacedNote(NOTE_C3, SIXTEENTHNOTE, ledpin3);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);
    spacedNote(NOTE_D3, SIXTEENTHNOTE, ledpin1);


    rest(EIGHTHNOTE);

  noTone(speakerPin);
  // while(continuePlaying == false);
  // delay(continueDelay);
}

void robots2(){
    spacedNote(NOTE_D3, EIGHTHNOTE, ledpin1);
    rest(QUARTERNOTE);

    spacedNote(NOTE_D3, EIGHTHNOTE, ledpin1);
    spacedNote(NOTE_F3, EIGHTHNOTE, ledpin3);
    spacedNote(NOTE_D3, EIGHTHNOTE, ledpin1);
    rest(QUARTERNOTE);

    spacedNote(NOTE_F4, QUARTERNOTE, ledpin3);
    spacedNote(NOTE_G4, EIGHTHNOTE, ledpin1);
    spacedNote(NOTE_C5, EIGHTHNOTE, ledpin2);
    spacedNote(NOTE_A4, EIGHTHNOTE, ledpin3);
    rest(DOTTEDQUARTERNOTE);
    // rest(EIGHTHNOTE);

  noTone(speakerPin);
  // while(continuePlaying == false);
  // delay(continueDelay);
}
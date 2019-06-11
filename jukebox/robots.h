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
  while(continuePlaying == false);
  delay(continueDelay);
}

void robots2(){
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
    rest(DOTTEDQUARTERNOTE);
    // rest(EIGHTHNOTE);

  noTone(speakerPin);
  while(continuePlaying == false);
  delay(continueDelay);
}
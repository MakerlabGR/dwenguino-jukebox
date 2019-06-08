void robots1(){
    spacedNote(NOTE_D3, SIXTEENTHNOTE);
    spacedNote(NOTE_D3, SIXTEENTHNOTE);
    spacedNote(NOTE_C3, SIXTEENTHNOTE);
    spacedNote(NOTE_C3, SIXTEENTHNOTE);
    spacedNote(NOTE_D3, SIXTEENTHNOTE);
    spacedNote(NOTE_D3, SIXTEENTHNOTE);
    spacedNote(NOTE_C3, SIXTEENTHNOTE);
    spacedNote(NOTE_C3, SIXTEENTHNOTE);
    spacedNote(NOTE_D3, SIXTEENTHNOTE);
    spacedNote(NOTE_D3, SIXTEENTHNOTE);
    rest(EIGHTHNOTE);

    spacedNote(NOTE_F3, SIXTEENTHNOTE);
    spacedNote(NOTE_F3, SIXTEENTHNOTE);
    rest(EIGHTHNOTE);

    spacedNote(NOTE_D3, SIXTEENTHNOTE);
    spacedNote(NOTE_D3, SIXTEENTHNOTE);
    spacedNote(NOTE_C3, SIXTEENTHNOTE);
    spacedNote(NOTE_C3, SIXTEENTHNOTE);
    spacedNote(NOTE_D3, SIXTEENTHNOTE);
    spacedNote(NOTE_D3, SIXTEENTHNOTE);
    spacedNote(NOTE_C3, SIXTEENTHNOTE);
    spacedNote(NOTE_C3, SIXTEENTHNOTE);
    spacedNote(NOTE_D3, SIXTEENTHNOTE);
    spacedNote(NOTE_D3, SIXTEENTHNOTE);
    spacedNote(NOTE_D3, SIXTEENTHNOTE);
    spacedNote(NOTE_D3, SIXTEENTHNOTE);
    spacedNote(NOTE_D3, SIXTEENTHNOTE);
    spacedNote(NOTE_D3, SIXTEENTHNOTE);


    rest(EIGHTHNOTE);

  noTone(speakerPin);
  while(continuePlaying == false);
  delay(continueDelay);
}

void robots2(){
    spacedNote(NOTE_D3, EIGHTHNOTE);
    rest(QUARTERNOTE);

    spacedNote(NOTE_D3, EIGHTHNOTE);
    spacedNote(NOTE_F3, EIGHTHNOTE);
    spacedNote(NOTE_D3, EIGHTHNOTE);
    rest(QUARTERNOTE);

    spacedNote(NOTE_F4, QUARTERNOTE);
    spacedNote(NOTE_G4, EIGHTHNOTE);
    spacedNote(NOTE_C5, EIGHTHNOTE);
    spacedNote(NOTE_A4, EIGHTHNOTE);
    rest(DOTTEDQUARTERNOTE);
    // rest(EIGHTHNOTE);

  noTone(speakerPin);
  while(continuePlaying == false);
  delay(continueDelay);
}
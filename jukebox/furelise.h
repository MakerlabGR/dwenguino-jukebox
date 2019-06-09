    // SETTINGS
    #define speakerPin A5 //Speaker or Piezo buzzer on this pin
    int tempo = 120;
    boolean continuePlaying = true; //Set to true to continuously play (otherwise, false)
    int continueDelay = 0; //Time to wait before continuing playing

    void spacedNote(int frequencyInHertz, int noteLength, int ledpin) {
      tone(speakerPin, frequencyInHertz);
      analogWrite(ledpin, 255);
      float delayTime = (1000.0/tempo) * (60.0/4) * noteLength;
      delay(delayTime - 50);
      analogWrite(ledpin, 0);
      noTone(speakerPin);
      delay(50);
    }
    void note(int frequencyInHertz, int noteLength, int ledpin)  //Code to take care of the note
    {
      tone(speakerPin, frequencyInHertz);
      analogWrite(ledpin, 255);
      float delayTime = (1000/tempo) * (60/4) * noteLength;
      delay(delayTime);
      analogWrite(ledpin, 0);
    }
    void rest(int restLength)
    {
      noTone(speakerPin);
      float delayTime = (1000/tempo) * (60/4) * restLength;
      delay(delayTime);
    }

    void furelise()
    {
      // Song goes here
      //note(NOTE_G5, HALFNOTE);

      //Measure 1
      note(NOTE_E6, EIGHTHNOTE, ledpin1);
      note(NOTE_DS6, EIGHTHNOTE, ledpin2);

      //Measure 2
      note(NOTE_E6, EIGHTHNOTE, ledpin1);
      note(NOTE_DS6, EIGHTHNOTE, ledpin2);
      note(NOTE_E6, EIGHTHNOTE, ledpin1);
      note(NOTE_B5, EIGHTHNOTE, ledpin3);
      note(NOTE_D6, EIGHTHNOTE, ledpin2);
      note(NOTE_C6, EIGHTHNOTE, ledpin2);

      //Measure 3
      note(NOTE_A3, EIGHTHNOTE, ledpin1);
      note(NOTE_E4, EIGHTHNOTE, ledpin2);
      note(NOTE_A4, EIGHTHNOTE, ledpin3);
      note(NOTE_C5, EIGHTHNOTE, ledpin1);
      note(NOTE_E5, EIGHTHNOTE, ledpin3);
      note(NOTE_A5, EIGHTHNOTE, ledpin1);

      //Measure 4
      note(NOTE_E3, EIGHTHNOTE, ledpin3);
      note(NOTE_E4, EIGHTHNOTE, ledpin2);
      note(NOTE_GS4, EIGHTHNOTE, ledpin1);
      note(NOTE_E5, EIGHTHNOTE, ledpin3);
      note(NOTE_GS5, EIGHTHNOTE, ledpin2);
      note(NOTE_B5, EIGHTHNOTE, ledpin3);

      //Measure 5
      note(NOTE_A3, EIGHTHNOTE, ledpin1);
      note(NOTE_E4, EIGHTHNOTE, ledpin2);
      note(NOTE_A4, EIGHTHNOTE, ledpin3);
      note(NOTE_E5, EIGHTHNOTE, ledpin3);
      note(NOTE_E6, EIGHTHNOTE, ledpin1);
      note(NOTE_DS6, EIGHTHNOTE, ledpin2);

      //Measure 6
      note(NOTE_E6, EIGHTHNOTE, ledpin1);
      note(NOTE_DS6, EIGHTHNOTE, ledpin2);
      note(NOTE_E6, EIGHTHNOTE, ledpin1);
      note(NOTE_B5, EIGHTHNOTE, ledpin3);
      note(NOTE_D6, EIGHTHNOTE, ledpin2);
      note(NOTE_C6, EIGHTHNOTE, ledpin2);

      //Measure 7
      note(NOTE_A3, EIGHTHNOTE, ledpin1);
      note(NOTE_E4, EIGHTHNOTE, ledpin2);
      note(NOTE_A4, EIGHTHNOTE, ledpin3);
      note(NOTE_C5, EIGHTHNOTE, ledpin1);
      note(NOTE_E5, EIGHTHNOTE, ledpin3);
      note(NOTE_A5, EIGHTHNOTE, ledpin1);

      //Measure 8
      note(NOTE_E3, EIGHTHNOTE, ledpin1);
      note(NOTE_E4, EIGHTHNOTE, ledpin2);
      note(NOTE_GS4, EIGHTHNOTE, ledpin1);
      note(NOTE_E5, EIGHTHNOTE, ledpin3);
      note(NOTE_GS5, EIGHTHNOTE, ledpin2);
      note(NOTE_B5, EIGHTHNOTE, ledpin3);

      //Measure 9
      note(NOTE_A3, EIGHTHNOTE, ledpin1);
      note(NOTE_E4, EIGHTHNOTE, ledpin2);
      note(NOTE_A4, EIGHTHNOTE, ledpin3);
      note(NOTE_E5, EIGHTHNOTE, ledpin3);
      note(NOTE_C6, EIGHTHNOTE, ledpin2);
      note(NOTE_D6, EIGHTHNOTE, ledpin2);

      //Measure 10
      note(NOTE_C4, EIGHTHNOTE, ledpin2);
      note(NOTE_G4, EIGHTHNOTE, ledpin3);
      note(NOTE_C5, EIGHTHNOTE, ledpin1);
      note(NOTE_G5, EIGHTHNOTE, ledpin2);
      note(NOTE_F6, EIGHTHNOTE, ledpin3);
      note(NOTE_E6, EIGHTHNOTE, ledpin1);

      //Measure 11
      note(NOTE_G3, EIGHTHNOTE, ledpin2);
      note(NOTE_G4, EIGHTHNOTE, ledpin3);
      note(NOTE_B4, EIGHTHNOTE, ledpin1);
      note(NOTE_F5, EIGHTHNOTE, ledpin2);
      note(NOTE_E6, EIGHTHNOTE, ledpin1);
      note(NOTE_D6, EIGHTHNOTE, ledpin2);

      //Measure 12
      note(NOTE_A3, EIGHTHNOTE, ledpin1);
      note(NOTE_E4, EIGHTHNOTE, ledpin2);
      note(NOTE_A4, EIGHTHNOTE, ledpin3);
      note(NOTE_E5, EIGHTHNOTE, ledpin3);
      note(NOTE_D6, EIGHTHNOTE, ledpin2);
      note(NOTE_C6, EIGHTHNOTE, ledpin2);

      //Measure 13
      note(NOTE_E3, EIGHTHNOTE, ledpin3);
      note(NOTE_E4, EIGHTHNOTE, ledpin2);
      note(NOTE_A5, EIGHTHNOTE, ledpin1);
      rest(EIGHTHNOTE);



      /////// KEEP ALL CODE BELOW UNCHANGED, CHANGE VARS ABOVE ////////
      noTone(speakerPin);
      while(continuePlaying == false);
      delay(continueDelay);
    }
    // void setup()
    // {
    //   pinMode(speakerPin, OUTPUT);
    //   Serial.begin(9600);
    // }
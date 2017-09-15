// Define pins
int button1 = 28;
int redLED1 = 29;
int blueLED1 = 30;
int button2 = 25;
int redLED2 = 26;
int blueLED2 = 27;
int button3 = 22;
int redLED3 = 23;
int blueLED3 = 24;
int button4 = 37;
int redLED4 = 38;
int blueLED4 = 39;
int button5 = 34;
int redLED5 = 35;
int blueLED5 = 36;
int button6 = 31;
int redLED6 = 32;
int blueLED6 = 33;
int button7 = 46;
int redLED7 = 47;
int blueLED7 = 48;
int button8 = 43;
int redLED8 = 44;
int blueLED8 = 45;
int button9 = 40;
int redLED9 = 41;
int blueLED9 = 42;



// Define variables
int turn = 0;
int btn1clicked = 0;
int btn2clicked = 0;
int btn3clicked = 0;
int btn4clicked = 0;
int btn5clicked = 0;
int btn6clicked = 0;
int btn7clicked = 0;
int btn8clicked = 0;
int btn9clicked = 0;

void setup() {
  Serial.begin(9600);
  
  // Set mode for pins
  pinMode(button1, INPUT_PULLUP);
  pinMode(redLED1, OUTPUT);
  pinMode(blueLED1, OUTPUT);
  pinMode(button2, INPUT_PULLUP);
  pinMode(redLED2, OUTPUT);
  pinMode(blueLED2, OUTPUT);
  pinMode(button3, INPUT_PULLUP);
  pinMode(redLED3, OUTPUT);
  pinMode(blueLED3, OUTPUT);
  pinMode(button4, INPUT_PULLUP);
  pinMode(redLED4, OUTPUT);
  pinMode(blueLED4, OUTPUT);
  pinMode(button5, INPUT_PULLUP);
  pinMode(redLED5, OUTPUT);
  pinMode(blueLED5, OUTPUT);
  pinMode(button6, INPUT_PULLUP);
  pinMode(redLED6, OUTPUT);
  pinMode(blueLED6, OUTPUT);
  pinMode(button7, INPUT_PULLUP);
  pinMode(redLED7, OUTPUT);
  pinMode(blueLED7, OUTPUT);
  pinMode(button8, INPUT_PULLUP);
  pinMode(redLED8, OUTPUT);
  pinMode(blueLED8, OUTPUT);
  pinMode(button9, INPUT_PULLUP);
  pinMode(redLED9, OUTPUT);
  pinMode(blueLED9, OUTPUT);
  
  digitalWrite(redLED1,LOW);
  digitalWrite(redLED7,LOW);
  digitalWrite(blueLED7,LOW);
  digitalWrite(redLED8,LOW);
  digitalWrite(blueLED8,LOW);
  digitalWrite(redLED9,LOW);
  digitalWrite(blueLED9,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  int button1Value = digitalRead(button1);
  int button2Value = digitalRead(button2);
  int button3Value = digitalRead(button3);
  int button4Value = digitalRead(button4);
  int button5Value = digitalRead(button5);
  int button6Value = digitalRead(button6);
  int button7Value = digitalRead(button7);
  int button8Value = digitalRead(button8);
  int button9Value = digitalRead(button9);
  
  if (button1Value == LOW && btn1clicked == 0){
      btn1clicked = 1;
      if(turn % 2 == 0) {
        Serial.println("Player X pressed block 1 in turn " + String(turn + 1));
        btn1clicked = 1;
        turn += 1;
        digitalWrite(redLED1,HIGH);
        if(turn >= 5){
          // Check for win
          checkWin(1);
        }
      } else {
        Serial.println("Player O pressed block 1 in turn " + String(turn + 1));
        btn1clicked = 2;
        turn += 1;
        digitalWrite(blueLED1,HIGH);
        if(turn >= 5){
          // Check for win
          checkWin(2);
        }
      }
   }

   if (button2Value == LOW && btn2clicked == 0){
      if(turn % 2 == 0) {
        Serial.println("Player X pressed block 2 in turn " + String(turn + 1));
        btn2clicked = 1;
        turn += 1;
        digitalWrite(redLED2,HIGH);
        if(turn >= 5){
          // Check for win
          checkWin(1);
        }
      } else {
        Serial.println("Player O pressed block 2 in turn " + String(turn + 1));
        btn2clicked = 2;
        turn += 1;
        digitalWrite(blueLED2,HIGH);
        if(turn >= 5){
          // Check for win
          checkWin(2);
        }
      }
   }

   if (button3Value == LOW && btn3clicked == 0){
      if(turn % 2 == 0) {
        Serial.println("Player X pressed block 3 in turn " + String(turn + 1));
        btn3clicked = 1;
        turn += 1;
        digitalWrite(redLED3,HIGH);
        if(turn >= 5){
          // Check for win
          checkWin(1);
        }
      } else {
        Serial.println("Player O pressed block 3 in turn " + String(turn + 1));
        btn3clicked = 2;
        turn += 1;
        digitalWrite(blueLED3,HIGH);
        if(turn >= 5){
          // Check for win
          checkWin(2);
        }
      }
   }

   if (button4Value == LOW && btn4clicked == 0){
      if(turn % 2 == 0) {
        Serial.println("Player X pressed block 4 in turn " + String(turn + 1));
        btn4clicked = 1;
        turn += 1;
        digitalWrite(redLED4,HIGH);
        if(turn >= 5){
          // Check for win
          checkWin(1);
        }
      } else {
        Serial.println("Player O pressed block 4 in turn " + String(turn + 1));
        btn4clicked = 2;
        turn += 1;
        digitalWrite(blueLED4,HIGH);
        if(turn >= 5){
          // Check for win
          checkWin(2);
        }
      }
   }

   if (button5Value == LOW && btn5clicked == 0){
      if(turn % 2 == 0) {
        Serial.println("Player X pressed block 5 in turn " + String(turn + 1));
        btn5clicked = 1;
        turn += 1;
        digitalWrite(redLED5,HIGH);
        if(turn >= 5){
          // Check for win
          checkWin(1);
        }
      } else {
        Serial.println("Player O pressed block 5 in turn " + String(turn + 1));
        btn5clicked = 2;
        turn += 1;
        digitalWrite(blueLED5,HIGH);
        if(turn >= 5){
          // Check for win
          checkWin(2);
        }
      }
   }

   if (button6Value == LOW && btn6clicked == 0){
      if(turn % 2 == 0) {
        Serial.println("Player X pressed block 6 in turn " + String(turn + 1));
        btn6clicked = 1;
        turn += 1;
        digitalWrite(redLED6,HIGH);
        if(turn >= 5){
          // Check for win
          checkWin(1);
        }
      } else {
        Serial.println("Player O pressed block 6 in turn " + String(turn + 1));
        btn6clicked = 2;
        turn += 1;
        digitalWrite(blueLED6,HIGH);
        if(turn >= 5){
          // Check for win
          checkWin(2);
        }
      }
   }

   if (button7Value == LOW && btn7clicked == 0){
      if(turn % 2 == 0) {
        Serial.println("Player X pressed block 7 in turn " + String(turn + 1));
        btn7clicked = 1;
        turn += 1;
        digitalWrite(redLED7,HIGH);
        if(turn >= 5){
          // Check for win
          checkWin(1);
        }
      } else {
        Serial.println("Player O pressed block 7 in turn " + String(turn + 1));
        btn7clicked = 2;
        turn += 1;
        digitalWrite(blueLED7,HIGH);
        if(turn >= 5){
          // Check for win
          checkWin(2);
        }
      }
   }

   if (button8Value == LOW && btn8clicked == 0){
      if(turn % 2 == 0) {
        Serial.println("Player X pressed block 8 in turn " + String(turn + 1));
        btn8clicked = 1;
        turn += 1;
        digitalWrite(redLED8,HIGH);
        if(turn >= 5){
          // Check for win
          checkWin(1);
        }
      } else {
        Serial.println("Player O pressed block 8 in turn " + String(turn + 1));
        btn8clicked = 2;
        turn += 1;
        digitalWrite(blueLED8,HIGH);
        if(turn >= 5){
          // Check for win
          checkWin(2);
        }
      }
   }

   if (button9Value == LOW && btn9clicked == 0){
      if(turn % 2 == 0) {
        Serial.println("Player X pressed block 9 in turn " + String(turn + 1));
        btn9clicked = 1;
        turn += 1;
        digitalWrite(redLED9,HIGH);
        if(turn >= 5){
          // Check for win
          checkWin(1);
        }
      } else {
        Serial.println("Player O pressed block 9 in turn " + String(turn + 1));
        btn9clicked = 2;
        turn += 1;
        digitalWrite(blueLED9,HIGH);
        if(turn >= 5){
          // Check for win
          checkWin(2);
        }
      }
   }
}

void checkWin(int player) {
  if (btn1clicked == player && btn2clicked == player && btn3clicked == player) {
    if (player == 1) {
      Serial.println("Hooray! Player X won the game.");
      for(int i = 0; i < 4; i++) {
        digitalWrite(redLED1,LOW);
        digitalWrite(redLED2,LOW);
        digitalWrite(redLED3,LOW);
        delay(500);
        digitalWrite(redLED1,HIGH);
        digitalWrite(redLED2,HIGH);
        digitalWrite(redLED3,HIGH);
        delay(500);
      }
      delay(1500);
      reset();
    } else {
      Serial.println("Hooray! Player 0 won the game.");
      for(int i = 0; i < 4; i++) {
        digitalWrite(blueLED1,LOW);
        digitalWrite(blueLED2,LOW);
        digitalWrite(blueLED3,LOW);
        delay(500);
        digitalWrite(blueLED1,HIGH);
        digitalWrite(blueLED2,HIGH);
        digitalWrite(blueLED3,HIGH);
        delay(500);
      }
      delay(1500);
      reset();
    }
  } else if (btn4clicked == player && btn5clicked == player && btn6clicked == player) {
    if (player == 1) {
      Serial.println("Hooray! Player X won the game.");
      for(int i = 0; i < 4; i++) {
        digitalWrite(redLED4,LOW);
        digitalWrite(redLED5,LOW);
        digitalWrite(redLED6,LOW);
        delay(500);
        digitalWrite(redLED4,HIGH);
        digitalWrite(redLED5,HIGH);
        digitalWrite(redLED6,HIGH);
        delay(500);
      }
      delay(1500);
      reset();
    } else {
      Serial.println("Hooray! Player 0 won the game.");
      for(int i = 0; i < 4; i++) {
        digitalWrite(blueLED4,LOW);
        digitalWrite(blueLED5,LOW);
        digitalWrite(blueLED6,LOW);
        delay(500);
        digitalWrite(blueLED4,HIGH);
        digitalWrite(blueLED5,HIGH);
        digitalWrite(blueLED6,HIGH);
        delay(500);
      }
      delay(1500);
      reset();
    }
  } else if (btn7clicked == player && btn8clicked == player && btn9clicked == player) {
    if (player == 1) {
      Serial.println("Hooray! Player X won the game.");
      for(int i = 0; i < 4; i++) {
        digitalWrite(redLED7,LOW);
        digitalWrite(redLED8,LOW);
        digitalWrite(redLED9,LOW);
        delay(500);
        digitalWrite(redLED7,HIGH);
        digitalWrite(redLED8,HIGH);
        digitalWrite(redLED9,HIGH);
        delay(500);
      }
      delay(1500);
      reset();
    } else {
      Serial.println("Hooray! Player 0 won the game.");
      for(int i = 0; i < 4; i++) {
        digitalWrite(blueLED7,LOW);
        digitalWrite(blueLED8,LOW);
        digitalWrite(blueLED9,LOW);
        delay(500);
        digitalWrite(blueLED7,HIGH);
        digitalWrite(blueLED8,HIGH);
        digitalWrite(blueLED9,HIGH);
        delay(500);
      }
      delay(1500);
      reset();
    }
  } else if (btn1clicked == player && btn4clicked == player && btn7clicked == player) {
    if (player == 1) {
      Serial.println("Hooray! Player X won the game.");
      for(int i = 0; i < 4; i++) {
        digitalWrite(redLED1,LOW);
        digitalWrite(redLED4,LOW);
        digitalWrite(redLED7,LOW);
        delay(500);
        digitalWrite(redLED1,HIGH);
        digitalWrite(redLED4,HIGH);
        digitalWrite(redLED7,HIGH);
        delay(500);
      }
      delay(1500);
      reset();
    } else {
      Serial.println("Hooray! Player 0 won the game.");
      for(int i = 0; i < 4; i++) {
        digitalWrite(blueLED1,LOW);
        digitalWrite(blueLED4,LOW);
        digitalWrite(blueLED7,LOW);
        delay(500);
        digitalWrite(blueLED1,HIGH);
        digitalWrite(blueLED4,HIGH);
        digitalWrite(blueLED7,HIGH);
        delay(500);
      }
      delay(1500);
      reset();
    }
  } else if (btn2clicked == player && btn5clicked == player && btn8clicked == player) {
    if (player == 1) {
      Serial.println("Hooray! Player X won the game.");
      for(int i = 0; i < 4; i++) {
        digitalWrite(redLED2,LOW);
        digitalWrite(redLED5,LOW);
        digitalWrite(redLED8,LOW);
        delay(500);
        digitalWrite(redLED2,HIGH);
        digitalWrite(redLED5,HIGH);
        digitalWrite(redLED8,HIGH);
        delay(500);
      }
      delay(1500);
      reset();
    } else {
      Serial.println("Hooray! Player 0 won the game.");
      for(int i = 0; i < 4; i++) {
        digitalWrite(blueLED2,LOW);
        digitalWrite(blueLED5,LOW);
        digitalWrite(blueLED8,LOW);
        delay(500);
        digitalWrite(blueLED2,HIGH);
        digitalWrite(blueLED5,HIGH);
        digitalWrite(blueLED8,HIGH);
        delay(500);
      }
      delay(1500);
      reset();
    }
  } else if (btn3clicked == player && btn6clicked == player && btn9clicked == player) {
    if (player == 1) {
      Serial.println("Hooray! Player X won the game.");
      for(int i = 0; i < 4; i++) {
        digitalWrite(redLED3,LOW);
        digitalWrite(redLED6,LOW);
        digitalWrite(redLED9,LOW);
        delay(500);
        digitalWrite(redLED3,HIGH);
        digitalWrite(redLED6,HIGH);
        digitalWrite(redLED9,HIGH);
        delay(500);
      }
      delay(1500);
      reset();
    } else {
      Serial.println("Hooray! Player 0 won the game.");
      for(int i = 0; i < 4; i++) {
        digitalWrite(blueLED3,LOW);
        digitalWrite(blueLED6,LOW);
        digitalWrite(blueLED9,LOW);
        delay(500);
        digitalWrite(blueLED3,HIGH);
        digitalWrite(blueLED6,HIGH);
        digitalWrite(blueLED9,HIGH);
        delay(500);
      }
      delay(1500);
      reset();
    }
  } else if (btn1clicked == player && btn5clicked == player && btn9clicked == player) {
    if (player == 1) {
      Serial.println("Hooray! Player X won the game.");
      for(int i = 0; i < 4; i++) {
        digitalWrite(redLED1,LOW);
        digitalWrite(redLED5,LOW);
        digitalWrite(redLED9,LOW);
        delay(500);
        digitalWrite(redLED1,HIGH);
        digitalWrite(redLED5,HIGH);
        digitalWrite(redLED9,HIGH);
        delay(500);
      }
      delay(1500);
      reset();
    } else {
      Serial.println("Hooray! Player 0 won the game.");
      for(int i = 0; i < 4; i++) {
        digitalWrite(blueLED1,LOW);
        digitalWrite(blueLED5,LOW);
        digitalWrite(blueLED9,LOW);
        delay(500);
        digitalWrite(blueLED1,HIGH);
        digitalWrite(blueLED5,HIGH);
        digitalWrite(blueLED9,HIGH);
        delay(500);
      }
      delay(1500);
      reset();
    }
  } else if (btn3clicked == player && btn5clicked == player && btn7clicked == player) {
    if (player == 1) {
      Serial.println("Hooray! Player X won the game.");
      for(int i = 0; i < 4; i++) {
        digitalWrite(redLED3,LOW);
        digitalWrite(redLED5,LOW);
        digitalWrite(redLED7,LOW);
        delay(500);
        digitalWrite(redLED3,HIGH);
        digitalWrite(redLED5,HIGH);
        digitalWrite(redLED7,HIGH);
        delay(500);
      }
      delay(1500);
      reset();
    } else {
      Serial.println("Hooray! Player 0 won the game.");
      for(int i = 0; i < 4; i++) {
        digitalWrite(blueLED3,LOW);
        digitalWrite(blueLED5,LOW);
        digitalWrite(blueLED7,LOW);
        delay(500);
        digitalWrite(blueLED3,HIGH);
        digitalWrite(blueLED5,HIGH);
        digitalWrite(blueLED7,HIGH);
        delay(500);
      }
      delay(1500);
      reset();
    }
  } else if (turn == 9) {
    for(int i = 0; i < 4; i++) {
        digitalWrite(blueLED1,LOW);
        digitalWrite(blueLED2,LOW);
        digitalWrite(blueLED3,LOW);
        digitalWrite(blueLED4,LOW);
        digitalWrite(blueLED5,LOW);
        digitalWrite(blueLED6,LOW);
        digitalWrite(blueLED7,LOW);
        digitalWrite(blueLED8,LOW);
        digitalWrite(blueLED9,LOW);
        digitalWrite(redLED1,HIGH);
        digitalWrite(redLED2,HIGH);
        digitalWrite(redLED3,HIGH);
        digitalWrite(redLED4,HIGH);
        digitalWrite(redLED5,HIGH);
        digitalWrite(redLED6,HIGH);
        digitalWrite(redLED7,HIGH);
        digitalWrite(redLED8,HIGH);
        digitalWrite(redLED9,HIGH);
        delay(500);
        digitalWrite(blueLED1,HIGH);
        digitalWrite(blueLED2,HIGH);
        digitalWrite(blueLED3,HIGH);
        digitalWrite(blueLED4,HIGH);
        digitalWrite(blueLED5,HIGH);
        digitalWrite(blueLED6,HIGH);
        digitalWrite(blueLED7,HIGH);
        digitalWrite(blueLED8,HIGH);
        digitalWrite(blueLED9,HIGH);
        digitalWrite(redLED1,LOW);
        digitalWrite(redLED2,LOW);
        digitalWrite(redLED3,LOW);
        digitalWrite(redLED4,LOW);
        digitalWrite(redLED5,LOW);
        digitalWrite(redLED6,LOW);
        digitalWrite(redLED7,LOW);
        digitalWrite(redLED8,LOW);
        digitalWrite(redLED9,LOW);
        delay(500);
      }
      reset();
  }
}

void reset() {
  digitalWrite(redLED1,LOW);
  digitalWrite(redLED2,LOW);
  digitalWrite(redLED3,LOW);
  digitalWrite(redLED4,LOW);
  digitalWrite(redLED5,LOW);
  digitalWrite(redLED6,LOW);
  digitalWrite(redLED7,LOW);
  digitalWrite(redLED8,LOW);
  digitalWrite(redLED9,LOW);
  digitalWrite(blueLED1,LOW);
  digitalWrite(blueLED2,LOW);
  digitalWrite(blueLED3,LOW);
  digitalWrite(blueLED4,LOW);
  digitalWrite(blueLED5,LOW);
  digitalWrite(blueLED6,LOW);
  digitalWrite(blueLED7,LOW);
  digitalWrite(blueLED8,LOW);
  digitalWrite(blueLED9,LOW);
  btn1clicked = 0;
  btn2clicked = 0;
  btn3clicked = 0;
  btn4clicked = 0;
  btn5clicked = 0;
  btn6clicked = 0;
  btn7clicked = 0;
  btn8clicked = 0;
  btn9clicked = 0;
  turn = 0;
}


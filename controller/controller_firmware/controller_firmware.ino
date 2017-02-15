bool is_down = true;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_D0, INPUT_PULLUP);
  pinMode(PIN_D1, INPUT_PULLUP);
  pinMode(PIN_D2, OUTPUT);
  pinMode(PIN_D3, OUTPUT);
  pinMode(PIN_D4, INPUT_PULLUP);
  pinMode(PIN_D5, INPUT_PULLUP);
  pinMode(PIN_D6, INPUT_PULLUP);
  pinMode(PIN_D7, INPUT_PULLUP);
  pinMode(PIN_E0, INPUT_PULLUP);
  pinMode(PIN_E1, INPUT_PULLUP);
  pinMode(PIN_C0, INPUT_PULLUP);
  pinMode(PIN_C1, INPUT_PULLUP);
  pinMode(PIN_C2, INPUT_PULLUP);
  pinMode(PIN_C3, INPUT_PULLUP);
  pinMode(PIN_C4, INPUT_PULLUP);
  pinMode(PIN_C5, INPUT_PULLUP);
  pinMode(PIN_C6, INPUT_PULLUP);
  pinMode(PIN_C7, INPUT_PULLUP);
  pinMode(PIN_B7, INPUT_PULLUP);
  pinMode(PIN_B6, INPUT_PULLUP);
  pinMode(PIN_B5, INPUT_PULLUP);
  pinMode(PIN_B4, INPUT_PULLUP);
  pinMode(PIN_B3, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

  /////////////////////////////////////////////////////
  //Check if we are in keyboard mode, or joystick mode
  //
  //PIN_B3 high -> keyboard
  //PIN_B3 low -> joystick
  //
  ////////////////////////////////////////////////////
  bool is_keyboard = digitalRead(PIN_B3);


  ///////////////////////////////////////////////////
  //
  //Player 1 Controlls
  //
  ///////////////////////////////////////////////////
  //Player 1 Controller Up
  if (!digitalRead(PIN_B7)) {
    Keyboard.press(KEY_UP);
  } else {
    Keyboard.release(KEY_UP);
  }
  //Player 1 Controller Down
  if (!digitalRead(PIN_D0)) {
    Keyboard.press(KEY_DOWN);
  } else {
    Keyboard.release(KEY_DOWN);
  }
  //Player 1 Controller Left
  if (!digitalRead(PIN_D1)) {
    Keyboard.press(KEY_LEFT);
  } else {
    Keyboard.release(KEY_LEFT);
  }
  //Player 1 Controller Right
  if (!digitalRead(PIN_D2)) {
    Keyboard.press(KEY_RIGHT);
  } else {
    Keyboard.release(KEY_RIGHT);
  }
  //Player 1 Fire 1
  if (!digitalRead(PIN_D4)) {
    Keyboard.press(KEY_LEFT_CTRL);
  } else {
    Keyboard.release(KEY_LEFT_CTRL);
  }
  //Player 1 Fire 2
  if (!digitalRead(PIN_D5)) {
    Keyboard.press(KEY_LEFT_ALT);
  } else {
    Keyboard.release(KEY_LEFT_ALT);
  }
  //Player 1 Fire 3
  if (!digitalRead(PIN_D6)) {
    Keyboard.press(KEY_SPACE);
  } else {
    Keyboard.release(KEY_SPACE);
  }
  //Player 1 Fire 4
  if (!digitalRead(PIN_D7)) {
    Keyboard.press(KEY_LEFT_SHIFT);
  } else {
    Keyboard.release(KEY_LEFT_SHIFT);
  }
  //Player 1 Fire 5
  if (!digitalRead(PIN_E0)) {
    Keyboard.press(KEY_Z);
  } else {
    Keyboard.release(KEY_Z);
  }
  //Player 1 Fire 6
  if (!digitalRead(PIN_E1)) {
    Keyboard.press(KEY_X);
  } else {
    Keyboard.release(KEY_X);
  }

  ///////////////////////////////////////////////////
  //
  //Player 2 Controlls
  //
  ///////////////////////////////////////////////////

  //Player 2 Controller Up
  if (!digitalRead(PIN_C0)) {
    Keyboard.press(KEY_R);
  } else {
    Keyboard.release(KEY_R);
  }
  //Player 2 Controller Down
  if (!digitalRead(PIN_C1)) {
    Keyboard.press(KEY_F);
  } else {
    Keyboard.release(KEY_F);
  }
  //Player 2 Controller Left
  if (!digitalRead(PIN_C2)) {
    Keyboard.press(KEY_G);
  } else {
    Keyboard.release(KEY_G);
  }
  //Player 2 Controller Right
  if (!digitalRead(PIN_C3)) {
    Keyboard.press(KEY_D);
  } else {
    Keyboard.release(KEY_D);
  }
  //Player 2 Fire 1
  if (!digitalRead(PIN_C4)) {
    Keyboard.press(KEY_A);
  } else {
    Keyboard.release(KEY_A);
  }
  //Player 2 Fire 2
  if (!digitalRead(PIN_C5)) {
    Keyboard.press(KEY_S);
  } else {
    Keyboard.release(KEY_S);
  }
  //Player 2 Fire 3
  if (!digitalRead(PIN_C6)) {
    Keyboard.press(KEY_Q);
  } else {
    Keyboard.release(KEY_Q);
  }
  //Player 2 Fire 4
  if (!digitalRead(PIN_C7)) {
    Keyboard.press(KEY_W);
  } else {
    Keyboard.release(KEY_W);
  }
  //Player 2 Fire 5
  if (!digitalRead(PIN_B6)) {
    Keyboard.press(KEY_E);
  } else {
    Keyboard.release(KEY_E);
  }
  //Player 2 Fire 6
  if (!digitalRead(PIN_B5)) {
    Keyboard.press(KEY_T);
  } else {
    Keyboard.release(KEY_T);
  }

  ///////////////////////////////////////////////////
  //
  //Service Controlls
  //
  ///////////////////////////////////////////////////


  //Player 1 Start
  if (!digitalRead(PIN_B4)) {
    Keyboard.press(KEY_1);
  } else {
    Keyboard.release(KEY_1);
  }
  
  //PLayer 2 Start
  if (!digitalRead(PIN_B3)) {
    Keyboard.press(KEY_2); 
  } else {
    Keyboard.release(KEY_2);
  }

  //Quit
  if (!digitalRead(PIN_B2)) {
    Keyboard.press(KEY_ESC);
  } else {
    Keyboard.release(KEY_ESC);
  }
  
  delay(100);
}

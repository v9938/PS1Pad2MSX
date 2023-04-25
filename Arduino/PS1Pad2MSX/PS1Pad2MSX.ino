////////////////////////////////////////////////////////////////////////
//
// PSX Controller to MSX Joystick Sample
// Copyright 2023 @V9938
//	
//	23/01/20 V0.1		1st version
//
// This program requires "PlayStation 1/2 joypads library for Arduino IDE".
// https://domisan.sakura.ne.jp/article/arduino_psxpad/arduino_psxpad.html
//
////////////////////////////////////////////////////////////////////////

#include <PSXPad.h>

byte lbAttPinNos[] = {2};
PSXPad_KeyState_t tKeyState;

void setup() {
//  Serial.begin(115200);
  PSXPads.begin(1, lbAttPinNos);
  pinMode(4, OUTPUT);					// Digital4 => MSX JOYSTICK PIN1 [UP]
  pinMode(5, OUTPUT);					// Digital5 => MSX JOYSTICK PIN2 [DOWN]
  pinMode(6, OUTPUT);					// Digital6 => MSX JOYSTICK PIN3 [LEFT]
  pinMode(7, OUTPUT);					// Digital7 => MSX JOYSTICK PIN4 [RIGHT]
  pinMode(8, OUTPUT);					// Digital8 => MSX JOYSTICK PIN6 [TRIG A]
  pinMode(9, OUTPUT);					// Digital9 => MSX JOYSTICK PIN7 [TRIG B]
  
  digitalWrite(4, HIGH);				// Default value [UP]
  digitalWrite(5, HIGH);				// Default value [DOWN]
  digitalWrite(6, HIGH);				// Default value [LEFT]
  digitalWrite(7, HIGH);				// Default value [RIGHT]
  digitalWrite(8, HIGH);				// Default value [TRIG A]
  digitalWrite(9, HIGH);				// Default value [TRIG B]
  
}

void loop() {
  PSXPads.pool();
  PSXPads.lpcPads[0]->getKeyState(&tKeyState);
//  if(tKeyState.bSel) Serial.print("Sel ");
//  if(tKeyState.bL3) Serial.print("L3 ");
//  if(tKeyState.bR3) Serial.print("R3 ");
//  if(tKeyState.bStt) Serial.print("Stt ");
//  if(tKeyState.bU) Serial.print("U ");
//  if(tKeyState.bR) Serial.print("R ");
//  if(tKeyState.bD) Serial.print("D ");
//  if(tKeyState.bL) Serial.print("L ");
//  if(tKeyState.bL2) Serial.print("L2 ");
//  if(tKeyState.bR2) Serial.print("R2 ");
//  if(tKeyState.bL1) Serial.print("L1 ");
//  if(tKeyState.bR1) Serial.print("R1 ");
//  if(tKeyState.bTri) Serial.print("Tri ");
//  if(tKeyState.bCir) Serial.print("Cir ");
//  if(tKeyState.bCrs) Serial.print("Crs ");
//  if(tKeyState.bSqr) Serial.print("Sqr ");
//  Serial.print("\r\n");


// PSX data to MSX Controller
  if(tKeyState.bU)		digitalWrite(4, LOW); else digitalWrite(4, HIGH);	// [UP]
  if(tKeyState.bD)		digitalWrite(5, LOW); else digitalWrite(5, HIGH);	// [DOWN]
  if(tKeyState.bL)		digitalWrite(6, LOW); else digitalWrite(6, HIGH);	// [LEFT]
  if(tKeyState.bR)		digitalWrite(7, LOW); else digitalWrite(7, HIGH);	// [RIGHT]

  if(tKeyState.bCrs) 	digitalWrite(8, LOW); else digitalWrite(8, HIGH);	// [TRIG A]
  if(tKeyState.bSqr) 	digitalWrite(9, LOW); else digitalWrite(9, HIGH);	// [TRIG B]

}

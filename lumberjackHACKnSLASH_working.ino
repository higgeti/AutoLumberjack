#include <Keyboard.h>
char left = KEY_LEFT_ARROW;
char right = KEY_RIGHT_ARROW;
int analogPinl = A1;
int analogPinr = A0;
int vall = 0;
int valr = 0;
void setup() {

  
 Keyboard.begin();
}

void loop() {
     Keyboard.releaseAll();
  while (digitalRead(2) == HIGH) {
    // do nothing until pin 2 goes low
    delay(500);
  }

  vall = analogRead(analogPinl);
  delay(10);
  valr = analogRead(analogPinr);
  delay(10);
  // new document:
  if(vall > 600){
  Keyboard.press(left);
   Keyboard.releaseAll();
   delay(30);
   Keyboard.press(left);
   Keyboard.releaseAll();
  delay(100);
  }
  if(valr > 400){
      Keyboard.press(right);
   Keyboard.releaseAll();
   delay(30);
   Keyboard.press(right);
   Keyboard.releaseAll();
  delay(100);
  }
  
  delay(140);

}

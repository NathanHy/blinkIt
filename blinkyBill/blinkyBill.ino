//code goes in here
#include "src/blink.h"
#define LEDPin 4

void setup(){
  pinMode(LEDPin, OUTPUT);
}

void loop(){
  blinkIt(LEDPin);
}

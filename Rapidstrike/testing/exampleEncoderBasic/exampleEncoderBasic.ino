/* Encoder Library - Basic Example
 * http://www.pjrc.com/teensy/td_libs_Encoder.html
 *
 * This example code is in the public domain.
 */
//#define ENCODER_OPTIMIZE_INTERRUPTS
#include <Encoder.h>

int timer =0;
int prevTimer=0;
int deltay=25;

// Change these two numbers to the pins connected to your encoder.
//   Best Performance: both pins have interrupt capability
//   Good Performance: only the first pin has interrupt capability
//   Low Performance:  neither pin has interrupt capability
Encoder myEnc(2, 3);
//   avoid using pins with LEDs attached

void setup() {
  Serial.begin(9600);
  Serial.println("Basic Encoder Test:");
}

long oldPosition  = -999;

void loop() {
  timer = millis();
  long newPosition = myEnc.read();
  if ((newPosition != oldPosition) && (timer-prevTimer >= deltay)) {
  //  if (newPosition != oldPosition) {
    oldPosition = newPosition;
    prevTimer = timer;
    Serial.println(newPosition);
    //Serial.print(' ');
  }
}

/* This was the very first test of the Arduino, before we realized that LEDs probably aren't advanced enough to clearly vary their brightness sinusoidely*/

int led = 9;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is initially

void setup() {
    // declare pin 9 to be an output:
     pinMode(led, OUTPUT);
}

   
// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:
  analogWrite(led, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + sin(0.2616666667);

  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}


  // reverse the direction of the fading at the ends of the fade:
//   if (brightness <= 0 || brightness >= (2pi)) {
//     fadeAmount = -fadeAmount;
//   }

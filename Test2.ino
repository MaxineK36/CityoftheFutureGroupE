/* This was our first truly successful test of the Arduino, where we got the light to turn on for one second, then off for two (on loop)*/


int led = 9;           // the PWM pin the LED is attached to
int brightness = 255;
// int posneg = -1;
  // how bright the LED is initially
// int fadeAmount = 5;    // how many points to fade the LED by

void setup() {
    // declare pin 9 to be an output:
     pinMode(led, OUTPUT);
}

   
// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:
  brightness = 255;
  analogWrite(led, brightness);
  delay(1000);
  brightness = 0;
  analogWrite(led, brightness);
  delay (2000);
 
}


  // reverse the direction of the fading at the ends of the fade:
//   if (brightness <= 0 || brightness >= (2pi)) {
//     fadeAmount = -fadeAmount;
//   }

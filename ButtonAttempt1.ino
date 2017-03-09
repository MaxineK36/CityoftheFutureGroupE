/* This is the first time we tried to use a button (it didn't work). */

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 4;
int brightness; //= 255;
int buttonPin = 2;

bool buttonState;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  if (buttonState == HIGH){
    brightness = 255;
    analogWrite(led, brightness); //set brightness to brightness
    delay(500);
    // brightness = 0;
    // analogWrite(led, brightness); //set brightness to brightness
    // delay(2000);
  }
  else{
    brightness = 0;
    analogWrite(led, brightness); //set brightness to brightness
    delay(500);
  }
  
}

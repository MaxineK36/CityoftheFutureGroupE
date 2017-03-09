/*
This is one of the first times we used the arduino, when we attempted to slowly adjust the brightness of an LED using code
*/
int led = 4;
int brightness = 0;
int buttonPin = 2;
int posneg = 1;
 

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  delay(100);
  brightness = brightness + (posneg*5);
  digitalWrite(led, brightness);
  Serial.println(brightness);
  if (brightness>=255){
    posneg = -1;
  }
  else if (brightness<=0){
    posneg = 1;
  }
  
  
}

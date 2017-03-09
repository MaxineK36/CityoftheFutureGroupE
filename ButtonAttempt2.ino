/* This was our second attempt at using a button; this one actually worked, and we got the button functioning.*/


//Constants
const int buttonPin = 8;     
const int ledPin =  9;     

//Variables
int buttonState = 0;
int flag=0;
int test1=5;
int brightness = 255;

void setup() {
  //Input or output?
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);      
  pinMode(buttonPin, INPUT);   
}

void loop(){
  //Read button state (pressed or not pressed?)
buttonState = digitalRead(buttonPin);
  Serial.println(test1);

  //If button pressed...
  if (buttonState == HIGH) { 
    //...ones, turn led on!
    if (flag == 0){
      analogWrite(ledPin, 255);
      flag=1; //change flag variable
      test1=1;
    }
    //...twice, turn led off!
    else if ( flag == 1){
      analogWrite(ledPin, 0);
      flag=0; //change flag variable again 
      test1=2;
    }    
  }
  else if (buttonState == LOW){
  test1 = 3;
  }
  delay(200); //Small delay

}



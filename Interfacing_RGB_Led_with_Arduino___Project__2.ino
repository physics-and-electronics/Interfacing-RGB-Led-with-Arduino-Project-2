/*
-----------------------------------------------------------
Website: www.physicsandelectronics.com
Refer Article for in-Depth Explanation about this Project & Explore More

Main Project : RGB LED interfacing with Arduino
Instagram : @physics_and_electronics
Youtube Channel : Physics And Electronics - Saurabh Salvi

**Main Code for the Project**
-----------------------------------------------------------
*/

//Declaring pins for each colour on RGB led (All are PWM pins)
int red = 5;      
int green = 6;
int blue = 9;

void setup() {
  // put your setup code here, to run once:
  // All pins are set as OUTPUT
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//Blink Red Colour once
ledColour(255, 0, 0);  //Keeping only RED colour for 1000ms
delay(1000);
ledColour(0, 0,0);      //Keeping LED off for 800ms (For a pause)
delay(800);

//Blinking the Green Colour 4 times
for(int i=0; i<=3; i++){
  ledColour(0, 255, 0);
  delay(1000);
  ledColour(0, 0,0);
  delay(200);
}
ledColour(0, 0, 0);
delay(800);

//Blinking the Blue Colour 3 times
for(int i=0; i<=2; i++){
  ledColour(0, 0, 255);
  delay(1000);
  ledColour(0, 0,0);
  delay(200);
}

//Keeping White COlour
ledColour(0, 0, 0);
delay(1000);
ledColour(255, 255, 255);
delay(5000);
}

//defining a function for colour selection on RGB Led 
void ledColour(int redVal, int greenVal, int blueVal){

  analogWrite(red, redVal); 
  analogWrite(green, greenVal);
  analogWrite(blue, blueVal);

}

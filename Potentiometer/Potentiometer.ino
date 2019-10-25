#include <Wire.h>
#include <LiquidCrystal_I2C.h> 
LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display.  
// If 0x27 doesn't work, try 0x3F.
//The LED can only be put into a PWM pin.
int potPin = 2;
int ledPin = 9;
int vallcd = 0; //The value of the LCD, 0-1023
int varled = 0; //The value of the LED, 0-255

void setup() {
  pinMode(ledPin, OUTPUT);  // declare the ledPin as an output
  lcd.begin (16,2); // for 16 x 2 LCD module
  lcd.init();
  lcd.backlight();
  lcd.setBacklight(HIGH);
  Serial.begin(9600);
}

void loop() {
  vallcd = analogRead(potPin);    // read the value from the sensor 
  varled = vallcd/4;  //The LED value is about 4 times as small as the LCD value
  analogWrite(ledPin, varled);  //Sends the value to the LED. The value of LED is how bright the pin will read it
  lcd.print(varled); //Prints the LED value, how bright it is
  delay(200); 
}
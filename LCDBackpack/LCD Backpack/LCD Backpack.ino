#include <Wire.h>
#include <LiquidCrystal_I2C.h> 
LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display.  
// If 0x27 doesn't work, try 0x3F.
int count = 0;
int buttonState;
const int buttonPin = 2;
int state = HIGH;      // the current state of the output pin
int previous = LOW;    // the previous reading from the input pin

  void setup(){
   lcd.begin (16,2); // for 16 x 2 LCD module
  lcd.init();
  lcd.backlight();
  lcd.setBacklight(HIGH);
  lcd.setCursor(0, 0);
  lcd.print("HELLO WORLD!");
 pinMode(buttonPin, INPUT);
  }
  void loop() {
 
    buttonState = digitalRead(buttonPin);
 
     if (buttonState == HIGH && previous == LOW) {
      if (state == HIGH){
        count = count + 1;
        delay(300);
      }
      else
        count = count;
     }

     if(buttonState == LOW) {
      count = count;
     }

   previous = buttonState;
 lcd.setCursor(0, 1);
 lcd.print(count);
}
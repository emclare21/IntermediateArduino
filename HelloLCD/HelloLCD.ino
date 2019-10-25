#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12); // Those are the pins for RS, EN, DB4, DB5, DB6, DB7

void setup(){
	lcd.begin(16, 2);	//16 collumns, and 2 rows
}

void loop(){
	lcd.setCursor(0,0);
	lcd.print("Hello world!"); //prints Hello World
	lcd.setCursor(0,1); //Goes to the second row
	lcd.print(millis() / 1000); //prints the number of seconds
}



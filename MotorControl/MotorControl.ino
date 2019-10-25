int potPin = 2;
int motorPin = 9;
int valPot = 0;
int varMotor = 0;

void setup() {
	pinMode(motorPin, OUTPUT);
	Serial.begin(9600);

}

void loop() {
	valPot = analogRead(potPin);
	varMotor = valPot/4;
	Serial.println(varMotor);
	analogWrite(motorPin, varMotor);
}

/*
Delete the "Arduino15" folder (Windows path : "%appdata%..\Local\Arduino15")

Start Sublime, then in the Arduino menu : "Install Platform" > "Refresh"
	 (this will recreate the "Arduino15" folder)

Then : "Install Platform" > "arduino" >"Arduino AVR Boards" > pick latest version
	Wait for download/installation and compilation will work again !
*/


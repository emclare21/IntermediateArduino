int photoPin = 5;
int ledPin = 8;
int photoState = 0;

void setup(){
	Serial.begin(9600);
pinMode(photoPin, INPUT_PULLUP);
pinMode (ledPin, OUTPUT);
}

void loop(){
	photoState = analogRead(photoPin);
	if (photoState > 200){
		Serial.println("no");
		digitalWrite(ledPin, LOW);
		delay(100);
	}
	if (photoState < 200) {
		Serial.println("yes");
		digitalWrite(ledPin, HIGH);
		delay(100);
	}
}
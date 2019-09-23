int var = 0;
int fade = 5;
int pin = 9;
int star = 15;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
//	if (var = 0);
  	analogWrite(9, var);   // turn the LED on (HIGH is the voltage level)

  	var = var + fade;

  	for  (int n = 0; n < var/10; n++){   //for loop: starting, ending, interval.
  		Serial.print("*");
  	}
  	Serial.println("*");





	if (var == 255 or var == 0){
		fade = -fade;
	}


	delay(100);
}
//Hbridge Dual Motor Control
const int EN1=9; //Half Bridge 1 Enable
const int EN2=10; //Half Bridge 1 Enable


const int MC1=3; //Motor Control 1
const int MC2=2; //Motor Control 2

const int MC3=4; //Motor Control 1
const int MC4=5; //Motor Control 2

const int POT=0; //POT on Analog Pin 0 (Potentiometer)

int val = 0; 		//For storing the reading from the POT
int velocity = 0;	//For storing the desired velocity (from 0-255)

void setup()
{
	pinMode(EN1, OUTPUT);
	pinMode(MC1, OUTPUT);
	pinMode(MC2, OUTPUT);
	brake(); //Initialize with Motor stoped

	pinMode(EN2, OUTPUT);
	pinMode(MC3, OUTPUT);
	pinMode(MC4, OUTPUT);
	brake(); //Initialize with Motor stoped
}

void loop()
{
	val = analogRead(POT);
	//go forward
	if(val > 562){
	    velocity = map(val, 563, 1023, 0, 255);
	    forward(velocity);
	}
	//go backward
	else if(val < 462){
		velocity = map(val, 461, 0, 0, 255);
		reverse(velocity);
	}
	//brake
	else{
		brake();
	}
}

//Motor goes forward at given rate (from 0-255)
void forward(int rate)
{
	Serial.println(rate);

	digitalWrite(EN1, LOW);
	digitalWrite(MC1, HIGH);
	digitalWrite(MC2, LOW);
	analogWrite(EN1, rate);

	digitalWrite(EN2, LOW);
	digitalWrite(MC3, HIGH);
	digitalWrite(MC4, LOW);
	analogWrite(EN2, rate);
}

//Motor goes backward at given rate (from 0-255)
void reverse(int rate)
{
	Serial.println(rate);

	digitalWrite(EN1, LOW);
	digitalWrite(MC1, LOW);
	digitalWrite(MC2, HIGH);
	analogWrite(EN1, rate);

	digitalWrite(EN2, LOW);
	digitalWrite(MC3, LOW);
	digitalWrite(MC4, HIGH);
	analogWrite(EN2, rate);

}

//Stops Motor
void brake()
{
	
	digitalWrite(EN1, LOW);
	digitalWrite(MC1, LOW);
	digitalWrite(MC2, LOW);
	analogWrite(EN1, HIGH);

	digitalWrite(EN2, LOW);
	digitalWrite(MC3, LOW);
	digitalWrite(MC4, LOW);
	analogWrite(EN2, HIGH);
}









//Hbridge Motor Control
const int EN1=9; //Half Bridge 1 Enable
const int EN2=10; //Half Bridge 1 Enable


const int MC1=3; //Motor Control 1
const int MC2=2; //Motor Control 2

const int MC3=4; //Motor Control 1
const int MC4=5; //Motor Control 2

const int POT=0; //POT on Analog Pin 0 (Potentiometer)

int val = 0; 		//For storing the reading from the POT
int velocity = 0;	//For storing the desired velocity (from 0-255)

void setup()
{
	pinMode(EN1, OUTPUT);
	pinMode(MC1, OUTPUT);
	pinMode(MC2, OUTPUT);
	brake(); //Initialize with Motor stoped

	pinMode(EN2, OUTPUT);
	pinMode(MC3, OUTPUT);
	pinMode(MC4, OUTPUT);
	brake(); //Initialize with Motor stoped
}

void loop()
{
	val = analogRead(POT);
	//go forward
	if(val > 562){
	    velocity = map(val, 563, 1023, 0, 255);
	    forward(velocity);
	}
	//go backward
	else if(val < 462){
		velocity = map(val, 461, 0, 0, 255);
		reverse(velocity);
	}
	//brake
	else{
		brake();
	}
}

//Motor goes forward at given rate (from 0-255)
void forward(int rate)
{
	Serial.println(rate);

	digitalWrite(EN1, LOW);
	digitalWrite(MC1, HIGH);
	digitalWrite(MC2, LOW);
	analogWrite(EN1, rate);

	digitalWrite(EN2, LOW);
	digitalWrite(MC3, HIGH);
	digitalWrite(MC4, LOW);
	analogWrite(EN2, rate);
}

//Motor goes backward at given rate (from 0-255)
void reverse(int rate)
{
	Serial.println(rate);

	digitalWrite(EN1, LOW);
	digitalWrite(MC1, LOW);
	digitalWrite(MC2, HIGH);
	analogWrite(EN1, rate);

	digitalWrite(EN2, HIGH);
	digitalWrite(MC3, LOW);
	digitalWrite(MC4, HIGH);
	analogWrite(EN2, rate);

}

//Stops Motor
void brake()
{
	
	digitalWrite(EN1, LOW);
	digitalWrite(MC1, LOW);
	digitalWrite(MC2, LOW);
	analogWrite(EN1, HIGH);

	digitalWrite(EN2, LOW);
	digitalWrite(MC3, LOW);
	digitalWrite(MC4, LOW);
	analogWrite(EN2, HIGH);
}











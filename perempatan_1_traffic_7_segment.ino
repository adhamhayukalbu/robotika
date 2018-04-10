int segA = 2;
int segB = 3;
int segC = 4;
int segD = 5;
int segE = 6;
int segF = 7;
int segG = 8;
int DP = 9;
int ledmerah = 10;
int ledkuning = 11;
int ledhijau = 12;

void setup(){
  pinMode(ledmerah, OUTPUT); 
  pinMode(ledhijau, OUTPUT);
  pinMode(ledkuning, OUTPUT);
  for (int digit=9;  digit>=0; digit--){
    pinMode(digit, OUTPUT);
  }
  for (int digitoff=9;  digitoff>=0; digitoff--){
    pinMode(digitoff, OUTPUT);
  }
}
	
	void loop()
	{
		for (int digit = 9;  digit >= 0; digit--)
		{
			
			writeDigit(digit);
			delay(1000);
			digitalWrite(ledmerah, HIGH);
			digitalWrite(ledhijau, LOW);
			
			
		}
		
		for (int digitoff = 5;  digitoff >= 0; digitoff--)
		{
			digitalWrite(ledhijau, HIGH);
			digitalWrite(ledmerah, LOW);
			writeDigitOff(digitoff);
			delay(1000);
			
			
		}
	}
	

	void writeDigit(int digit)
	{
		switch(digit)
		{
			case 0:
				digitalWrite(segA, HIGH);
				digitalWrite(segB, HIGH);
				digitalWrite(segC, HIGH);
				digitalWrite(segD, HIGH);
				digitalWrite(segE, HIGH);
				digitalWrite(segF, HIGH);
				digitalWrite(segG, LOW);
				break;
			case 1:
				digitalWrite(segA, LOW);
				digitalWrite(segB, HIGH);
				digitalWrite(segC, HIGH);
				digitalWrite(segD, LOW);
				digitalWrite(segE, LOW);
				digitalWrite(segF, LOW);
				digitalWrite(segG, LOW);
				break;
			case 2:
				digitalWrite(segA, HIGH);
				digitalWrite(segB, HIGH);
				digitalWrite(segC, LOW);
				digitalWrite(segD, HIGH);
				digitalWrite(segE, HIGH);
				digitalWrite(segF, LOW);
				digitalWrite(segG, HIGH);
				break;
			case 3:
				digitalWrite(segA, HIGH);
				digitalWrite(segB, HIGH);
				digitalWrite(segC, HIGH);
				digitalWrite(segD, HIGH);
				digitalWrite(segE, LOW);
				digitalWrite(segF, LOW);
				digitalWrite(segG, HIGH);
				break;
			case 4:
				digitalWrite(segA, LOW);
				digitalWrite(segB, HIGH);
				digitalWrite(segC, HIGH);
				digitalWrite(segD, LOW);
				digitalWrite(segE, LOW);
				digitalWrite(segF, HIGH);
				digitalWrite(segG, HIGH);
				break;
			case 5:
				digitalWrite(segA, HIGH);
				digitalWrite(segB, LOW);
				digitalWrite(segC, HIGH);
				digitalWrite(segD, HIGH);
				digitalWrite(segE, LOW);
				digitalWrite(segF, HIGH);
				digitalWrite(segG, HIGH);
				break;
			case 6:
				digitalWrite(segA, HIGH);
				digitalWrite(segB, LOW);
				digitalWrite(segC, HIGH);
				digitalWrite(segD, HIGH);
				digitalWrite(segE, HIGH);
				digitalWrite(segF, HIGH);
				digitalWrite(segG, HIGH);
				break;
			case 7:
				digitalWrite(segA, HIGH);
				digitalWrite(segB, HIGH);
				digitalWrite(segC, HIGH);
				digitalWrite(segD, LOW);
				digitalWrite(segE, LOW);
				digitalWrite(segF, LOW);
				digitalWrite(segG, LOW);
				break;
			case 8:
				digitalWrite(segA, HIGH);
				digitalWrite(segB, HIGH);
				digitalWrite(segC, HIGH);
				digitalWrite(segD, HIGH);
				digitalWrite(segE, HIGH);
				digitalWrite(segF, HIGH);
				digitalWrite(segG, HIGH);
				break;
			case 9:
				digitalWrite(segA, HIGH);
				digitalWrite(segB, HIGH);
				digitalWrite(segC, HIGH);
				digitalWrite(segD, HIGH);
				digitalWrite(segE, LOW);
				digitalWrite(segF, HIGH);
				digitalWrite(segG, HIGH);
				break;
		}		
	}
	
	void writeDigitOff(int digitoff)
	{
		switch(digitoff)
		{
			case 0:
				digitalWrite(segA, HIGH);
				digitalWrite(segB, HIGH);
				digitalWrite(segC, HIGH);
				digitalWrite(segD, HIGH);
				digitalWrite(segE, HIGH);
				digitalWrite(segF, HIGH);
				digitalWrite(segG, LOW);
				break;
			case 1:
				digitalWrite(segA, LOW);
				digitalWrite(segB, HIGH);
				digitalWrite(segC, HIGH);
				digitalWrite(segD, LOW);
				digitalWrite(segE, LOW);
				digitalWrite(segF, LOW);
				digitalWrite(segG, LOW);
				break;
			case 2:
				digitalWrite(segA, HIGH);
				digitalWrite(segB, HIGH);
				digitalWrite(segC, LOW);
				digitalWrite(segD, HIGH);
				digitalWrite(segE, HIGH);
				digitalWrite(segF, LOW);
				digitalWrite(segG, HIGH);
				break;
			case 3:
				digitalWrite(segA, HIGH);
				digitalWrite(segB, HIGH);
				digitalWrite(segC, HIGH);
				digitalWrite(segD, HIGH);
				digitalWrite(segE, LOW);
				digitalWrite(segF, LOW);
				digitalWrite(segG, HIGH);
				break;
			case 4:
				digitalWrite(segA, LOW);
				digitalWrite(segB, HIGH);
				digitalWrite(segC, HIGH);
				digitalWrite(segD, LOW);
				digitalWrite(segE, LOW);
				digitalWrite(segF, HIGH);
				digitalWrite(segG, HIGH);
				break;
			case 5:
				digitalWrite(segA, HIGH);
				digitalWrite(segB, LOW);
				digitalWrite(segC, HIGH);
				digitalWrite(segD, HIGH);
				digitalWrite(segE, LOW);
				digitalWrite(segF, HIGH);
				digitalWrite(segG, HIGH);
				break;
		}		
	}


#include <L298N.h> 

int pintracker1 = 11;
int pintracker2 = 12;
int pinldr      = 4;

int nilaitracker1 = 0;
int nilaitracker2 = 0;
int nilaildr      = 0;

int in1 = 9; //kanan maju ban kanan in4
int in2 = 8; // kanan mundur in3

int in3 = 7; //kiri mundur in1
int in4 = 6;// kiri maju in2

int enA = 10;
int enB = 5;


void setup()
{
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
}

void loop() {
  nilaitracker1 = digitalRead(pintracker1);
  Serial.print("nilai tracker 1=");
  Serial.println(nilaitracker1);
 
  nilaitracker2 = digitalRead(pintracker2);
  Serial.print("nilai tracker 2=");
  Serial.println(nilaitracker2);
  
  nilaildr = digitalRead(pinldr);
  Serial.print("nilai ldr=");
  Serial.println(nilaildr);
  
  if (nilaitracker1 == 0 && nilaitracker2 == 1 && nilaildr == 1){
    motormaju();
  }
  if (nilaitracker1 == 1 && nilaitracker2 == 1 && nilaildr ==1){
    motorkanan();
  }
  if (nilaitracker1 == 0 && nilaitracker2 == 0 && nilaildr == 1)
  {
     belokkiri(); 
  }
 if (nilaildr == 0) {
    motorstop();
    }
} 

void motormaju()
{
   digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 100);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 100);
}


void motorkanan()
{
   digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 80);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enB, 0);
}


void belokkiri()
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(enA, 0);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW );
  analogWrite(enB, 100);}


void motorstop()
{
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
analogWrite(enA, 0);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);
analogWrite(enB, 0);
}


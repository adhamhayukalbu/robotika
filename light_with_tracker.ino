int sensorPin = 12,
    led = 13;

void setup() {
 Serial.begin(9600);
 pinMode(sensorPin, INPUT);
 pinMode(led, OUTPUT);
}

void loop() {
  int detect = digitalRead(sensorPin);
  if(!detect){ 
   digitalWrite(led, LOW); 
  }else{ 
   digitalWrite(led, HIGH);  
  }
  delay(300);
}
 

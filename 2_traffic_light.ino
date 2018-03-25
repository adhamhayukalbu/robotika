int timer = 5000;
int led_1_pins[] = {
  2, 3, 4
};
int led_2_pins[] = {
  5, 6, 7
};
int led_counts = 3;
int ground_pin = 9;

// the setup routine runs once when you press reset:
void setup() {                
   // initialize the digital pin as an output.  
   for(int p=0; p<led_counts; p++){
       pinMode(led_1_pins[p], OUTPUT); // Set the mode to OUTPUT
       pinMode(led_2_pins[p], OUTPUT);
   }
   pinMode(groud_pin, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
   digitalWrite(led_1_pins[0], 1); // merah simpangan 1 nyala 5 detik
   digitalWrite(led_2_pins[2], 1); // hijau simpangan 2 nyala 5 detik
   delay(timer-1000);
   digitalWrite(led_1_pins[1], 1);
   digitalWrite(led_2_pins[1], 1);    
   delay(timer-4000);

   digitalWrite(led_1_pins[0], 0);
   digitalWrite(led_1_pins[1], 0);
   digitalWrite(led_2_pins[2], 0);
   digitalWrite(led_2_pins[1], 0);

   digitalWrite (led_1_pins[2], 1); // hijau simpangan 1 nyala 5 detik
   digitalWrite(led_2_pins[0], 1); // merah simpangan 2 nyala 5 detik
   delay(timer-1000);
   digitalWrite (led_1_pins[1], 1);
   digitalWrite(led_2_pins[1], 1);
   delay(timer-4000);

   digitalWrite(led_2_pins[2], 0);
   digitalWrite(led_2_pins[1], 0);
   digitalWrite(led_1_pins[0], 0);
   digitalWrite(led_1_pins[1], 0);
}

int timer = 5000;
int led_1_pins[] = {
  1, 2, 3
};
int led_2_pins[] = {
  4, 5, 6
};
int led_counts = 3;

// the setup routine runs once when you press reset:
void setup() {                
   // initialize the digital pin as an output.  
   for(int p=0; p<led_counts; p++){
       pinMode(led_1_pins[p], OUTPUT); // Set the mode to OUTPUT
       pinMode(led_2_pins[p], OUTPUT);
   }
}

// the loop routine runs over and over again forever:
void loop() {
   digitalWrite(led_1_pins[0], 1); // merah simpangan 1 nyala 5 detik
   digitalWrite(led_2_pins[2], 1); // hijau simpangan 2 nyala 5 detik
   delay(timer-1000);
   digitalWrite(led_1_pins[1], 1);
   digitalWrite(led_2_pins[1], 1);    
   delay(timer-4000);
   for(int p=0; p<2; p++){
      digitalWrite (led_1_pins[p], 0); // merah & kuning mati
   }
   for(int p=1; p<2; p++){
      digitalWrite (led_2_pins[p], 0); // hijau & kuning mati
   }
   digitalWrite (led_1_pins[2], 1); // hijau simpangan 1 nyala 5 detik
   digitalWrite(led_1_pins[0], 1); // merah simpangan 2 nyala 5 detik
   delay(timer-1000);
   digitalWrite (led_1_pins[1], 1);
   digitalWrite(led_2_pins[1], 1);
   delay(timer-4000);
   for(int p=0; p<2; p++){
      digitalWrite (led_1_pins[p], 0); // merah & kuning mati
   }
   for(int p=1; p<2; p++){
      digitalWrite (led_2_pins[p], 0); // hijau & kuning mati
   }
}

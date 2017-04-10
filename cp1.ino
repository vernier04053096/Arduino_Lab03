const byte LED = 13;
void setup() {
  
  Serial.begin(9600);
  Serial.println("Hello,");
  Serial.print("\tLED pin is: ");
  Serial.print(LED);
  Serial.print("\nBYE!");
  
}


void loop() {
   float val;
  if( Serial.available() ) {
     val = Serial.read();
     if (val == '1') {
       digitalWrite(LED, HIGH);
       Serial.print("LED ON");
     } else if (val == '0') {
       digitalWrite(LED, LOW);
       Serial.print("LED OFF");
     }
  }
}


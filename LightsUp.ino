// Simple code to fade three LED's in and out.
// Set up to look like a traffic light.
// Although it would be quite confusing if it was.

const int RED = 9; // The pin for the LED
const int YELLOW = 6; // The pin for the 2nd LED.
const int GREEN = 3; // The pin for the 3rd LED.
int i = 0; // We'll use the variable "i" to count up and down.
int j = 0;
int k = 0;
int z = 0;

void setup() {
  pinMode(GREEN, OUTPUT); // Tell Ardudino the LED is an Output.
}

void loop() {
  for (i = 0; i < 255; i++) { // Loop from 0 to 254 (fade in)
    analogWrite(RED, i);  // Set the LED Brightness
    delay(5); // Wait 5 milliseconds because analogWrite
               // is instantaneous and we would
               // not see any change.
  }
  for (j = 0; j < 255; j++) {
    analogWrite(YELLOW, j);
    delay(10); // Wait 10 milliseconds.
  }
  
  for (k = 0; k < 255; k++) {
    analogWrite(GREEN, k);
    delay(15); // Wait 20 milliseconds.
  }
  
  for (i = 255; i > 0; i--) { // Loop from 255 to 1 (fade out)
    analogWrite(RED, i); // Set the LED brightness
    delay(5); // Wait 5 milliseconds because analogWrite
               // is instantaneous and we would
               // not see any change..
  }
  
  for (j = 255; j > 0; j--) {
    analogWrite(YELLOW, j);
    delay(10); // Wait 10 milliseconds.
  }
  
  for (k = 255; k > 0; k--) {
    analogWrite(GREEN, k);
    delay(15); // Wait 20 milliseconds.
  }
}
    
    

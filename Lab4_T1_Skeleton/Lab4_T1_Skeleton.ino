/*Change all the ? in the code to Control the direction of rotation based on whether your selected pin is touched.*/

#define IN1    ?  // Replace the ? with the GPIO pin you selected to connect IN1
#define IN2    ?   // Replace the ? with the GPIO pin you selected to connect IN2
#define TOUCH_PIN ?  // Replace the ? with the GPIO touch pin you selected 
#define THRESHOLD ?   // Replace the ? with the reading when the pin is touched from Lab 3

int touch_reading;

void setup() {
  pinMode(?, ?);  // Set IN1 as an output pin
  pinMode(?, ?);  // Set IN2 as an output pin
  
  pinMode(?, ?); // Set TOUCH_PIN as an output pin
}

void loop() {
  touch_reading = touchRead(?); // Read the touch sensor
  
  /* if TOUCH_PIN is touched, then rotate the shaft in clockwise
     else TOUCH_PIN is not touched, then rotate the shaft in counterclockwise */
  
  if (touch_reading < THRESHOLD){
     digitalWrite(?, ?);
     digitalWrite(?, ?);  
  }else{
     digitalWrite(?, ?);
     digitalWrite(?, ?);  
  }
}

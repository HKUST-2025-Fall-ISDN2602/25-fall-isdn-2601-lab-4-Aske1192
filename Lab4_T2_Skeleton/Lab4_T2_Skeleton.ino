/*Change all the ? in the code to Control the direction of rotation based on whether your selected pin is touched.*/

#define IN1   ？  // Replace the ? with the GPIO pin you selected to connect IN1
#define IN2   ？   // Replace the ? with the GPIO pin you selected to connect IN2
#define A  ？ // Replace the ? with the GPIO pin you selected to connect encoder A
#define B  ？ // Replace the ? with the GPIO pin you selected to connect encoder B


int A_data;
int B_data;

String command;

void setup() {
  Serial.begin(？); //Define baud

  pinMode(？, ？);  // Set IN1 as an output pin
  pinMode(？, ？);  // Set IN2 as an output pin

  pinMode(？, ？);  // Set A as an input pin
  pinMode(？, ？);  // Set B as an input pin

}

void loop() {
   
    if (Serial.available() > 0) {
        command = Serial.readStringUntil('\n'); // Read the incoming command
        command.trim(); // Remove any leading or trailing whitespace
        if (command == "C") {
            // clockwise rotation
            digitalWrite(？, ？);
            digitalWrite(？, ？; 

        } 
        else if (command == "A") { 
            // anticlockwise rotation
            digitalWrite(?, ?);
            digitalWrite(?, ?); 
        }
        }
    // Read values of A and B using digitalRead(Pin)
    A_data=digitalRead(?);
    B_data=digitalRead(?);
    // Plot A B in Serial Plotter
    Serial.print("A:");
    Serial.print(A_data);
    Serial.print(",");
    Serial.print("B:");
    Serial.print(B_data);
    Serial.println("\t"); 
}

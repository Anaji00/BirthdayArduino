int redLEDPin = 9; // Declare redLEDPin and set to pin 9 
int yellowLEDPin = 10; // Declare yellowLEDPin and set to pin 10 
int delaytime = 250; // Declare delaytime and set to 250 
int first = 0;
int second = 0;

void setup() {
  Serial.begin(9600);
  pinMode(redLEDPin, OUTPUT);  // Tell Arduino that redLEDPin is an output pin
  pinMode(yellowLEDPin, OUTPUT);  // Tell Arduino that yellowLEDPin is an output pin
}

void loop() {
  Serial.println("Input the first digit of your age: "); // Prompt User for Input
  while (Serial.available() == 0) {
    // Wait for input
  }
  first = Serial.parseInt();

  
  
  Serial.println("Input the second digit of your age: "); // Prompt User for Input
  while (Serial.available() == 0) {
    // Wait for input
  }
  second = Serial.parseInt();
  delay(5000);

  Serial.println("First Digit of age: ");
  for (int i = 0; i < first; i++) { // Start our for loop
    Serial.println(i + 1);
    digitalWrite(redLEDPin, HIGH); // Turn red LED on
    delay(delaytime); // Leave on for delaytime
    digitalWrite(redLEDPin, LOW); // Turn red LED off
    delay(delaytime); // Leave off for delaytime
  }
  
  Serial.println("Second Digit of age: ");
  for (int i = 0; i < second; i++) { // Start our for loop
    Serial.println(i + 1);
    digitalWrite(yellowLEDPin, HIGH); // Turn yellow LED on
    delay(delaytime); // Leave on for delaytime
    digitalWrite(yellowLEDPin, LOW); // Turn yellow LED off
    delay(delaytime); // Leave off for delaytime
  }
}

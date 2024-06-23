/*
    Project name : ESP8266 Touch Sensor Capacitive Touch Module
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-touch-sensor-capacitive-touch-module
*/

// Define the pin connected to the capacitive touch sensor
const int touchSensorPin = D2; // GPIO pin D2 on NodeMCU

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(touchSensorPin, INPUT); // Set the touch sensor pin as input
}

void loop() {
  // Read the state of the touch sensor
  int touchState = digitalRead(touchSensorPin);

  // Print the touch state to the Serial Monitor
  if (touchState == HIGH) {
    Serial.println("Touch detected!");
  } else {
    Serial.println("No touch detected.");
  }

  delay(500); // Add a small delay to debounce the sensor
}

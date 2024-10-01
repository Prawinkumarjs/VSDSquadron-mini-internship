#include <Arduino.h> // Using Arduino-style syntax

// Define the pin for the gas sensor and buzzer/LED
#define GAS_SENSOR_PIN PD3   // Analog input pin (adjusted to PC4)
#define ALERT_PIN PD6        // Pin for buzzer or LED

// Threshold for gas detection (adjust based on calibration)
#define GAS_THRESHOLD 200

void setup() {
  // Initialize the serial monitor for debugging
  Serial.begin(9600);

  // Set the ALERT_PIN as output
  pinMode(ALERT_PIN, OUTPUT);

  // Initialize the gas sensor pin (optional since it is analog)
  pinMode(GAS_SENSOR_PIN, INPUT);

  Serial.println("Gas detection system initialized...");
}

void loop() {
  // Read the analog value from the gas sensor
  int gasSensorValue = analogRead(GAS_SENSOR_PIN);

  // Debugging: Print the gas sensor value
  Serial.print("Gas Sensor Value: ");
  Serial.println(gasSensorValue);

  // Check if the gas level exceeds the threshold
  if (gasSensorValue > GAS_THRESHOLD) {
    // If gas is detected, activate the alert (buzzer or LED)
    digitalWrite(ALERT_PIN, HIGH);
    Serial.println("Gas Detected! Activating alert...");
  } else {
    // Otherwise, turn off the alert
    digitalWrite(ALERT_PIN, LOW);
  }

  // Small delay to prevent overwhelming the serial output
  delay(500);
}



## Project Overview:
This project implements a **gas detection system** using the **VSDSquadron Mini board**, a RISC-V based SoC development kit. The gas detection system will monitor the air for dangerous gases using a gas sensor. When gas levels exceed a set threshold, a **LED indicator** or **buzzer** is activated to alert the user. This project demonstrates reading analog data from a sensor and controlling GPIO pins using digital logic, which is simulated and built using Arduino IDE.

### Components Required:
1. **VSDSquadron Mini RISC-V board**
2. **MQ-series gas sensor** (e.g., MQ-2 or MQ-135)
3. **1 LED** (or buzzer)
4. **Resistors** (as needed based on the sensor)
5. **Breadboard and jumper wires**
6. **Arduino IDE** for development

### Hardware Connections:
- **Gas Sensor:**
- **VCC** to **5V** pin of VSDSquadron Mini
- **GND** to **GND** pin of VSDSquadron Mini
- **AO** (Analog Output) to **PC4** (analog input pin)
        
- **LED:**
   - **Positive (Anode)** to **PD6**
   - **Negative (Cathode)** to **GND**

### Circuit Connection:
   ```
   MQ Gas Sensor       VSDSquadron Mini
      VCC  -------->  5V
      GND  -------->  GND
      AO   -------->  PC4 (Analog Input)

   LED               VSDSquadron Mini
      +    -------->  PD6 (GPIO Pin for alert)
      -    -------->  GND
   ```

### Truth Table:

For simplicity, this system uses the gas sensor output and a threshold value to determine when to trigger the LED:

   | Gas Sensor Value | LED Status (Alert) |
   |------------------|--------------------|
   | Below Threshold   | Off                |
   | Above Threshold   | On                 |

### Program:

```cpp
#include <Arduino.h> // Using Arduino-style syntax

// Define the pin for the gas sensor and buzzer/LED
#define GAS_SENSOR_PIN PC4   // Analog input pin (adjusted to PC4)
#define ALERT_PIN PD6        // Pin for buzzer or LED

// Threshold for gas detection (adjust based on calibration)
#define GAS_THRESHOLD 300

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
      } 
   else {
         // Otherwise, turn off the alert
         digitalWrite(ALERT_PIN, LOW);
   }

   // Small delay to prevent overwhelming the serial output
   delay(500);
   }

```
### Conclusion:
This project demonstrates the integration of an **MQ gas sensor** with the **VSDSquadron Mini board** to detect gases and alert the user through an LED indicator. This setup showcases how the RISC-V architecture and embedded systems handle real-world sensor data and control outputs in a practical application.

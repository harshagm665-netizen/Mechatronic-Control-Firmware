#include <Arduino.h>
#include "config.h"

// Function to drive the Base
void moveBase(int speed, int direction) {
    // direction: 1 = Forward, -1 = Backward, 0 = Stop
    if (direction == 1) {
        digitalWrite(MOTOR_L_DIR, HIGH);
        digitalWrite(MOTOR_R_DIR, HIGH);
    } else {
        digitalWrite(MOTOR_L_DIR, LOW);
        digitalWrite(MOTOR_R_DIR, LOW);
    }
    analogWrite(MOTOR_L_PWM, abs(speed));
    analogWrite(MOTOR_R_PWM, abs(speed));
}

// Function for the Hand Sequence (The "Dancing" Hands)
void moveHands(bool alternating) {
    if (!alternating) {
        // Cycle 1: Both Forward/Backward together
        Serial.println("Action: Both Hands Synchronized");
        // Add PWM logic for Hand Motors here
    } else {
        // Cycle 2: Alternating (L-Forward, R-Backward)
        Serial.println("Action: Alternating Hand Cycle");
        // Add PWM logic here
    }
}
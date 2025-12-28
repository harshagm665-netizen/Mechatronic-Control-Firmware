#include "config.h"

unsigned long lastUpdate = 0;
const long interval = 50; // Run control loop at 20Hz

void setup() {
    Serial.begin(9600);
    initMotors();
    initSensors();
}

void loop() {
    unsigned long currentMillis = millis();

    // The heartbeat of the robot
    if (currentMillis - lastUpdate >= interval) {
        lastUpdate = currentMillis;
        
        // 1. Check for commands from Raspberry Pi
        if (Serial.available() > 0) {
            handleSerialProtocol();
        }

        // 2. Update Motor States (PID or State Machine)
        updateMotionControl();
    }
}
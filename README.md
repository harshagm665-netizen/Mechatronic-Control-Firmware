# Mechatronic-Control-Firmware ⚙️

## 📌 Overview
Low-latency C++ firmware developed for an Arduino/ESP32-based service robot. This repository manages real-time actuator control, sensor data fusion, and robust serial communication with a high-level Python controller.

## 🚀 Key Features
- **Deterministic Control Loop:** Implemented a non-blocking `millis()` based architecture to ensure consistent 20Hz execution.
- **Custom Serial Protocol:** Uses a 3-byte packet system (`Header-Command-Footer`) with error-checking to prevent malformed data execution.
- **PID Synchronization:** Optimized motor PWM signals for fluid limb movement and precise base locomotion.

## 🛠️ Tech Stack
- **Language:** C++ (Arduino Framework)
- **Hardware:** ATmega2560 / ESP32
- **Peripherals:** L298N H-Bridge, SG90 Servos, UART Communication
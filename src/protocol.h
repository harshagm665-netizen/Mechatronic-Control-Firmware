#ifndef PROTOCOL_H
#define PROTOCOL_H

#include <stdint.h>

/**
 * Custom UART Protocol Definitions
 * Used for communication between Python (High-Level) and Arduino (Low-Level)
 */

// --- Sync Bytes ---
#define START_BYTE 0xAA  // Marks the beginning of a valid packet
#define END_BYTE   0x55  // Marks the end of a valid packet

// --- Command Byte Map ---
// Base Movement
#define CMD_BASE_STOP      0x00
#define CMD_BASE_FORWARD   0x01
#define CMD_BASE_BACKWARD  0x02
#define CMD_BASE_LEFT      0x03
#define CMD_BASE_RIGHT     0x04

// Expressive Movements
#define CMD_DANCE_START    0x0D  // Trigger the rhyme + motion sequence
#define CMD_NECK_CENTER    0x10  // Reset neck to 0 degrees
#define CMD_HAND_WAVE      0x11  // Specific hand gesture

// System Commands
#define CMD_EMERGENCY_STOP 0xFF
#define CMD_RESET_DEFAULT  0xFE

// --- Payload Structure (Optional for advanced usage) ---
struct RobotPacket {
    uint8_t header;
    uint8_t command;
    int8_t  data;      // Can be used for speed or angle values
    uint8_t footer;
};

#endif
// CSCE 3600 - Systems Programming / Major Assignment 1 - Bitwise Operators
// Pranav Dubey
// June 22, 2025
// Implementation of the endian swap operation by taking a 32-bit unsigned integer and swaps order of specific bytes. It swaps byte 0 with byte 3 and byte 1 with byte 2

#include "major1.h"

unsigned int endian_swap(unsigned int value) {
    unsigned int byte0 = (value & 0x000000FF); // Byte 0
    unsigned int byte1 = (value & 0x0000FF00); // Byte 1
    unsigned int byte2 = (value & 0x00FF0000); // Byte 2
    unsigned int byte3 = (value & 0xFF000000); // Byte 3

    // Change bytes to new positions
    return (byte0 << 24) | (byte1 << 8) | (byte2 >> 8) | (byte3 >> 24);
}
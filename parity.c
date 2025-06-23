// CSCE 3600 - Systems Programming / Major Assignment 1 - Bitwise Operators
//Hema Thallapareddy
//June 22, 2025
//Implementation of a function to compute parity (0 = even, 1 = odd) using bitwise operations on a 32-bit unsigned integer
#include "major1.h"
int parity(unsigned int x) { // Returns 1 if the number of 1's in binary representation is odd, 0 if even
  int parity = 0;
  while (x) {
    parity ^= (x & 1); // XOR the last bit with current parity
    x >>= 1;          // Shift right by 1 to check next bit
  }
  return parity;
}

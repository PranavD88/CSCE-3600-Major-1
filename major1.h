// CSCE 3600 - Systems Programming / Major Assignment 1 - Bitwise Operators
// Pranav Dubey, Mary Adeeko, Luke Marlin, Hema Thallapareddy
// June 22, 2025
// Shared header file that includes the function prototypes for the bitwise operations utilized in the program.

#ifndef MAJOR1_H
#define MAJOR1_H
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// Function Prototype
unsigned int endian_swap(unsigned int value);
int parity(unsigned int x);
unsigned int rotate_right(unsigned int one, unsigned int two);

// clz function
int count_leading_zeros(uint32_t num);


#endif

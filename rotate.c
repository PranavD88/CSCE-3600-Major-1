//rotate.c
//Mary Adeeko, mya0051, Group 3
//CSCE 3600.001

#include "major1.h"

unsigned int rotate_right(unsigned int one, unsigned int two)
{
        two &=31; //Limit the rotation between 0 and 31
        return (one >> two) | (one << (32- two)); //Rotate to the right by 2
}

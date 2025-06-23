// CSCE 3600 - Systems Programming / Major Assignment 1 - Bitwise Operators
// Pranav Dubey, Mary Adeeko, Luke Marlin, Hema Thallapareddy
// June 22, 2025
// Driver program that contains the menu interface

#include "major1.h"
#include <stdint.h>

int main() {
    int option;
    unsigned int value, result, input;
    unsigned int one, two;

    do {
        // Menu Option (Where the user chooses which operation to perform)
        printf("\nEnter the menu option for the operation to perform:\n");
        printf("(1) Count Leading Zeroes\n");
        printf("(2) Endian Swap\n");
        printf("(3) Rotate-right\n");
        printf("(4) Parity\n");
        printf("(5) EXIT\n");
        printf("--> ");
        if (scanf("%d", &option) != 1) {
            // Flush invalid input & trigger default case
            while (getchar() != '\n');
            option = -1;
        }

        switch(option) {
                case 1: {
                uint32_t num;
                printf("Enter an integer (1 to 4294967295): ");
                while (scanf("%u", &num) != 1 || num == 0) {
                while (getchar() != '\n'); // clear invalid input
                printf("Invalid input. Please enter a valid number (1 - 4294967295): ");
                        }
                    int result = count_leading_zeros(num);
                    printf("Number of leading zeros: %d\n", result);
                    break;
                        }
                break;

            case 2:
                // Endian Swap
                printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): "); // Prompts user for a 32-bit unsigned integer
                while (scanf("%u", &value) != 1 || value < 1 || value > 4294967295) { // Loops until valid input is recieved 
                    printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                    while (getchar() != '\n'); // Clears to remove leftover characters
                }
                result = endian_swap(value); // Calls the endian_swap function
                printf("Endian swap of %u gives %u\n", value, result); // Displays the result
                break;

            case 3:
                // Rotate
                //Prompt user to enter integer
                printf("Enter 32-bit number (>= 1 and <= 4294967295, inclusively): ");

                //Check integer to make sure it is in range
                while (scanf("%u", &one) != 1 || one < 1 || one > 4294967295)
                {
                    printf("Invalid, please enter a valid number: ");
                    while (getchar() != '\n');
                }

                //Prompt user for how many positions
                printf("Enter number of positions for rotating right from 0 to 31: ");

                //Check to make sure rotation number is in range
                while (scanf("%u", &two) != 1 || two > 31)
                {
                    printf("Invalid, please enter a valid number from 0 to 31: ");
                    while (getchar() != '\n');
                }

                //Call rotate right function
                result = rotate_right(one, two);

                //Rotation result
                printf("%u rotated by %u postions gives: %u\n ", one, two, result);
                break;

            case 4: {  // Parity
                do {
                    printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                    scanf("%u", &input);
                        } while (input < 1 || input > 4294967295);

                int result = parity(input);
                printf("Parity of %u is %d\n", input, result);
                break;
            }
            case 5:
                // Exits the program
                printf("Program terminating. Goodbye...\n");
                break;

            default:
                // What to do if invalid menu option from user input
                printf("Error: Invalid option. Please try again.\n");
                break;
        }

    } while (option != 5);

    return 0;
}

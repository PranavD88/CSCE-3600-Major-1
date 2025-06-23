// CSCE 3600 - Systems Programming / Major Assignment 1 - Bitwise Operators
// Pranav Dubey, Mary Adeeko, Luke Marlin, Hema Thallapareddy
// June 22, 2025
// Driver program that contains the menu interface

#include "major1.h"

int main() {
    int option;
    unsigned int value, result, input;

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
            case 1:
                // Placeholder for clz
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
                #include "major1.h"
                
                unsigned int rotate_right(unsigned int one, unsigned int two)
                {
                    two &=31; //Limit the rotation between 0 and 31
                    return (one >> two) | (one << (32- two)); //Rotate to the right by 2
                }
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

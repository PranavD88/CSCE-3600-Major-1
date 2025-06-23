# CSCE-3600-Major-1
## Bitwise Operations

### Team Members:
- Pranav Dubey
- Mary Adeeko
- Luke Marlin
- Hema Thallapareddy


### Project Organization:
Identify the responsibilities for each team member,
including which operation he/she was responsible for and what
role(s) or expertise he/she served in.

- `major1.c`: Contains the `main()` function and menu logic. All team members contributed to building and maintaining the main driver logic.
- `major1.h`: Header file for shared function prototypes and includes (implemented by all).
- `clz.c`: Implements the Count Leading Zeros operation (implemented by Luke).
- `endian.c`: Implements the Endian Swap operation (implemented by Pranav).
- `rotate.c`: Implements the Rotate Right operation (implemented by Mary).
- `parity.c`: Implements the Parity Check operation (implemented by Hema).
- `Makefile`: Used to compile the entire project with `make` and clean with `make clean` (organized by Pranav).
- `README.md`: This file. Describes project structure, team roles, known issues, and collaboration details (organized by Hema).


| Name                | Role/Contribution                                                              |
|---------------------|--------------------------------------------------------------------------------|
| Hema Thallapareddy  | Implemented `parity.c` and relevent integration onto `major1.h` and `main()`   |
| Pranav Dubey        | Implemented `endian.c` and relevent integration
| Mary Adeeko         | Implemented `rotate.c` and relevent integration
| Luke Marlin         | Implemented `clz.c` and relevent integration







### Knows Bugs/Problems:
A list of any features that you did not implement
or that you know are not working correctly.

- Currently no known bugs.
- All operations tested for edge cases and valid ranges.
- All functions adhere to the assignment requirement of using only bitwise operations and no standard library math functions.

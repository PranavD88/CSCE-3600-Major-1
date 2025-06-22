# CSCE 3600 - Systems Programming / Major Assignment 1 - Bitwise Operators
# Pranav Dubey, Mary Adeeko, Luke Marlin, Hema Thallapareddy
# June 22, 2025
# Makefile for the project

CC = gcc
CFLAGS = -Wall
TARGET = bitwisemenu

# Object files
OBJS = major1.o endian.o clz.o rotate.o parity.o

# Compile the program
all: $(TARGET)

# Link object files into the final executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compile major1.c
major1.o: major1.c major1.h
	$(CC) $(CFLAGS) -c major1.c

# Compile endian.c
endian.o: endian.c major1.h
	$(CC) $(CFLAGS) -c endian.c

# Compile clz.c
clz.o: clz.c major1.h
	$(CC) $(CFLAGS) -c clz.c

# Compile rotate.c
rotate.o: rotate.c major1.h
	$(CC) $(CFLAGS) -c rotate.c

# Compile parity.c
parity.o: parity.c major1.h
	$(CC) $(CFLAGS) -c parity.c

# Removes compiled files
clean:
	rm -f *.o $(TARGET)
# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Object files
OBJ = main.o functions.o

# Target executable
TARGET = main.exe

# Default target
all: $(TARGET)

# Build the executable
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

# Compile main.c
main.o: main.c sort.h
	$(CC) $(CFLAGS) -c main.c

# Compile functions.c
functions.o: functions.c sort.h
	$(CC) $(CFLAGS) -c functions.c

# Clean up object files and executable
clean:
	rm -f $(OBJ) $(TARGET)

# Rebuild everything
rebuild: clean all


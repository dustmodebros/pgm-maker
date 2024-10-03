# Compiler
CC = clang

# Compiler flags
CFLAGS = -Wall -Wextra -O2

# Source files
SRCS = maker.c

# Executable name
TARGET = maker

# Default target
all: $(TARGET)

# Rule to build the target
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

# Clean up build files
clean:
	rm -f $(TARGET)

# Phony targets
.PHONY: all clean

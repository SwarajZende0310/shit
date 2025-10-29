# Compiler and flags
CC := gcc
CFLAGS := -Wall -Wextra -Iinclude -std=c11

# Directories
SRC_DIR := src
OBJ_DIR := build
BIN_DIR := bin

# Target executable name
TARGET := $(BIN_DIR)/shit

# Source and object files
SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS := $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

# Default rule
all: $(TARGET)

# Link step
$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CC) $(OBJS) -o $(TARGET)

# Compile step
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build files
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

# Run target
run: all
	./$(TARGET)

.PHONY: all clean run
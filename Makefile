# Makefile

# Name of project -----------------------------------------------------------
NAME_FOLDER = test2
NAME_FILE_MAIN = main.cpp
NAME_FILE_THANH = thanh.cpp
NAME_FILE_LIBRARY_1 = library
NAME_FILE_LIBRARY_2 = library2

# Create folder -----------------------------------------------------------
OBJ_DIR = obj
BIN_DIR = bin
EXECUTABLE = app

# --------------------------------------------------------------------------
SRC_FOLDER = $(NAME_FOLDER)
SRC_OFMAIN = $(NAME_FILE_MAIN)

# --------------------------------------------------------------------------
SRC_DIR_1 = $(SRC_FOLDER)/$(NAME_FILE_LIBRARY_1)
INCLUDE_DIRS_1 = -I$(SRC_DIR_1)

SRC_DIR_2 = $(SRC_FOLDER)/$(NAME_FILE_LIBRARY_2)
INCLUDE_DIRS_2 = -I$(SRC_DIR_2)

SRC_DIR = $(SRC_DIR_1) + $(SRC_DIR_2)
INCLUDE_DIRS = $(INCLUDE_DIRS_1) + $(INCLUDE_DIRS_2)

# --------------------------------------------------------------------------
SRC_OFLIBRARY = $(wildcard $(NAME_FILE_LIBRARY_1)/*/*.cpp)
SRC_OFLIBRARY += $(wildcard $(NAME_FILE_LIBRARY_2)/*/*.cpp)

SRC_FILES += $(SRC_OFMAIN)
SRC_FILES += $(SRC_OFLIBRARY)

OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC_FILES))

# --------------------------------------------------------------------------
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	g++ -c -o $@ $< $(INCLUDE_DIRS)

$(EXECUTABLE): $(OBJ_FILES)
	g++ -o $@ $^

# --------------------------------------------------------------------------
# clean:
# 	rm -rf $(OBJ_DIR) $(BIN_DIR)

# $(shell mkdir -p $(OBJ_DIR))

all: $(EXECUTABLE)

run: $(EXECUTABLE)
	./$(EXECUTABLE)

# clean:
# 	del /Q $(OBJ_DIR)\*.*
# 	@if exist $(OBJ_DIR) rmdir /Q $(OBJ_DIR)
# 	del /Q $(BIN_DIR)\*.*
# 	@if exist $(BIN_DIR) rmdir /Q $(BIN_DIR)
# Makefile

# Name of project -----------------------------------------------------------
NAME_FOLDER = testCppOob
NAME_FILE_MAIN = main.cpp
NAME_FILE_THANH = thanh.cpp
NAME_FILE_LIBRARY_1 = library
NAME_FILE_LIBRARY_2 = library2


# Create folder -----------------------------------------------------------
OBJ_DIR = obj
BIN_DIR = bin
EXECUTABLE = app

# Compiler options -----------------------------------------------------------
CC ?= gcc
CXX = g++
CXXFLAGS = -std=c++17 -Os -ffunction-sections -fdata-sections -Wno-unused-result -Wno-deprecated-declarations
CFLAGS = -Wno-unused-function -fno-integrated-as -fstrict-aliasing -fPIC -Os -ffunction-sections -fdata-sections

# Linker options --------------------------------------------------------------
LINKEDLIBS += -lmosquitto

# Source files ---------------------------------------------------------------
SRC_FOLDER = $(NAME_FOLDER)
SRC_OFMAIN = $(NAME_FILE_MAIN)

SRC_DIR_1 = $(SRC_FOLDER)/$(NAME_FILE_LIBRARY_1)
INCLUDE_DIRS_1 = -I$(SRC_DIR_1)

SRC_DIR_2 = $(SRC_FOLDER)/$(NAME_FILE_LIBRARY_2)
INCLUDE_DIRS_2 = -I$(SRC_DIR_2)

SRC_DIR = $(SRC_DIR_1) + $(SRC_DIR_2)
INCLUDE_DIRS = $(INCLUDE_DIRS_1) + $(INCLUDE_DIRS_2)

SRC_OFLIBRARY = $(wildcard $(NAME_FILE_LIBRARY_1)/*/*.cpp)
SRC_OFLIBRARY += $(wildcard $(NAME_FILE_LIBRARY_2)/*/*.cpp)

SRC_FILES += $(SRC_OFMAIN)
SRC_FILES += $(SRC_OFLIBRARY)

OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC_FILES))

# Build targets --------------------------------------------------------------
$(EXECUTABLE): $(OBJ_FILES)
	$(CXX) $(LDFLAGS) -o $@ $^ $(LINKEDLIBS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) $(DEFINES) -c -o $@ $< $(INCLUDE_DIRS)

$(BUILD_PATH)/%.o: %.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(DEFINES) $(INCLUDE_DIRS) -c $< -o $@

# Clean target ----------------------------------------------------------------
.PHONY: clean
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR) $(EXECUTABLE)

$(shell mkdir -p $(OBJ_DIR))

# Default target --------------------------------------------------------------
all: $(EXECUTABLE)

# Run target -------------------------------------------------------------------
run: $(EXECUTABLE)
	./$(EXECUTABLE)

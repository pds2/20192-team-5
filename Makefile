SRC_PATH=src
TEST_PATH=test
LIB_PATH=lib
BUILD_PATH=build
BIN_PATH=$(BUILD_PATH)/bin
BIN_NAME=uno

CXX=g++
CXXFLAGS=-std=c++14 -Wall -I$(LIB_PATH) -I$(SRC_PATH)

# Procura todos os arquivos .cpp na pasta src
SOURCES=$(shell find $(SRC_PATH) -name '*.cpp' -not -name 'main.cpp')
TESTS=$(shell find $(TEST_PATH) -name '*.test.cpp')
# Define os nomes dos arquivos .o a partir dos .cpp
OBJECTS=$(SOURCES:$(SRC_PATH)/%.cpp=$(BUILD_PATH)/%.o)
TESTS_OBJECTS=$(TESTS:$(TEST_PATH)/%.cpp=$(BUILD_PATH)/%.o)
# Define os arquivos .d (dependências usadas nos headers)
DEPS=$(OBJECTS:.o=.d)
TESTS_DEPS=$(TESTS_OBJECTS:.o=.d)	

default: all


tests: $(OBJECTS) $(TESTS_OBJECTS)
	$(CXX) $(CXXFLAGS) -fprofile-arcs -ftest-coverage \
		$(OBJECTS) $(TESTS_OBJECTS) \
		-o $(BIN_PATH)/$(BIN_NAME)-test

run-tests: tests
	$(BIN_PATH)/$(BIN_NAME)-test

run:
	$(BIN_PATH)/$(BIN_NAME)

clean:
	rm -rf $(OBJECTS) $(DEPS) $(TESTS_OBJECTS) $(TESTS_DEPS)

dirs:
	@mkdir -p $(dir $(OBJECTS)) $(BIN_PATH)

all: dirs $(BUILD_PATH)/$(BIN_NAME)

# Creation of the executable
$(BUILD_PATH)/$(BIN_NAME): $(OBJECTS) 
	$(CXX) $(CXXFLAGS) $(OBJECTS) $(SRC_PATH)/main.cpp -o $(BIN_PATH)/$(BIN_NAME)

-include $(DEPS)

$(BUILD_PATH)/%.o: $(SRC_PATH)/%.cpp
	@echo "Compiling: $< -> $@"
	$(CXX) $(CXXFLAGS) -MP -MMD -c $< -o $@

$(BUILD_PATH)/%.test.o: $(TEST_PATH)/%.test.cpp
	@echo "Compiling: $< -> $@"
	$(CXX) $(CXXFLAGS) -MP -MMD -c $< -o $@

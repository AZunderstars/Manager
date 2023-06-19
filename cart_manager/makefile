CC := g++
FLAGS += -std=c++11
COMPILE_FLAGS = $(FLAGS) -c 
BUILD += build
SRC += src

all: main

main: $(BUILD)/main.o $(BUILD)/CartManager.o $(BUILD)/Box.o $(BUILD)/Item.o
	$(CC) $(BUILD)/main.o $(BUILD)/CartManager.o $(BUILD)/Box.o $(BUILD)/Item.o -o main

$(BUILD)/main.o: $(SRC)/main.cpp $(SRC)/CartManager.cpp $(SRC)/CartManager.hpp
	$(CC) $(COMPILE_FLAGS) $(SRC)/main.cpp -o $(BUILD)/main.o

$(BUILD)/Box.o: $(SRC)/Box.cpp $(SRC)/Box.hpp $(SRC)/Component.hpp $(SRC)/consts.hpp
	$(CC) $(COMPILE_FLAGS) $(SRC)/Box.cpp -o $(BUILD)/Box.o

$(BUILD)/CartManager.o: $(SRC)/CartManager.cpp $(SRC)/CartManager.hpp $(SRC)/Component.hpp $(SRC)/Item.cpp $(SRC)/Item.hpp $(SRC)/Box.cpp $(SRC)/Box.hpp $(SRC)/consts.hpp
	$(CC) $(COMPILE_FLAGS) $(SRC)/CartManager.cpp -o $(BUILD)/CartManager.o

$(BUILD)/Item.o: $(SRC)/Item.cpp $(SRC)/Item.hpp $(SRC)/Component.hpp $(SRC)/consts.hpp
	$(CC) $(COMPILE_FLAGS) $(SRC)/Item.cpp -o $(BUILD)/Item.o


clean:
	rm $(BUILD)/*.o

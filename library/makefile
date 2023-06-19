CC := g++
FLAGS += -std=c++11
COMPILE_FLAGS = $(FLAGS) -c 
BUILD += build
SRC += src

all: main

main: $(BUILD)/main.o $(BUILD)/Library.o $(BUILD)/Document.o $(BUILD)/Book.o $(BUILD)/Magazine.o $(BUILD)/Person.o $(BUILD)/Professor.o $(BUILD)/Reference.o $(BUILD)/Student.o
	$(CC) $(FLAGS) $(BUILD)/main.o $(BUILD)/Library.o $(BUILD)/Document.o $(BUILD)/Book.o $(BUILD)/Magazine.o $(BUILD)/Person.o $(BUILD)/Professor.o $(BUILD)/Reference.o $(BUILD)/Student.o -o main

$(BUILD)/main.o: $(SRC)/main.cpp $(SRC)/Library.cpp $(SRC)/Library.hpp
	$(CC) $(COMPILE_FLAGS) $(SRC)/main.cpp -o $(BUILD)/main.o

$(BUILD)/Book.o: $(SRC)/Book.cpp $(SRC)/Book.hpp $(SRC)/Document.cpp $(SRC)/Document.hpp $(SRC)/consts.hpp
	$(CC) $(COMPILE_FLAGS) $(SRC)/Book.cpp -o $(BUILD)/Book.o

$(BUILD)/Document.o: $(SRC)/Document.cpp $(SRC)/Document.hpp $(SRC)/consts.hpp
	$(CC) $(COMPILE_FLAGS) $(SRC)/Document.cpp -o $(BUILD)/Document.o

$(BUILD)/Library.o: $(SRC)/Library.cpp $(SRC)/Library.hpp $(SRC)/Book.cpp $(SRC)/Book.hpp $(SRC)/Magazine.cpp $(SRC)/Magazine.hpp $(SRC)/Person.cpp $(SRC)/Person.hpp $(SRC)/Professor.cpp $(SRC)/Professor.hpp $(SRC)/Reference.cpp $(SRC)/Reference.hpp $(SRC)/Student.cpp $(SRC)/Student.hpp $(SRC)/Document.cpp $(SRC)/Document.hpp $(SRC)/consts.hpp
	$(CC) $(COMPILE_FLAGS) $(SRC)/Library.cpp -o $(BUILD)/Library.o

$(BUILD)/Magazine.o: $(SRC)/Magazine.cpp $(SRC)/Magazine.hpp $(SRC)/Document.cpp $(SRC)/Document.hpp $(SRC)/consts.hpp
	$(CC) $(COMPILE_FLAGS) $(SRC)/Magazine.cpp -o $(BUILD)/Magazine.o

$(BUILD)/Reference.o: $(SRC)/Reference.cpp $(SRC)/Reference.hpp $(SRC)/Document.cpp $(SRC)/Document.hpp $(SRC)/consts.hpp
	$(CC) $(COMPILE_FLAGS) $(SRC)/Reference.cpp -o $(BUILD)/Reference.o

$(BUILD)/Person.o: $(SRC)/Person.cpp $(SRC)/Person.hpp $(SRC)/Document.cpp $(SRC)/Document.hpp $(SRC)/consts.hpp
	$(CC) $(COMPILE_FLAGS) $(SRC)/Person.cpp -o $(BUILD)/Person.o

$(BUILD)/Professor.o: $(SRC)/Professor.cpp $(SRC)/Professor.hpp $(SRC)/Person.cpp $(SRC)/Person.hpp $(SRC)/Document.cpp $(SRC)/Document.hpp $(SRC)/consts.hpp
	$(CC) $(COMPILE_FLAGS) $(SRC)/Professor.cpp -o $(BUILD)/Professor.o

$(BUILD)/Student.o: $(SRC)/Student.cpp $(SRC)/Student.hpp $(SRC)/Person.cpp $(SRC)/Person.hpp $(SRC)/Document.cpp $(SRC)/Document.hpp $(SRC)/consts.hpp
	$(CC) $(COMPILE_FLAGS) $(SRC)/Student.cpp -o $(BUILD)/Student.o

clean:
	rm $(BUILD)/*.o

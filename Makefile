CPP = g++
CPPFLAGS = -Wall -Wextra -Wpedantic

SRC = src
OBJ = obj
INC = inc
BIN = BirdsEye

SRCS = $(wildcard $(SRC)/*.cpp)
OBJS = $(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SRCS))
INCS = $(wildcard $(INC)/*.h)

debug: CPPFLAGS += -DDEBUG -g
debug: $(BIN)

all: $(BIN)

$(BIN): $(OBJS) $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $@ -g

$(OBJ)/%.o: $(SRC)/%.cpp $(OBJ)
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(OBJ):
	mkdir -p $@

clear:
	$(RM) -r $(OBJ)
	$(RM) $(BIN)

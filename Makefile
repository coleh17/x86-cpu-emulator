CC      = gcc
INCLUDE = ./include
CFLAGS  = -Wall -I$(INCLUDE)
OBJ_FILES    = emulator.o instructions.o memory.o main.o

emulator: $(OBJ_FILES)
	$(CC) $(OBJ_FILES) $(CFLAGS) -o emulator

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f ./*.o
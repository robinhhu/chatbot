
# code details

EXE_DIR = .
EXE = $(EXE_DIR)/chatbot

SRC= main.c readinput.c writeoutput.c freeKeys.c

# generic build details

CC=      cc
COPT=    -g
CFLAGS= -lm
WALL = -Wall

# compile to  object code

OBJ= $(SRC:.c=.o)

.c.o:
	$(CC) $(COPT) $(WALL) -c -o $@ $<

# build executable

$(EXE): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(EXE) 

# clean up compilation

clean:
	rm -f $(OBJ) $(EXE)

# dependencies

main.o:  main.c datastructure.h readinput.h writeoutput.h
readinput.o: datastructure.h readinput.h
writeoutput.o: datastructure.h writeoutput.h
freeKeys.o: datastructure.h freeKeys.h

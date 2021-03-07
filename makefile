#valgrind --leak-check=full \
         --show-leak-kinds=all \
         --track-origins=yes \
         --verbose \
         --log-file=valgrind-out.txt \
         ./pilha

#gdb ./pilha
#run ./pilha

IDIR =include
CC=g++
CFLAGS=-I$(IDIR)

ODIR=src/obj
LDIR=lib
SRCDIR=src

LIBS=-lm

_DEPS = pilha.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = testa_pilha.o pilha.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(OBJ): $(ODIR)/%.o: $(SRCDIR)/%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

pilha: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)
	cppcheck --enable=warning ../
	cpplint src/pilha.cpp src/testa_pilha.cpp include/pilha.h

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
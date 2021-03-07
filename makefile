#valgrind --leak-check=full \
         --show-leak-kinds=all \
         --track-origins=yes \
         --verbose \
         --log-file=valgrind-out.txt \
         ./pilha

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
	cppcheck --enable=warning ../

pilha: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
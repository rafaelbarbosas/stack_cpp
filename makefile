# CC=g++
# CFLAGS=-I.
# DEPS = pilha.h

# %.o: %.c $(DEPS)
# 	$(CC) -c -o $@ $< $(CFLAGS)

# pilha: testa_pilha.o pilha.o 
# 	$(CC) -o pilha testa_pilha.o pilha.o

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
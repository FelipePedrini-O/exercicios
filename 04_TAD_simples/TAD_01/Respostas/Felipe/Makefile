CC=gcc
CFLAGS=-lm -Wall

DEPS= jogo.h jogada.h tabuleiro.h jogador.h

OBJ= jogo.o jogada.o tabuleiro.o jogador.o main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

teste: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
	echo "Compilado!"

clean:
	rm -rf *.o main
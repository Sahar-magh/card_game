CFLAGS= -Wall -g3 -std=c99
CC=gcc

EXEC_TEST= test_deck1 test_cards test_cards1 test_board test_board1
EXEC_BIN=base_version achievement1
EXEC=${EXEC_TEST} ${EXEC_BIN}


default: test

build : ${EXEC_BIN}

base_version : game.o cards.o board.o deck.o
	${CC} -o $@ $^ ${CFLAGS}

achievement1 : game.o cards.o board.o deck_ach1.o
	${CC} ${CFLAGS} game.o cards.o board.o deck_ach1.o -o $@

test : ${EXEC_TEST}
	@for e in ${EXEC_TEST}; do \
	echo $${e}; ./$${e}; \
	done

clean :
	rm -f *.o ${EXEC}


%.o : %.c
	${CC} -o $@ -c $< $(CFLAGS)

game.o : fonctions.h definition.h
card.o : fonctions.h definition.h
board.o : fonctions.h definition.h
deck.o : fonctions.h definition.h
deck_ach1.o : fonctions.h definition.h
test_deck.o : fonctions.h
test_board.o : fonctions.h
test_cards.o : fonctions.h

test_cards1 : test_cards.o cards.o board.o deck_ach1.o
	${CC} -o $@ $^ $(CFLAGS)


test_cards : test_cards.o cards.o board.o deck.o
	${CC} -o $@ $^ $(CFLAGS)


test_board : test_board.o board.o cards.o deck.o
	${CC} -o $@ $^ $(CFLAGS)

test_board1 : test_board.o board.o cards.o deck_ach1.o
	${CC} -o $@ $^ $(CFLAGS)


test_deck1 : test_deck.o board.o cards.o deck_ach1.o
	${CC} -o $@ $^ $(CFLAGS)


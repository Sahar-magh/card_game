
project(Kitty_Wonderland)
set(CMAKE_C_FLAGS "-std=c99")


set(SOURCES 
board.c
game.c
cards.c
)

set(HEADERS

fonctions.h
definition.h
)

add_executable(kitty_1 ${SOURCES} deck.c ${HEADERS})
add_executable(kitty_2 ${SOURCES} deck_ach1.c ${HEADERS})		
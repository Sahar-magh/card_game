#include <stdio.h>
#include <stdlib.h>
#include "definition.h"
#include "fonctions.h"

//ce fichier contient les fonctions équivalentes aux fonctions du deck_ach1.c dans la Base_version

struct deck {};

void init_decks (int number_players){}
void distribute (struct board *board){}
void shuffle (int p, struct board * board){}
void discard_card (int c, int p, struct board* board){}

int draw_card (int p, struct board* board)
{
  return random_card();
}

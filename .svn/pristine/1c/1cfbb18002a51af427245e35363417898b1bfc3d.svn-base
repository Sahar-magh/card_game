#include <stdio.h>
#include <stdlib.h>
#include "definition.h"
#include "fonctions.h"



struct deck {
  int cards[MAX_DECK];
  int top;
  int bottom;
};


static struct deck decks[MAX_PLAYERS];



void init_decks (int number_players){
  //fonction qui permet d'initialiser le deck pour achievement 1
  for (int p = 0 ; p < number_players; ++p){
    decks[p].top = 0;
    decks[p].bottom = 0;
    for (int i = 0; i < MAX_DECK ; ++i){	  
      decks[p].cards[i] = random_card();
    }
  }
}

void distribute (struct board *board){
  //fonction qui permet de distibuer les cartes sur chaque joueur
  for (int p = 0; p < board->number_players ; ++p){
    board->players[p].deck = &decks[p];
    }
}


void shuffle (int p, struct board *board){
//la fonction est appelée seulement quand top passe de 49 à 0, (donc bottom sera forcément autour de 45) 
  for (int i = 0 ; i < (board->players[p].deck)->bottom ; i++){
    int c=rand()%(board->players[p].deck)->bottom;
    int s=(board->players[p].deck)->cards[i];
    (board->players[p].deck)->cards[i]=(board->players[p].deck)->cards[c];
    (board->players[p].deck)->cards[c]=s;
  }
    (board->players[p].deck)->top = 0;
}

void discard_card (int c, int p, struct board* board){
  //cette ponction modelise le fait de défausser une carte
  (board->players[p].deck)->cards[ (board->players[p].deck)->bottom ] = c;
  (board->players[p].deck)->bottom = ( (board->players[p].deck)->bottom + 1) % MAX_DECK;
}

int draw_card (int p , struct board* board){
  //cette ponction modelise le fait de piocher une carte
  int c = (board->players[p].deck)->cards[ (board->players[p].deck)->top ];
  ++ ((board->players[p].deck)->top) ;
  if ((board->players[p].deck)->top == MAX_DECK){
    shuffle(p,board);
  }
  return c;
}

//////////////////////////fonctions auxiliaires de test/////////////////////////////////////



struct deck* get_address(int p){
  return &decks[p];
}

int get_ith_card (int i, int p, struct board* board ){
  return (board->players[p].deck)->cards[i];
}


void modif_ith_card (int val, int i, int p, struct board* board ){
  (board->players[p].deck)->cards[i] = val;
}

int get_top (int p, struct board* board ){
  return (board->players[p].deck)->top;
}

int get_bottom (int p, struct board* board ){
  return (board->players[p].deck)->bottom;
}


void modif_top (int val, int p, struct board* board ){
  (board->players[p].deck)->top = val;
}

void modif_bottom (int val, int p, struct board* board ){
  (board->players[p].deck)->bottom = val;
}



void display_decks (struct board* board){
  for (int p = 0; p < board->number_players ; ++p){
    printf("player %d :\n",p);
    for (int i = 0; i < MAX_DECK; ++ i){
      printf("%d ",(board->players[p].deck)->cards[i]);
    }
    printf("\ntop : %d\n",(board->players[p].deck)->top);
    printf("bottom : %d\n",(board->players[p].deck)->bottom);
  }
}


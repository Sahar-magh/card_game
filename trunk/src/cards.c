#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"
#include "definition.h"


int random_card(){
  // cette fonction génère l'identifiant d'une carte aléationrement, en suivant les probabilité propres à chaque cartes
  int r = rand()%131;
  if (r == 130)
    return Kitty_Hell_is_Others;
  else if ( r < 20)
    return Kitty_Think;
  else if (r < 30)
    return Kitty_Steal;
  else if (r < 80)
    return Kitty_Razor;
  else
    return Kitty_Panacea;
}


int select_card (int p, struct board *board, struct card card_list[]){
  //cette carte retourne la première carte de la main du joueur p qu'il peut jouer, la carte Null si aucune ne lui est accessible.  
  for(int i = 0 ; i < MAX_CARDS ; ++i)
    {
      if (board->players[p].ideas >= card_list[board->players[p].hand[i]].cost){
        board->players[p].ideas -= card_list[board->players[p].hand[i]].cost;
	int c = board->players[p].hand[i];
        board->players[p].hand[i] = Null; 
	return c;
      }
    }
  return 0;
}

int choose_adversary (int p , struct board board){
  //cette fonction renvoie l'identifiant de l'adversaire de p choisi aléatoirement
  int r = rand()%(board.players_alive - 1); //on choisit le rieme joueur vivant autre que p 
  int adversary = 0;// on cherche l'identifiant de ce joueur.
  while (r){
    if ( (adversary != p) && (board.players[adversary].state) ){
      --r;     
    }
    adversary = (adversary + 1);
  }
  while ( (board.players[adversary].state == 0) || (adversary == p) ){
    adversary = (adversary + 1);
  }
  return adversary;
}



void apply_card (int c, int p ,struct board* board,struct card card_list[]){
//cette fonction applique les effets de la carte c au joueur p et à son adversaire, determiné dans la fonction.
  board->players[p].gain += card_list[c].gain_player;
  if (board->players[p].energy < INT_MAX){
  board->players[p].energy  += card_list[c].energy_player;
  }
  int adversary = choose_adversary (p, *board );
  switch (c){ //ceci concerne simplement de l'affichage
  case Kitty_Steal:
  case Kitty_Razor:
  case Kitty_Hell_is_Others:
    printf ("against %d ", adversary); 
  break;
}
  if (board->players[adversary].gain > 1){
    board->players[adversary].gain -= card_list[c].gain_adversary;
  }
  board->players[adversary].energy -= card_list[c].energy_adversary;
}


void refill_cards (int p, struct board *board){
  //cette fonction rempli la main du joueur p s'il lui manque des cartes 
  for (int i = 0 ; i < MAX_CARDS ; ++i){
    if (board->players[p].hand[i] == Null){
      board->players[p].hand[i] = draw_card (p,board);
    }
  }
}

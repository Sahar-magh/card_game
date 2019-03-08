#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"
#include "definition.h"

 
void announce_results (struct board board)
//cette fonction annonce les resultats à la fin du jeu
{
  if (board.round == MAX_ROUND){
    printf("this battle takes too long, let's have a break\n");
  }else if (board.players_alive == 0){
    printf(" Everyone is eliminated ,Game over\n ");
  }else{
    for (int i=0 ;i < board.number_players; ++i)
      {
	if (board.players[i].state==1)
	  {
	    printf(" The winner is : player %d \n", i);
	  }
      }
  }
}


void display_players (struct board *board, struct card card_list[])
//cette fonction affiche les joueurs et leurs caractéristiques
{
  for (int i = 0; i < board->number_players; ++i) {
    if (board->players[i].state) {
      printf ("player %d : \n energy : %d \n ideas : %d \n gain : %d\n hand : ", i, board->players[i].energy , board->players[i].ideas , board->players[i].gain);
      for (int j = 0; j < MAX_CARDS ; ++j){
	printf("%s ", card_list[ board->players[i].hand[j] ].name );
      }
      printf("\n\n");
    }
  }
  printf ("\n          *******************************************\n                           round %d                   \n          *******************************************\n\n",board->round);
 ++board->round;
}

 
void increase_ideas (struct board *board){
//cette fonction permet d'incrémenter les idées de chaque joueur selon son gain 
  for (int p = 0 ; p < board->number_players ; ++p)
    {
      if (board->players[p].state){
	board->players[p].ideas += board->players[p].gain;
      }
    }
}

  
				 
struct board init_board (int number_players)
{
  //cette fonction permet d'initialiser le board 
  struct board board;
  board.number_players = number_players;
  board.players_alive = board.number_players ;
  board.round = 1;
  init_decks (number_players);
  distribute (&board);
  for (int p = 0 ; p < board.number_players ; ++p){
    board.players[p].energy = 50;
    board.players[p].ideas = 0;
    board.players[p].gain = 1;
    board.players[p].state = 1;
    for (int i = 0; i < MAX_CARDS; ++i){
      board.players[p].hand[i] = Null;
    }
    refill_cards (p, &board);
  }
  return board;
}


void death (struct board* board){
  //cette fonction permet de garder le bon statut de chaque joueur
  for (int p = 0; p < board->number_players ; ++p){
    if (board->players[p].state && board->players[p].energy <= 0){
      board->players[p].state = 0;
      board->players_alive -= 1;
    }
  }
}

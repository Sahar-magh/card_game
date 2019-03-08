#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

int increase_ideas_test(struct board *board ){
  board->players[0].ideas = 3;
  board->players[0].gain = 2;
  for (int p = 1 ; p < board->number_players ; ++p){
    board->players[p].ideas = 0;
    board->players[p].gain = 1;
  }
  increase_ideas(board);
  if (board->players[0].ideas != 5){
    printf ("erreur dans increase_ideas\n");
    return 1;}
  for (int p = 1 ; p < board->number_players ; ++p){
    if (board->players[p].ideas != 1){
      printf ("erreur dans increase_ideas\n");
      return 1;}
}
  return 0;
}



int death_test (struct board *board){
  for (int p=1 ; p < board->number_players -1 ; ++p){
    board->players[p].state = 1;
    board->players[p].energy = 10;
  }
  board->players[0].energy = 0;
  board->players[board->number_players - 1].energy = -10; 
  death(board);
  if ( (board->players[0].state != 0) ||(board->players[board->number_players - 1].state != 0) ){
      printf("joueur mort qui n'est pas tué dans death\n");
      return 1;
  }

  for (int p=1 ; p < board->number_players -1 ; ++p){
    if (board->players[p].state != 1){
      printf("joueur vivant décédé sans raison dans death\n");
      return 1;
    }
  }
  if (board->players_alive != board->number_players - 2){
    printf ("nombre de joueurs vivants pas bien décrémenté dans death\n");
    return 1;
  }
  return 0;
}





int main(int argc,char* argv[])
{
  struct board board = init_board (6);
  int a = increase_ideas_test(&board);
  int b = death_test(&board);
  printf ("%d erreurs dans board.c\n", a+b);
   return 0;
}
 


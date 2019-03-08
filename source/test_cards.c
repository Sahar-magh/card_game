#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctions.h"



struct card card_list[] = { 
  {Null, "Null" , 0 ,0 , 0, 0, 0 },
  {Kitty_Think,"Kitty_Think", 5, 1, 0, 0, 0} ,
  {Kitty_Steal,"Kitty_Steal" , 10, 1, 1, 0, 0} , 
  {Kitty_Panacea ,"Kitty_Panacea", 2, 0, 0, 10, 0} ,
  {Kitty_Razor ,"Kitty_Razor", 2, 0, 0, 0, 10} , 
  {Kitty_Hell_is_Others ,"Kitty_Hell_is_Others", 100, 0, 0, 0, INT_MAX} };




int test_select_card (struct board *board, struct card card_list[])
{
  board->players[0].ideas = 1;
  board->players[1].ideas = 3;
  for (int i = 0; i < MAX_CARDS; ++i){
    board->players[0].hand[i] = i+1;
    board->players[1].hand[i] = i+1;
  }
  int a = select_card (0, board, card_list);
  int b = select_card (1, board, card_list);
  if (a!=0){
    printf ("carte prise avec idées insuffisantes dans select_cards\n");
    return 1;
}
  switch (b){
  case Kitty_Panacea :
    break;
  case Kitty_Razor :
    printf ("le joueur ne prend pas la première carte possible dans select_cards\n");
    return 1;
    break;
  default :
    printf ("carte prise avec idées insuffisantes dans select_cards\n");
    return 1;
    break;
  }
  if ( (board->players[0].ideas != 1) ||  (board->players[1].ideas != 1)  ){
    printf ("mauvaise modification de l'idée dans select_cards\n");
    return 1;
  }
  return 0;
}

int test_choose_adversary (struct board board)
{
  board.players_alive = 3;
  board.players[0].state = 1;
  board.players[1].state = 1;
  board.players[2].state = 0;
  board.players[3].state = 0;
  board.players[4].state = 1;
  board.players[5].state = 0;
  int t[6];
  t[0] = choose_adversary(0,board);
  t[1] = choose_adversary(1,board);
  t[2] = -1;
  t[3] = -1;
  t[4] = choose_adversary(4,board);
  t[5] = -1;
  for (int i = 0 ; i < 6 ; ++i){
    if ((t[i] == 2) ||(t[i] == 3) || (t[i] == 5)){
      printf("le joueur joue contre un mort dans choose_adversary\n");
      return 1;
    }
   else if (t[i] == i){
      printf("le joueur joue contre lui-même dans choose_adversary\n");
      return 1;
    }
  }
  return 0;
}


int test_refill_cards (struct board* board)
{
  board->players[1].hand[0] = Kitty_Razor;
  board->players[1].hand[1] = Null;
  board->players[1].hand[2] = Null;
  board->players[1].hand[3] = Kitty_Razor;
  board->players[1].hand[4] = Kitty_Razor;
  refill_cards(1, board);
  for (int i = 0 ; i < MAX_CARDS ; ++ i){
    if (board->players[1].hand[i] == Null){
      printf("main non remplis dans refill_cards");
      return 1;
    }
  }
  if ( (board->players[1].hand[0] != Kitty_Razor) || 
       (board->players[1].hand[3] != Kitty_Razor) ||
       (board->players[1].hand[4] != Kitty_Razor) ){
    printf ("cartes déjà dans la main modifiées das refill_cards");
    return 1;
  }
  return 0;
}
 

int test_apply_card (struct board *board)
{
  board->players_alive = 2;
  board->players[0].state = 1;
  board->players[1].state = 1;
  board->players[2].state = 0;
  board->players[3].state = 0;
  board->players[4].state = 0;
  board->players[5].state = 0;
  board->players[0].ideas = 1;
  board->players[0].gain = 2;
  board->players[0].energy = 10;
  board->players[1].ideas = 1;
  board->players[1].gain = 1;
  board->players[1].energy = 10;
  //seuls 0 et 1 sont vivants et peuvent être choisi comme adversaire l'un par l'autre
  apply_card (Kitty_Think,0,board,card_list);
  if (board->players[0].gain != 3){
    printf ("erreur pour Kitty_Think dans apply_card\n");
    return 1;
}
  apply_card (Kitty_Steal,1,board,card_list);
  if ( (board->players[0].gain != 2) ||  (board->players[1].gain != 2) ){
    printf ("erreur pour Kitty_Steal dans apply_card\n");
    return 1;
 }
  apply_card (Kitty_Panacea,0,board,card_list);
  if (board->players[0].energy != 20){
    printf ("erreur pour Kitty_Panacea dans apply_card\n");
    return 1;
 }
  apply_card (Kitty_Razor,1,board,card_list);
  if ( (board->players[0].energy != 10) || (board->players[1].energy != 10) ){
    printf ("erreur pour Kitty_Razor dans apply_card\n");
    return 1;
  }
  apply_card (Kitty_Hell_is_Others,1,board,card_list);
  if (board->players[0].energy > 0){
    printf ("erreur pour Kitty_Hell_is_Others dans apply_card\n");
    return 1;
 }
  return 0;
}



int main (int argc, char *argv[])
{
 struct board board = init_board (6);
 int a = test_select_card (&board, card_list);
 int b = test_choose_adversary (board);
 int c = test_refill_cards(&board);
 int d = test_apply_card (&board);
printf ("\n%d erreur dans cards.c\n", a+b+c+d);
  return 0;
}

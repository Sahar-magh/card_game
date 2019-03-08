#include <stdio.h>
#include "fonctions.h"

int test_distribute (struct board* board){
  for (int p = 0 ; p < board->number_players ; ++p){
    if (get_address(p) != board->players[p].deck){
      printf ("erreur dans distribute\n");
      return 1;
    }
  }
  return 0;
}

int test_discard_card (struct board* board){
  int bot = 48;
  for (int c = 0 ; c < MAX_DECK ; ++c){
    modif_ith_card (1,c,1,board) ;
  }
  modif_bottom (bot, 1, board);
  modif_top ((bot + MAX_CARDS) % MAX_DECK, 1, board);
  //le deck du joueur 1 ne contient que des 1, on impose la limite début/fin deck à la fin du tableau représantant le deck (là ou il pourait y avoir un pb)
  for (int i = 0 ; i < MAX_CARDS ; ++i ){
    discard_card (3,1,board);
  }
  //le joueur repose des cartes 3 (comme s'il n'avait que des 3 dans sa main)


  // on vérifie que son deck est bien devenu 
  //3 3 3 *fin deck* *debut deck* 1 1 1 ... 1 1 *bot*3 3 
  if ( get_bottom(1, board) != (bot + MAX_CARDS) % MAX_DECK ){
    printf ("bottom n'est pas incrémenté normalement dans discard_card\n");
    return 1;
  }
  if ( get_top(1,board) != (bot + MAX_CARDS) % MAX_DECK ){
    printf ("top est modifié dans discard_card\n");
    return 1;
  }
  for (int c = (bot + MAX_CARDS) % MAX_DECK ; c < bot ; ++c){
    if ( get_ith_card(c,1,board) != 1){
      printf ("deck modifié au mauvaise endroit dans discard_card\n");
      return 1;
    }
  }
  for (int c = bot ; c < (bot + MAX_CARDS) % MAX_DECK ; ++c){
    if ( get_ith_card(c,1,board) != 3){
      printf ("carte non modifié dans discard_card\n");
       return 1;
    }
  }
  return 0;
}





int test_draw_card (struct board* board){
  int top = 47;
  int debut_3 = MAX_DECK - 5;
  modif_top(top,1,board);
  modif_bottom(top,1,board); //main vide
  for (int c = 0 ; c < debut_3 ; ++c){
    modif_ith_card(1,c,1,board);
  }
  for (int c =  debut_3 ; c < MAX_DECK ; ++c){
    modif_ith_card(3,c,1,board);
  }
  //son deck est de la forme 1 1 ...1 1 1 3 3 *fin deck* *debut deck*  3 3 3
  for (int i =0 ; i < MAX_CARDS ; ++i ){
    draw_card (1,board);
  }


  // on vérifie que son deck est bien devenu 
  // & &  *debut deck* & & ...&  *fin deck* 3 3 3 [ &=1ou3 (deux 3 et que des 1) ]
  if ( get_bottom(1,board) != top ){
    printf ("bottom modifié dans draw_card\n");
    return 1;
  }
  if ( get_top(1,board) != (top + MAX_CARDS) % MAX_DECK ){
    printf ("top n'est pas incrémenté normalement dans draw_card\n");
    return 1;  
  }
  //on vérifie que les "places réservées" sont restée inchangée après le mélange
  for (int c =  get_bottom(1,board) ; c < MAX_DECK ; ++c){
    if ( get_ith_card(c,1,board) != 3){
    printf ("main modifiée dans draw_card\n");
    return 1;
    }
  }
  //on vérifie le contenu du deck (qui dois être mélanger mais contenir les mêmes cartes)
  int compare = 0;
  int compt = 0;
  for (int c = 0 ; c < debut_3 ; ++c){
    if (  get_ith_card(c,1,board) != 1){
      ++compare;
    }
    compt +=  get_ith_card(c,1,board);
  }
  for (int c = debut_3 ; c <  get_bottom(1,board) ; ++c){
    if ( get_ith_card(c,1,board) != 3){
      ++compare;
    }
    compt +=  get_ith_card(c,1,board);
  }
  if (compare == 0){
    printf("pas de mélange visible apres avoir vidé le deck dans draw_card\n");
    return 1;
  }
  int val_attendue = debut_3  + 3 *(  get_bottom(1,board) - debut_3 );
  if (compt != val_attendue){
    printf("contenu du deck altéré dans draw_card\n");
    return 1; 
  }
  return 0;
}





int test_shuffle( struct board* board){
  int debut_3 = MAX_DECK - 10;
  modif_top(49,1,board);
  modif_bottom(45,1,board);
  for (int c = 0 ; c < debut_3 ; ++c){
    modif_ith_card(1,c,1,board) ;
  }
  for (int c =  debut_3 ; c < MAX_DECK ; ++c){
    modif_ith_card(3,c,1,board) ;
  }
  shuffle(1,board);


  for (int c = get_bottom(1,board) ; c < MAX_DECK ; ++c){
    if ( get_ith_card(c,1,board) != 3){
    printf ("main modifiée dans shuffle\n");
    return 1;
    }
  }
  int compare = 0;
  int compt = 0;
  for (int c = 0 ; c < debut_3 ; ++c){
    if ( get_ith_card(c,1,board) != 1){
      ++compare;
    }
    compt += get_ith_card(c,1,board);
  }
  for (int c = debut_3 ; c <  get_bottom(1,board) ; ++c){
    if (  get_ith_card(c,1,board) != 3){
      ++compare;
    }
    compt +=  get_ith_card(c,1,board);
  }
  if (compare == 0){
    printf("pas de mélange visible apres avoir vidé le deck dans shuffle\n");
    return 1;
  }
  int val_attendue = debut_3  + 3 *(  get_bottom(1,board) - debut_3 );
  if (compt != val_attendue){
    printf("contenu du deck altéré dans shuffle\n");
    return 1;
  }
  return 0;
  
}
  

int main(int argc, char* argv[])
{
  struct board board = init_board (2);
  int a = test_distribute (&board);//distribute est appelée dans init_board
  int b = test_discard_card (&board);
  int c = test_draw_card (&board);
  int d = test_shuffle (&board);
  printf ("%d erreur dans deck_ach1.c\n", a+b+c+d);
  return 0;
}

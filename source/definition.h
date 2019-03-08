#ifndef DEFINITION_H
#define DEFINITION_H

#include<limits.h>
#define MAX_ROUND 500
#define MAX_PLAYERS 1000
#define MAX_CARDS 5
#define MAX_DECK 50



enum cards_id {Null , Kitty_Think , Kitty_Steal , Kitty_Panacea , Kitty_Razor, Kitty_Hell_is_Others};

struct card {
  int id;
  char *name ; 
  int cost;
  int gain_player;
  int gain_adversary;
  int energy_player;
  int energy_adversary;
};

struct deck;

struct player{
  int energy;
  int ideas;
  int gain;
  int state; //0=dead, 1=alive
  int hand[MAX_CARDS];//contient les id des cartes
  struct deck *deck;
};

struct board {
  int number_players;
  int players_alive;
  struct player players[MAX_PLAYERS];
  int round;
};


#endif

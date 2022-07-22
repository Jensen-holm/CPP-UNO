#include <iostream>
#include <vector>
#include <string>
#include "includes/players.hpp"
#include "includes/deck.hpp"
#include "includes/game_functions.hpp"
#include "includes/input.hpp"
using namespace std;


/*
Simple terminal UNO game
by: Jensen Holm 2022
*/


int main() 
{

  // initialize the user object
  User player1;

  // game play variables determined by user input
  int num_cpus = user_num_cpus();
  int cards_per_player = user_cards_per_player(num_cpus);

  // create a vector of CPU objects and put the user player into it as well (shuffle it for random order)
  vector <Player> player_vector;
  player_vector.push_back(player1);
  for (int i = 0; i < num_cpus; i++) 
  {
    CPU computer(i);
    player_vector.push_back(computer);
  }

  // set the deck


  // deal cards


  // begin game



  
}
#include <iostream>
#include <vector>
#include <string>
#include "includes/cpu.hpp"
#include "includes/user.hpp"
#include "includes/deck.hpp"
#include "includes/game_functions.hpp"
#include "includes/input.hpp"
using namespace std;

/*
Simple terminal UNO game
by: Jensen Holm 2022
*/

// In the future we should add some spicy uno rules

int main() {

  // game play variables determined by user input
  int num_cpus = user_num_cpus();
  int cards_per_player = user_cards_per_player(num_cpus);

  
}
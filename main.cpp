#include <iostream>
#include <vector>
#include <string>
#include "includes/cpu.h"
#include "includes/user.h"
#include "includes/deck.h"
#include "includes/game_functions.h"
using namespace std;

/*
Simple terminal UNO game
by: Jensen Holm 2022
*/

// In the future we should add some spicy uno rules

int main() {

  // variables tbd by user input
  int num_cpus;
  int cards_per_player;


  // prompt user to select number of CPU's to play against
  cout << "\nEnter Number of CPU's to play against (min 1, max 54): ";
  cin >> num_cpus;

  // check to make sure it is more than zero, less than 54 lol. (54 is half the deck, would be 2 cards per player)
  if (num_cpus <= 0 | num_cpus > 54) {
    // error message and stop the program
    throw invalid_argument("Number of CPU players should be between 1 and 54.");
    return 0;
  } else {

    // if the input was valid, then we can ask them about how many cards per player they want to use
    int max_cards_per_player = 108 / num_cpus;
    cout << "\nCards Per Player (Max " + to_string(max_cards_per_player) + " cards): ";
    cin >> cards_per_player;

    // make sure it is not more than the max
    if (cards_per_player > max_cards_per_player) {
      throw invalid_argument("Number of Cards Per Player Must not be greater than the max.");
      return 0;
    }

  }  
  // as long as no errors were thrown now we will be here and able to begin the game

  
}
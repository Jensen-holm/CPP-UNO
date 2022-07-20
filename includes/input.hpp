#include <iostream>
#include <string>
using namespace std;

int user_num_cpus() {

  // variables tbd by user input
  // prompt user to select number of CPU's to play against
  int num_cpus;
  cout << "\nEnter Number of CPU's to play against (min 1, max 54): ";
  cin >> num_cpus;

  // check to make sure it is more than zero, less than 54 lol. (54 is half the deck, would be 2 cards per player)
  if (num_cpus <= 0 | num_cpus > 54) {
    throw invalid_argument("Must Play against at least 1 CPU, at most 54.");
  } else {
    return num_cpus;
  }
}

int user_cards_per_player(int user_defined_num_cpus) {

  int max_cards_per = 108 / user_defined_num_cpus;
  int min_cards_per = 2;
  int cards_per_player;
  cout << "\nEnter Number of Cards Per Player (minimum 2, max " + to_string(max_cards_per) + "): ";
  cin >> cards_per_player;

  // check to make sure the user entered an acceptable amount
  if (cards_per_player > max_cards_per | cards_per_player < min_cards_per) {
    throw invalid_argument("Must enter between " + to_string(min_cards_per) + " and " + to_string(max_cards_per) + " when playing with " + to_string(user_defined_num_cpus) + ".");
  } else {
    return cards_per_player;
  }
}
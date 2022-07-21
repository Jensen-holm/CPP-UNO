#include <iostream> // so user can enter name
#include <string>
#include <vector> // so user can have modifiable list of cards
#include "cards.hpp"
using namespace std;

// create both user and CPU players as subclasses of the main Player class

class Player {

public:
  vector <Card> Cards;

};


class User: public Player {

public:
  string type = 'User';

};


class CPU: public Player {

public:
  string type = 'CPU';

};
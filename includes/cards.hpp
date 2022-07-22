#include <string>
using  namespace std;

class Card {

public:
  // constructor
  Card(string col, int val) {
  string color = col;
  int value = val;
  }

};


class SpecialCard: public Card {

};


class WildCard: public Card {

};
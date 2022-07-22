#include <string>
#include <vector>
using  namespace std;


class Card 
{

private:
  // constructor
  Card(string col, int val) 
  {
  string color = col;
  int value = val;
  }

};


class SpecialCard: public Card 
{

};


class WildCard: public Card 
{

};


class Deck 
{

private:
  // generate the deck of cards here

public:
  vector <Card> deck_of_cards;

  // create a getter function for the deck of cards
  vector <Card> get_deck() 
  {
    return deck_of_cards;
  }

};
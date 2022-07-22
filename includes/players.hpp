#include <iostream> // so user can enter name
#include <string>
#include <vector> // so user can have modifiable list of cards
#include "cards.hpp"
using namespace std;

// create both user and CPU players as subclasses of the main Player class

class Player {

public:
  // vector of cards the player is delt

};


class User: public Player {

private:
  string type = "User";

public:
  
  User() {
    string name = set_name();
  }
  
  string set_name() {
    string new_name;
    cout << "\nEnter Name: ";
    cin >> new_name;
    return new_name;
  }

  string get_type() {
    return type;
  }

};


class CPU: public Player {

private:
  string type = "CPU";

public:

  CPU(int cpu_number_id) {
    string cpu_id = "CPU #" + to_string(cpu_number_id);
  }

  string get_type() {
    return type;
  }

};
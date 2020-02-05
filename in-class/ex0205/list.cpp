/*************************************************************************
 *
 * In-Class Exercise: Lists
 *
 * File Name: list.cpp
 * Username:  reklre
 * Username:  ?
 * Course:    CPTR 142
 *
 */

#include <iostream> // for cin and cout
#include <list>     // vector
using namespace std;

class State {
public:
  State(string name, int population);
  string getName() const { return name; }
  int getPopulation() const { return population; }
  void setPopulation(int population) { this->population = population; }

private:
  string name;
  int population; // in thousands
};

State::State(string name, int population) {
  this->name = name;
  this->population = population;
}

int main() {
  // define a list
  list<State> states;
  // add Oregon with 4143 and Washington with 7406
  states.push_back(State("Oregon", 4143));
  states.push_back(State("Washington", 7406));
  // add Alaska to the beginning with 734
  states.push_front(State("Alaska", 734));
  states.push_front(State("WallaWalla", 0));
  // loop and print using iterator
  for (auto state = states.begin(); state != states.end(); state++) {
    cout << (*state).getName() << " " << (*state).getPopulation() << endl;
  }
  return 0;
}

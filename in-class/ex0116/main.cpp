/*************************************************************************
 *
 * In-Class Exercise: Creating a Class
 *
 * File Name: main.cpp
 * Username:  reklre
 * Username:  ?
 * Course:    CPTR 142
 *
 */

#include <assert.h> // assert()
#include <iostream> // for cin and cout
using namespace std;

/*
  -  define a class CounterType that holds a nonnegative whole number
  -  include a mutator that sets the counter
  -  include member functions to increase and decrease the value by one
  -  include a member function that returns the current value
  -  include a member function that outputs the current value
  -  ensure that the value never becomes negative
*/
class CounterType {
public:
  void setCounter(int count) { Counter = count; }
  void Counting() { Counter++; }
  void DecreaseCount() { Counter--;}
unsigned getCount(){return Counter;}
void printCount(){}
private:
  unsigned int Counter;
};
/*====================================================================
 * Main program
 */
int main() {

  cout << "Counter Checkpoint" << endl;

  return 0;
}

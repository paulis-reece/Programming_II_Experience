/*************************************************************************
 *
 * In-Class Exercise: Constructor for CounterType
 *
 * File Name: main.cpp
 * Username:  reklre
 * Username:  ?
 * Course:    CPTR 142
 *
 */

#include "CounterType.h"
#include <cassert>  // assert()
#include <iostream> // for cin and cout
using namespace std;

/*====================================================================
 * Main program
 */
int main() {
  cout << "Counter Exercise" << endl;
  cout << "Default test" << endl;
 CounterType counter;
  cout << "Constructor with one argument" << endl;
  CounterType custom(17);

  assert(counter.getCount() == 0);
  counter.increase();
  assert(counter.getCount() == 1);
  counter.decrease();
  assert(counter.getCount() == 0);
  counter.decrease();
  assert(counter.getCount() == 0);
  counter.printCount();
  cout << endl;

  return 0;
}

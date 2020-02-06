/*************************************************************************
 *
 * In-Class Exercise: Queue
 *
 * File Name: queue.cpp
 * Username:  reklre
 * Username:  ?
 * Course:    CPTR 142
 *
 */

#include <iostream> 	// for cin and cout
#include <queue>
using namespace std;

int main() {

  // define a variable to hold a queue of customers
queue<string>customers;
  // add a few customers
customers.push("Quinton");
customers.push("Adam");
customers.push("Jared");


  cout << "We have " << customers.size() << " customers waiting." << endl;
  cout << "The first in line is " << customers.front() << endl;
  // help first customer and remove from queue
customers.pop();
  cout << "After helping one customer, we have " << customers.size() << " customers waiting" << endl;
  cout << "and the next in line is " << customers.front() << endl;

  return 0;
}

/*************************************************************************
 *
 * In-Class Exercise: deque
 *
 * File Name: deque.cpp
 * Username:  reklre 
 * Username:  ?
 * Course:    CPTR 142
 *
 */

#include <iostream> 	// for cin and cout
#include <deque>
using namespace std;

int main() {
  // exercise 1
  // TODO: define a variable to hold a deque of books to be used as a stack
deque<string>books;
  // TODO: add a few books to the front
books.push_front("j");
books.push_front("k");
books.push_front("l");
  cout << "We have " << books.size() << " books." << endl;
  cout << "The most recent one is " << "TODO" << endl;
  // read the first book and remove from queue

  cout << "After removing the first one, we have " << "TODO" << " books" << endl;
  cout << "and the next one is " << "TODO" << endl;

  return 0;
}

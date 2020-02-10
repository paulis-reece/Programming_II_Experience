/*************************************************************************
 *
 * Exercise: Pointers and Objects
 *
 * File Name: main.cpp
 * Username:  reklre
 * Username:  ?
 * Course:    CPTR 142
 *
 */
#include "BankAccount.h"
#include <iostream> // for cin and cout
using namespace std;

/*====================================================================
 * Main program
 *
 * g++ main.cpp BankAccount.cpp && ./a.out
 *
 */
int main() {
  // define a variable to hold a BankAccount object
  BankAccount account = BankAccount("Jake", 200, 0.1);
  // define a variable to hold a pointer to a BankAccount object (properly
  // initialized)
  BankAccount *ptr = NULL;
  // assign the address of the first variable to the second
  ptr = &account;
  // call displayAccountSummary() using the dot operator
  ptr->displayAccountSummary();
  cout << endl;
  // call updateInterest() using the dereference operator
  (*ptr).updateInterest();
  cout << endl;
  // call displayAccountSummary() using the arrow operator
  ptr->displayAccountSummary();
}

/*************************************************************************
 *
 * Homework Assignment: Implement operator overloading with money.
 *
 * File Name:       Money.cpp
 * Name:            reklre
 * Course:          CPTR 142
 * Date:            2/1/2020
 *
 */
#include "Money.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;

bool Money::operator==(const Money &amount2) {
  return ((dollars == amount2.dollars) && (cents == amount2.cents));
}
// TODO Add overloading < operator here
bool Money::operator<(const Money &amount2) {
  bool verdict;
  if ((dollars < amount2.dollars) && (cents < amount2.cents)) {
    verdict = true;
  } else if (dollars < amount2.dollars) {
    verdict = true;
  } else {
    verdict = false;
  }
  return verdict;
}
// TODO Add overloading > operator here
bool Money::operator>(const Money &amount2) {
  bool verdict;
  if ((dollars > amount2.dollars) && (cents > amount2.cents)) {
    verdict = true;
  } else if (dollars > amount2.dollars) {
    verdict = true;
  } else {
    verdict = false;
  }
  return verdict;
}
// TODO Add overloading + operator here
const Money Money::operator+(const Money &amount2) {
  Money amount3;
  amount3.dollars =
      ((((dollars * 100) + cents) + ((amount2.dollars * 100) + amount2.cents)) /
       100);
  amount3.cents =
      ((((dollars * 100) + cents) + ((amount2.dollars * 100) + amount2.cents)) %
       100);
  return amount3;
}
// TODO Add overloading - operator here
const Money Money::operator-(const Money &amount2) {
  Money amount3;
  amount3.dollars =
      ((((dollars * 100) + cents) - ((amount2.dollars * 100) + amount2.cents)) /
       100);
  amount3.cents =
      ((((dollars * 100) + cents) - ((amount2.dollars * 100) + amount2.cents)) %
       100);
  return amount3;
}
Money::Money() {
  dollars = 0;
  cents = 0;
}

Money::Money(double amount) {
  dollars = dollarsPart(amount);
  cents = centsPart(amount);
}

Money::Money(int theDollars) {
  dollars = theDollars;
  cents = 0;
}

// Uses cstdlib:
Money::Money(int theDollars, int theCents) {
  if ((theDollars < 0 && theCents > 0) || (theDollars > 0 && theCents < 0)) {
    cout << "Inconsistent money data.\n";
    exit(1);
  }
  dollars = theDollars;
  cents = theCents;
}

double Money::getAmount() const { return (dollars + cents * 0.01); }

int Money::getDollars() const { return dollars; }

int Money::getCents() const { return cents; }

int Money::dollarsPart(double amount) const { return static_cast<int>(amount); }

int Money::centsPart(double amount) const {
  double doubleCents = amount * 100;
  int intCents = (round(fabs(doubleCents))) % 100; //% can misbehave
                                                   // for negatives
  if (amount < 0)
    intCents = -intCents;
  return intCents;
}

int Money::round(double number) const { return floor(number + 0.5); }

ostream &operator<<(ostream &outputStream, const Money &amount) {
  int absDollars = abs(amount.getDollars());
  int absCents = abs(amount.getCents());
  if (amount.getDollars() < 0 || amount.getCents() < 0) {
    // accounts for dollars == 0 or cents == 0
    outputStream << "$-";
    outputStream << absDollars;
  } else {
    outputStream << '$';
    outputStream << absDollars;
  }
  if (absCents >= 10) {
    outputStream << '.' << absCents;
  } else {
    outputStream << '.' << '0' << absCents;
  }
  return outputStream;
}

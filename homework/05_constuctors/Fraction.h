/*************************************************************************
 *
 * Homework Assignment: Create constructors for the Fraction class
 *
 * File Name:       Fraction.h
 * Name:            reklre
 * Course:          cp1TR 142
 * Date:            January 22, 2020
 *
 */

#include <cstdlib>
#include <iostream>

using namespace std;

class Fraction {
public:
  // TODO Add fraction constuctors here
  Fraction();
  Fraction(int one);
  Fraction(int one, int two);

  double getDouble();
  void outputReducedFraction();

private:
  int numerator;
  int denominator;
  // Finds greatest common divisor of numerator and denominator
  int gcd();
};

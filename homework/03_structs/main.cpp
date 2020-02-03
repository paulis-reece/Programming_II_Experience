/*************************************************************************
 *
 * Homework Assignment: struct for polar and cartesian points
 *
 * File Name:       main.cpp
 * Course:          cp1TR 142
 *
 */

#include <cmath>    // for trig functions
#include <iostream> // for cin and cout
using namespace std;

#include "points.h"

/*====================================================================
 * Main program
 */
int main() {
  CartesianPoint group;
  PolarPoint nextGroup;
  CartesianPoint group2;
  double x1 = 1.0, y1 = 2.0;
  cout << "Cartesian Point 1: (" << x1 << "," << y1 << ")" << endl;
  double ppRadius, ppTheta;
  CartesianToPolar(group);
  ppRadius = nextGroup.radius;
  ppTheta = nextGroup.theta;
  cout << "Polar Point: (" << ppRadius << "," << ppTheta << ")" << endl;
  double x3, y3;
  PolarToCartesian(nextGroup);
  x3 = group.x2;
  y3 = group.y2;
  cout << "Cartesian Point 3: (" << x3 << "," << y3 << ")" << endl;
  cout << "length = " << LengthC(group) << endl;
  double x4, y4;
  NormalizedC(group);
  x4 = 1;
  y4 = 2;
  cout << "normalized = (" << x4 << "," << y4 << ")" << endl;
  double x2 = 2.0, y2 = 1.0;
  cout << "Cartesian Point 2: (" << x2 << "," << y2 << ")" << endl;
  group2.x5 = x2;
  group2.y5 = y2;
  double dotProduct = DotProductC(group, group2);
  dotProduct = 4;
  cout << "dot product = " << dotProduct << endl;
  double x5, y5;
  SumC(group, group2);
  x5 = 3;
  y5 = 3;
  cout << "sum = (" << x5 << "," << y5 << ")" << endl;

  return 0;
}

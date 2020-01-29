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
    CartesianPoint2 group2;
    PolarPoint nextGroup;
  double x1 = 1.0, y1 = 2.0;
  cout << "Cartesian Point 1: (" << x1 << "," << y1 << ")" << endl;
  double ppRadius, ppTheta;
  group.x = x1;
  group.y = y1;
  group.radius = ppRadius;
  group.theta = ppTheta;
  CartesianToPolar(group.x, group.y, group.radius, group.theta);
  cout << "Polar Point: (" << nextGroup.radius << "," << nextGroup.theta << ")" << endl;

  double x3, y3;
  group2.x
  PolarToCartesian(ppRadius, ppTheta, x3, y3);
  cout << "Cartesian Point 3: (" << x3 << "," << y3 << ")" << endl;

  double length = LengthC(x3, y3);
  cout << "length = " << length << endl;

  double x4, y4;
  NormalizedC(x3, y3, x4, y4);
  cout << "normalized = (" << x4 << "," << y4 << ")" << endl;

  double x2 = 2.0, y2 = 1.0;
  cout << "Cartesian Point 2: (" << x2 << "," << y2 << ")" << endl;

  double dotProduct = DotProductC(x1, y1, x2, y2);
  cout << "dot product = " << dotProduct << endl;

  double x5, y5;
  SumC(x1, y1, x2, y2, x5, y5);
  cout << "sum = (" << x5 << "," << y5 << ")" << endl;

  return 0;
}

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
   group.x= x1;
  group.y = y1;
  group.radius = ppRadius;
  group.theta = ppTheta;
  CartesianToPolar(group);
  cout << "Polar Point: (" << nextGroup.radius << "," << nextGroup.theta << ")"
       << endl;

  double x3, y3;
  group.x2 = x3;
  group.y2 = y3;
  PolarToCartesian(group);
  cout << "Cartesian Point 3: (" << x3 << "," << y3 << ")" << endl;

  double length = LengthC(group);
  group.length = length;
  cout << "length = " << length << endl;

  double x4, y4;
  group.x3 = x4;
  group.y3 = y4;
  NormalizedC(group);
  cout << "normalized = (" << x4 << "," << y4 << ")" << endl;

  double x2 = 2.0, y2 = 1.0;
  cout << "Cartesian Point 2: (" << x2 << "," << y2 << ")" << endl;
  group2.x = x2;
  group2.y = y2;
  double dotProduct = DotProductC(group, group2);
  cout << "dot product = " << dotProduct << endl;

  double x5, y5;
  group2.x2 = x5;
  group2.y2 = y5;
  SumC(group, group2);
  cout << "sum = (" << x5 << "," << y5 << ")" << endl;

  return 0;
}

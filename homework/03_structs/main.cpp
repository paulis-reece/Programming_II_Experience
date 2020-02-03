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
  double x1 = 1.0, y1 = 2.0;
  cout << "Cartesian Point 1: (" << x1 << "," << y1 << ")" << endl;
  double ppRadius, ppTheta;
  group.x1 = x1;
  group.y1 = y1;
  group.radius = ppRadius;
  group.theta = ppTheta;
  CartesianToPolar(group);
  cout << "Polar Point: (" << nextGroup.radius << "," << nextGroup.theta << ")"
       << endl;

  double x3, y3;
  nextGroup.x = x3;
  nextGroup.y = y3;
  PolarToCartesian(nextGroup);
  cout << "Cartesian Point 3: (" << nextGroup.x << "," << nextGroup.y << ")"
       << endl;
  group.x2 = nextGroup.x;
  group.y2 = nextGroup.y;
  double length = LengthC(group);
  group.length = length;
  cout << "length = " << group.length << endl;

  double x4, y4;
  group.x3 = x4;
  group.y3 = y4;
  NormalizedC(group);
  cout << "normalized = (" << group.x3 << "," << group.y3 << ")" << endl;

  double x2 = 2.0, y2 = 1.0;
  cout << "Cartesian Point 2: (" << x2 << "," << y2 << ")" << endl;
  group.x4 = x2;
  group.y4 = y2;
  group.length = DotProductC(group);
  double dotProduct = group.length;
  cout << "dot product = " << dotProduct << endl;

  double x5, y5;
  group.x5 = x5;
  group.y5 = y5;
  SumC(group);
  cout << "sum = (" << group.x5 << "," << group.y5 << ")" << endl;

  return 0;
}

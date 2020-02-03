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
  group.x1 = x1;
  group.y1 = y1;
  cout << "Cartesian Point 1: (" << group.x1 << "," << group.y1 << ")" << endl;
  double ppRadius, ppTheta;
  nextGroup.radius = ppRadius;
  nextGroup.theta = ppTheta;
  CartesianToPolar(group);
  cout << "Polar Point: (" << nextGroup.radius << "," << nextGroup.theta << ")"
       << endl;
  double x3, y3;
  group.x2 = x3;
  group.y2 = y3;
  PolarToCartesian(nextGroup);
  cout << "Cartesian Point 3: (" << group.x2 << "," << group.x2 << ")" << endl;
  cout << "length = " << LengthC(group) << endl;
  double x4, y4;
  group.x3 = x4;
  group.y3 = y4;
  NormalizedC(group);
  cout << "normalized = (" << group.x3 << "," << group.y3 << ")" << endl;
  double x2 = 2.0, y2 = 1.0;
  nextGroup.x = x2;
  nextGroup.y = y2;
  cout << "Cartesian Point 2: (" << nextGroup.x << "," << nextGroup.y << ")"
       << endl;
  double dotProduct = DotProductC(group, nextGroup);
  cout << "dot product = " << dotProduct << endl;
  double x5, y5;
  group.x4 = x5;
  group.y4 = y5;
  SumC(group, nextGroup);
  cout << "sum = (" << group.x4 << "," << group.y4 << ")" << endl;

  return 0;
}

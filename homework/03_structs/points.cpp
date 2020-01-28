/*************************************************************************
 *
 * Homework Assignment: struct for polar and cartesian points
 *
 * File Name:       points.cpp
 * Name:            reklre
 * Course:          CPTR 142
 * Date:            January 17, 2020
 *
 */

#include <cmath>    // for trig functions
#include <iostream> // for cin and cout
using namespace std;

#include "points.h"
void CartesianToPolar(CartesianPoint) {
  nextGroup.radius = sqrt(pow(group.x, 2) + pow(group.y, 2));
  nextGroup.theta = atan2(group.y, group.x);
}

void PolarToCartesian(PolarPoint) {
  group.x = nextGroup.radius * cos(nextGroup.theta);
  group.y = nextGroup.radius * sin(nextGroup.theta);
}

double LengthC(CartesianPoint) {
  return (sqrt(pow(group.x, 2.0) + pow(group.y, 2.0)));
}

void NormalizedC(CartesianPoint2) {
  double length = LengthC(group2.x2, group2.y2);
  group2.x2 = group2.x2 / length;
  group2.y2 = group2.y2 / length;
}

double DotProductC(CartesianPoint, CartesianPoint2) {
  return (group.x * group2.x2 + group.y * group2.y2);
}

void SumC(CartesianPoint, CartesianPoint2) {
  group2.x2 = group.x + group2.x2;
  group2.y2 = group.x + group2.y2;
}
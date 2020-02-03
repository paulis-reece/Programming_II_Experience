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
PolarPoint CartesianToPolar(CartesianPoint group) {
  PolarPoint nextGroup;
  nextGroup.radius = sqrt(pow(group.x, 2) + pow(group.y, 2));
  nextGroup.theta = atan2(group.y, group.x);
  return nextGroup;
}

CartesianPoint PolarToCartesian(PolarPoint nextGroup) {
  CartesianPoint group;
  group.x2 = nextGroup.radius * cos(nextGroup.theta);
  group.y2 = nextGroup.radius * sin(nextGroup.theta);
  return group;
}

double LengthC(CartesianPoint group) {
  double length = 0;
  return length = (sqrt(pow(group.x, 2.0) + pow(group.y, 2.0)));
}

CartesianPoint NormalizedC(CartesianPoint group) {
  group.x3 = group.x2 / group.length;
  group.y3 = group.y2 / group.length;
  return group;
}

double DotProductC(CartesianPoint group, CartesianPoint2 group2) {
  return group.length = (group.x * group2.x + group.y * group2.y);
}

void SumC(CartesianPoint group, CartesianPoint2 group2) {
  group2.x2 = group.x + group2.x;
  group2.y2 = group.x + group2.y;
}
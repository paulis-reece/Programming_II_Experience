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
  nextGroup.radius = sqrt(pow(group.x1, 2) + pow(group.y1, 2));
  nextGroup.theta = atan2(group.y1, group.x1);
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
  return length = (sqrt(pow(group.x1, 2.0) + pow(group.y1, 2.0)));
}

CartesianPoint NormalizedC(CartesianPoint group) {
  group.x3 = group.x2 / group.length;
  group.y3 = group.y2 / group.length;
  return group;
}

double DotProductC(CartesianPoint group) {
  return group.length = (group.x1 * group.x4 + group.y1 * group.y4);
}

void SumC(CartesianPoint group) {
  group.x5 = group.x1 + group.x5;
  group.y5 = group.x1 + group.y5;
}
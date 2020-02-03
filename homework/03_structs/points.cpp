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
PolarPoint CartesianToPolar(CartesianPoint XY) {
  PolarPoint groups;
  groups.radius = sqrt(pow(XY.x1, 2) + pow(XY.y1, 2));
  groups.theta = atan2(XY.y1, XY.x1);
  return groups;
}

CartesianPoint PolarToCartesian(PolarPoint XY) {
  CartesianPoint groups;
  groups.x2 = XY.radius * cos(XY.theta);
  groups.y2 = XY.radius * sin(XY.theta);
  return groups;
}

double LengthC(CartesianPoint XY) {
  return (sqrt(pow(XY.x1, 2.0) + pow(XY.x1, 2.0)));
}

CartesianPoint NormalizedC(CartesianPoint XY) {
  XY.x3 = XY.x1 / LengthC(XY);
  XY.y3 = XY.y1 / LengthC(XY);
  return XY;
}

double DotProductC(CartesianPoint XY) {
  return (XY.x1 * XY.x5 + XY.y1 * XY.y5);
}

CartesianPoint SumC(CartesianPoint XY) {
  XY.x4 = XY.x1 + XY.x5;
  XY.y4 = XY.y1 + XY.y5;
  return XY;
}
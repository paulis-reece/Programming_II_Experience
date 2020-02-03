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
  groups.radius = sqrt(pow(XY.x, 2) + pow(XY.y, 2));
  groups.theta = atan2(XY.y, XY.x);
  return groups;
}

CartesianPoint PolarToCartesian(PolarPoint XY) {
  CartesianPoint groups;
  groups.x = XY.radius * cos(XY.theta);
  groups.y = XY.radius * sin(XY.theta);
  return groups;
}

double LengthC(CartesianPoint XY) {
  return (sqrt(pow(XY.x, 2.0) + pow(XY.y, 2.0)));
}

CartesianPoint NormalizedC(CartesianPoint XY) {
  XY.x3 = XY.x / LengthC(XY);
  XY.y3 = XY.y / LengthC(XY);
  return XY;
}

double DotProductC(CartesianPoint XY, CartesianPoint YX) {
  return (XY.x * YX.x5 + XY.y * YX.y5);
}

CartesianPoint SumC(CartesianPoint XY, CartesianPoint YX) {
  XY.x4 = XY.x + YX.x5;
  XY.y4 = XY.y + YX.y5;
  return XY;
}
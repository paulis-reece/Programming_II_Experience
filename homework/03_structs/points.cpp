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

struct CartesianPoint {
  double x;
  double y;
  double x2;
  double y2;
};
CartesianPoint group;
CartesianPoint group1;
struct PolarPoint {
  double radius;
  double theta;
};
PolarPoint nextGroup;
void CartesianToPolar(CartesianPoint) {
  nextGroup.radius = sqrt(pow(group.x, 2) + pow(group.y, 2));
  nextGroup.theta = atan2(group.y, group.x);
}

void PolarToCartesian(PolarPoint) {
  group.x = nextGroup.radius * cos(nextGroup.theta);
  group.y = nextGroup.radius * sin(nextGroup.theta);
}

double LengthC(CartesianPoint) { return (sqrt(pow(group.x, 2.0) + pow(group.y, 2.0))); }

void NormalizedC(CartesianPoint) {
  double length = LengthC(group.x2, group.y2);
  group.x2 = group.x2 / length;
  group.y2 = group.y2 / length;
}

double DotProductC(CartesianPoint) {
  return (group.x * group1.x + group.y * group1.y);
}

void SumC(double firstX, double firstY, double secondX, double secondY,
          double &resultX, double &resultY) {
  group1.x2 = group.x + group1.x;
  group1.y2 = group.x + group1.y;
}
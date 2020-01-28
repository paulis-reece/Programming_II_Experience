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
void CartesianToPolar(double x1, double y1, double ppRadius, double ppTheta) {
  nextGroup.radius = sqrt(pow(group.x, 2) + pow(group.y, 2));
  nextGroup.theta = atan2(group.y, group.x);
}

void PolarToCartesian(double ppRadius, double ppTheta, double x3, double y3) {
  group.x = nextGroup.radius * cos(nextGroup.theta);
  group.y = nextGroup.radius * sin(nextGroup.theta);
}

double LengthC(double x1, double y1) {
  return (sqrt(pow(group.x, 2.0) + pow(group.y, 2.0)));
}

void NormalizedC(double x2, double y2) {
  double length = LengthC(group.x2, group.y2);
  group.x2 = group.x2 / length;
  group.y2 = group.y2 / length;
}

double DotProductC(double x, double y) {
  return (group.x * group1.x + group.y * group1.y);
}

void SumC(double firstX, double firstY, double secondX, double secondY,
          double &resultX, double &resultY) {
  group1.x2 = group.x + group1.x;
  group1.y2 = group.x + group1.y;
}
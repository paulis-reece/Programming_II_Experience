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
void CartesianToPolar(double x, double y, double &radius, double &theta) {
  PolarPoint nextGroup;
  radius = sqrt(pow(x, 2) + pow(y, 2));
  theta = atan2(y, x);
}

void PolarToCartesian(double radius, double theta, double &x, double &y) {
  x = radius * cos(theta);
  y = radius * sin(theta);
}

double LengthC(double x, double y) {
  double length = 0;
  return length = (sqrt(pow(x, 2.0) + pow(y, 2.0)));
}

void NormalizedC(double xIn, double yIn, double &xOut, double &yOut) {
  xOut = xIn / LengthC(xIn, yIn);
  yOut = yIn / LengthC(xIn, yIn);
}

double DotProductC(double firstX, double firstY, double secondX,
                   double secondy) {
  double length = 0;
  return length = (firstX * secondX + firstY * secondy);
}

void SumC(double firstX, double firstY, double secondX, double secondY,
          double &resultX, double &resultY) {
  resultX = firstX + secondX;
  resultY = secondY + resultY;
}
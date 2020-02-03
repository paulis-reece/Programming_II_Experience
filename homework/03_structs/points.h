/*************************************************************************
 *
 * Homework Assignment: struct for polar and cartesian points
 *
 * File Name:       points.h
 * Name:            reklre
 * Course:          cp1TR 142
 * Date:            January 17, 2020
 *
 */
#ifndef POINTS_H
#define POINTS_H

//  function declarations (prototypes)

struct CartesianPoint {
  double x1;
  double y1;
  double x2;
  double y2;
  double x3;
  double y3;
  double x4;
  double y4;
  double x5;
  double y5;
  double radius;
  double theta;
  double length;
};
struct PolarPoint {
  double x;
  double y;
  double radius;
  double theta;
};
PolarPoint CartesianToPolar(CartesianPoint group);
CartesianPoint PolarToCartesian(PolarPoint nextGroup);
double LengthC(CartesianPoint group);
CartesianPoint NormalizedC(CartesianPoint group);
double DotProductC(CartesianPoint group);
void SumC(CartesianPoint group);
#endif // POINTS_H

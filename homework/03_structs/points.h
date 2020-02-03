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
  double x;
  double y;
  double x2;
  double y2;
  double x3;
  double y3;
  double radius;
  double theta;
  double length;
};
struct CartesianPoint2 {
  double x;
  double y;
  double x2;
  double y2;
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
double DotProductC(CartesianPoint group, CartesianPoint2 group2);
void SumC(CartesianPoint group, CartesianPoint2 group2);
#endif // POINTS_H

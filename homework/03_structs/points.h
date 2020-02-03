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
PolarPoint CartesianToPolar(CartesianPoint XY);
CartesianPoint PolarToCartesian(PolarPoint XY);
double LengthC(CartesianPoint XY);
CartesianPoint NormalizedC(CartesianPoint XY);
double DotProductC(CartesianPoint XY, PolarPoint YX);
CartesianPoint SumC(CartesianPoint XY, PolarPoint YX);
#endif // POINTS_H

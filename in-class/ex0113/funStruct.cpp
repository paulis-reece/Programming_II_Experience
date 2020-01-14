/*************************************************************************
 *
 * In-Class Exercise: Structures and Functions
 *
 * File Name: funStruct.cpp
 * Username:   reklre
 * Username:  ?
 * Course:    CPTR 142
 */

#include <iostream> 	// cin and cout
#include <iomanip>      // setprecision()
#include <cmath>        // pow

using namespace std;

struct CPoint { double x; double y; };
struct PPoint { double radius; double theta; };

// TODO: modify function to take a CPoint as an argument and return a PPoint as a result
PPoint convert(CPoint c) {
    PPoint p;
    p.radius = sqrt(pow(c.x, 2) + pow(c.y, 2));
    p.theta = atan(c.y / c.x) * 180 / M_PI;
}
// main entry point
int main() {
	// use the new struct
	CPoint cartesianPoint = { 12.0, 5.0 };
	PPoint polarPoint;

    // TODO: modify call to pass a CPoint and get back a PPoint
    convert(cartesianPoint);

	cout << fixed << showpoint << setprecision(2)
        << "Cartesian (" << cartesianPoint.x << ", " << cartesianPoint.y << ") = "
        << "Polar (" << polarPoint.radius << ", " << polarPoint.theta << " degrees)" << endl;

    return 0;
}

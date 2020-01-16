/*************************************************************************
 *
 * In-Class Exercise: Structures and Functions
 *
 * File Name: funStruct.cpp
 * Username:  ?
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
PPoint convert(CPoint cPoint) {
    PPoint returnValue;
    returnValue.radius = sqrt(pow(cPoint.x, 2) + pow(cPoint.y, 2));
    returnValue.theta = atan(cPoint.y / cPoint.x) * 180 / M_PI;
    return returnValue;
}
// main entry point
int main() {
	// use the new struct
	CPoint cartesianPoint = { 12.0, 5.0 };
	PPoint polarPoint;

    // TODO: modify call to pass a CPoint and get back a PPoint
    polarPoint = convert(cartesianPoint);

	cout << fixed << showpoint << setprecision(2)
        << "Cartesian (" << cartesianPoint.x << ", " << cartesianPoint.y << ") = "
        << "Polar (" << polarPoint.radius << ", " << polarPoint.theta << " degrees)" << endl;

    return 0;
}

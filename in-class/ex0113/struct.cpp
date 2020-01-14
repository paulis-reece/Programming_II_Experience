/*************************************************************************
 *
 * In-Class Exercise: Structures
 *
 * File Name: struct.cpp
 * Username:  reklre
 * Username:  ?
 * Course:    CPTR 142
 */

#include <iostream> 	// cin and cout
#include <cmath>        // pow

using namespace std;

// TODO: define a struct named Point that contains two integer data members, x and y.
struct Point{
int x;
int y;
};
// main entry point
int main() {
	// use the new struct
	Point source = { 0, 0 };
	Point target;
	double distance;	// sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))
	// ask for coordinates
	cout << "Enter x coordinate: ";
	cin >> target.x;
	cout << "Enter y coordinate: ";
	cin >> target.y ;

	// TODO: calculate distance
	distance = sqrt(pow(target.x, source.x) + pow(target.y, source.y));

	cout << "Distance from source to target is " << distance << endl;

    return 0;
}


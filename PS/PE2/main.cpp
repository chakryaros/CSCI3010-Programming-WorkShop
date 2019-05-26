#include <iostream>
#include "Point.h"

// based on examples originally by Steve Gribble (UW)

using namespace std;

int main(int argc, char **argv){
	Point p1(1, 2, 3);
	Point p2(4, 6, 8);

	cout << "p1 is: (" << p1.get_x() << ", ";
	cout << p1.get_y() << "," << p1.get_z() << ")" << endl;

	cout << "p2 is: (" << p2.get_x() << ", ";
	cout << p2.get_y() <<  "," << p2.get_z() << ")" << endl;

	cout << "dist : " << p1.Distance(p2) << endl;

	Point p3(0, -2, 17);
	cout << "p3 is: (" << p3.get_x() << ", ";
	cout << p3.get_y() <<  "," << p3.get_z() << ")" << endl;


	cout << "dist : " << p1.Distance(p3) << endl;

	return 0;
}

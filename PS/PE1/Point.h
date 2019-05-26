/**
Chakrya Ros
Homework 1
This program is to create the point object and calculate the distance
between the two coordinations.
*/


#ifndef POINT_H
#define POINT_H
#include <iostream>

using namespace std;


class point
{
	public:
		point(const int x1, const int y1, const int z1) //constructor
		point(vector<int> V_point);

		double Distace(const Point &other) const; //member fuction

	private:
		//data member
		int x;
		int y;
		int z;
};
#endif
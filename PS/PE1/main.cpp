/**
Chakrya Ros
Homework 1
This program is to create the point object and calculate the distance
between the two coordinations.
*/
#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
	point a; //declare an object 
	float pointX=5;
	float pointY=8;
	float pointX1=7;
	float pointY1=6;
	cout<<"The distance between coordinate("<<pointX<<","<<pointY<<") and coordinate("<<pointX1<<","<<pointY1<<") = ";
	cout<<a.find_distance(pointX, pointY, pointX1, pointY1)<<endl;

	float x1, y1, x2, y2; //declare variable of point

	//ask the user input the each point
	cout<<"Enter the point x1\n";
	cin>>x1;
	cout<<"Enter the point y1\n";
	cin>>y1;
	cout<<"Enter the point x2\n";
	cin>>x2;
	cout<<"Enter the point y2\n";
	cin>>y2;
	cout<<"The distance between coordinate("<<x1<<","<<y1<<") and coordinate("<<x2<<","<<y2<<") = ";
	cout<<a.find_distance(x1, y1, x2, y2)<<endl;

	return 0;
}
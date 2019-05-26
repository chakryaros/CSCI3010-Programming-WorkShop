/**
Chakrya Ros
Homework 1
This program is to create the point object and calculate the distance
between the two coordinations.
*/

#include "Point.h"
#include <math.h>
#include <cmath>


/**
    default constructor that take no argument
    @set all variable to zero
*/
point::point(const int x1, const int y1, const int z1)
{
	x = x1;
	y = y1;
	z = z1;
}
/**
    Calcuate the distance between the two points

    @param points. The points of coordination.
    @return distance.
*/
double point::Distance(point &other)
{
	// x = abs(x1 - x2);
	// y = (y1 - y2);
	// float dist =0;
	// dist = sqrt(pow(x, 2) + pow(y, 2));
	// return dist;

    double distance = (x_ - other.get_x()) * (x_ - other.get_x());
    distance += (y_ - other.y_) * (y_ - other.y_);
    distance += (z_ - other.z_) * (z_ - other.z_);
    return sqrt(distance);
}
/**
    get point at x
    @return float x
*/
float point::getX()
{
	return x;
}
/**
    set point at x
    @return nothing
*/
void point::setX(float x1)
{
	x = x1;
}
/**
    get point at y
    @return float y
*/
float point::getY()
{
	return y;
}
/**
    set point at y
    @return nothing
*/
void point::setY(float y1)
{
	y = y1;
}
/**
    get point at z
    @return float z
*/
float point::getZ()
{
	return z;
}
/**
    set point at z
    @return nothing
*/
void point::setZ(float z1)
{
	z = z1;
}
#include <cmath>
#include "Point.h"

// based on examples originally by Steve Gribble (UW)


/**
  Creates a new Point object with coordinates x, y, and z
  @param x int x coordinate
  @param y int y coordinate
  @param z int z coordinate
*/
Point::Point(const int x, const int y, const int z) {
  x_ = x;
  y_ = y;
  z_ = z;
}

/**
  Calculates the distance between this point and another Point.
  @param other Point object to calculate the distance to
*/
double Point::Distance(const Point &other) const {
  // We can access p's x_ and y_ variables either through the
  // get_x(), get_y() accessor functions, or the x_, y_ private
  // member variables directly, since we're in a member function of
  // the same class.
  double distance = (x_ - other.get_x()) * (x_ - other.get_x());
  distance += (y_ - other.y_) * (y_ - other.y_);
  distance += (z_ - other.z_) * (z_ - other.z_);
  return sqrt(distance);
}


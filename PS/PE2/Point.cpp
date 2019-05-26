#include <cmath>
#include <math.h>
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

Point::Point(vector<int> vec)
{
  vec = point;
} 
Point::Point(int n_dim)
{
  n = n_dim;
}

/**
  Calculates the distance between this point and another Point.
  @param other Point object to calculate the distance to
*/
double Point::Distance(vector<int> a, vertor<int> b) const {
  // We can access p's x_ and y_ variables either through the
  // get_x(), get_y() accessor functions, or the x_, y_ private
  // member variables directly, since we're in a member function of
  // the same class.

  if(a.size() !=b.size())
  {
    throw std::invalid_argument("Different size");
  }
  else
  {
    double distance = 0
    double diff, total_diff;
    for(int i=0; i<a.size(); i++)
    {
       diff= abs(b[i] - a[i]);
       total_diff += different * different;
    }
    return distance = sqrt(total_diff);
  }
  
}


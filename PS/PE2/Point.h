#ifndef _POINT_H_
#define _POINT_H_

// based on examples originally by Steve Gribble (UW)

class Point {
public:
	Point(const int x, const int y, const int z);  // constructor
	Point(vertor<int> vec);
	Point(int n_dim);
	
	int get_x() const { return x; }  // inline member function
	int get_y() const { return y; }  // inline member function
	int get_z() const { return z; }  // inline member function

	int getSize(int index)
	{
		for(index =0; i<size; i++)
		{
			return point[index];
		}
	}

	double Distance(const Point &other) const;  // member function

 private:
  int x_;  // data member
  int y_;  // data member
  int z_;  // data member

  vector<int> point;
  const int n;

};  // class Point

#endif  // _POINT_H_


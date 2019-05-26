/*
PE 5 - Rectangle.cpp

This was written by James McDonald and Chakrya Ros.

*/

#include "Rectangle.h"
#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

bool operator==(const Point& p1, const Point& p2)
{
	return p1.x == p2.x && p1.y == p2.y;
}

  // p1 is the upper left corner
  // p2 is the lower right corner
Rectangle::Rectangle(Point p1, Point p2){
	
	p1_ = p1;
	p2_ = p2;
}

  // get the width of the rectangle  
  // between p1.x and p2.x
int Rectangle::GetWidth(){
	
	return p2_.x - p1_.x;
}
  // get the height of the rectangle
  // between p2.y and p2.y
int Rectangle::GetHeight(){
	
	return p2_.y - p1_.y;
}


  // returns true iff this rectangle shares any points with the other one
bool Rectangle::Overlaps(Rectangle& other){
	
	if (other.get_p1() == p1_ || other.get_p1() == p2_){
		return true;
	}	
	
	else if (other.get_p2() == p1_ || other.get_p2() == p2_){
		return true;
	}
	else {
		return false;
	}
}

  // returns the area of this rectangle
int Rectangle::CalculateArea()
{
	int area = GetHeight() * GetWidth();
	return area;
}

  // moves the bottom left coordinate down one and to the left one
  // moves the upper right coordinate up one and to the right one
void Rectangle::Expand()
{
	p1_.y = p1_.y - 1; //move down one 
	p1_.x = p1_.x - 1;	// move left one

	p2_.y = p2_.y + 1; //move up one
	p2_.x = p2_.x + 1; // move to right one


}

  // moves the bottom left coordinate up one and to the right one
  // moves the upper right coordinate down one and to the left one
void Rectangle::Shrink()
{
	p1_.y = p1_.y + 1; //move up one 
	p1_.x = p1_.x + 1;	// move right one

	p2_.y = p2_.y - 1; //move donw one
	p2_.x = p2_.x - 1; // move to left one
}

unsigned int Factorial( unsigned int number ){
	int accumulator = number;
	if (number == 1){
		return 1;
	}
	else {
		while (number > 1){
			accumulator = accumulator * (number - 1);
			cout << accumulator << endl;
			number--;
		}	
		return accumulator;
	}
}
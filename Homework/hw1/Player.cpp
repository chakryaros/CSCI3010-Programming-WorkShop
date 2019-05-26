//Name:Chakrya ros
//HomeWork1
#include <iostream>
#include <sstream>
#include "Player.h"
#include "Maze.h"

using namespace std;

/**
   	Player construction to declare the new player
   	@ string name, to get player's name
   	@ bool is_humnam, to get ture or false
*/
	Player::Player(const std::string name, const bool is_human)  // constructor
	{
		name_ = name;
		is_human_ = is_human;
	}
/**
    to update the point of player
    @int x, the number of point
    return NONE;
*/
	void Player::ChangePoints(const int x)
	{
		points_ = points_ + x;
	} 

/**
   	write a function to set position of player
   	@ param Position, to get row and colomn position
   	@ return none
*/
	void Player::SetPosition(Position pos)
	{
		pos_.row = pos.row;
		pos_.col = pos.col;
	}

/**
   	write a function to get string of the position player
   	@ param Position, to check position is up right down and left
   	@ return string 
*/
	std::string Player::ToRelativePosition(Position other)
	{
		Position current = pos_;
		if((current.row == other.row) && (other.col==pos_.col + 1))
		{
			return "RIGHT";
		}
		else if(((current.row -1) == other.row) && (other.col==pos_.col-1))
		{
			return "UP";
		}
		else if(((current.row +1)== other.row) && (other.col==pos_.col +1))
		{
			return "DOWN";
		}
		else if(((current.row)== other.row) && (other.col==pos_.col -1))
		{
			return "LEFT";
		}
	}
/**
   	write a function to print out the player's name and points
   	@ param none
   	@ return output
*/
	std::string Player::Stringify()
	{
		cout << name_ << " has "<< points_ << " points."<<endl;
	}



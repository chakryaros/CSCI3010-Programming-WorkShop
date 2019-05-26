/**
Chakrya Ros
Homework 1
This is Maze.cpp to implement the function in the maze
*/
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "Maze.h"
#include "Player.h"

using namespace std;

/**
    to get string from each square
    @param SquareType sq, to check wall, exit, human, treasure, enemy
    @return string of each square
*/
std::string SquareTypeStringify(SquareType sq)
{
	if(sq==SquareType::Wall)
	{
		return "\u2B1B";
	}
	else if(sq==SquareType::Exit)
	{
		return "\xE2\x9C\x85";
	}
	else if(sq==SquareType::Empty)
	{
		return "\xE2\xAC\x9C";
	}
	else if(sq==SquareType::Human)
	{
		return "\xF0\x9F\x8E\x85";
	}
	else if(sq==SquareType::Enemy)
	{
		return "\xF0\x9F\x91\xBB";
	}
	else if(sq==SquareType::Treasure)
	{
		return "\xF0\x9F\x8E\x89";
	}
}
/**
    to create the board 4 by 4 that set up the wall, human, treasure and exit,
    and also the set up the position of player to start 
    @param NONE
    @return NONE
*/
Board::Board()
{
	srand(time(NULL)); //set random
	int percent = rand() % 100 + 1; //random for 1 - 100
	rows_ = get_rows();  //get the number of row
	cols_ = get_cols();	 //get the number of colun
	for(int i=0; i<rows_; i++)  //loop through row
	{
		for(int j=0; j<cols_; j++)	//loop through colume
		{
			arr_[i][j]=SquareType::Empty; //set square to empty
			int percent = rand() % 100 + 1; //random for 1 - 100
			if(i==0 && j==0) //start position
			{
				continue;
			}
			if(i==rows_ && j==cols_) //exit position
			{
				continue;
			}
			if(percent <= 10 && arr_[i][j] == SquareType::Empty) //set tresure in square
			{
				arr_[i][j]=SquareType::Treasure;
			}
			if(percent <= 20 && arr_[i][j] == SquareType::Empty) //set wall in square
			{
				arr_[i][j]=SquareType::Wall;
			}

		}
	}
	arr_[0][0] = SquareType::Human; //set human at begining position
	arr_[rows_ -1][cols_ -1] = SquareType::Exit; //set exit
}

/**
    to get sqaure value from position
    @param Positiion pos, get position of row and colume
    @return SquareType array
*/
SquareType Board::get_square_value(Position pos) const
{
		
	return arr_[pos.row][pos.col];
}

/**
    to set sqaure value from position
    @param Positiion pos, get position of row and colume
    @param SquareType value, set each square into position
    @return none
*/
void Board::SetSquareValue(Position pos, SquareType value)
{
	arr_[pos.row][pos.col] = value;
}

/**
    write a function to allow valid move for the player and add into vector
    @param Player point, 
    @return position vector
*/
vector<Position> Board::GetMoves(Player *p)
{
	vector<Position> couldMove; //declare the vecter for possible move
	Position temp;
	temp = p->get_position(); //to get position
	temp.row +=1; //to check row down
	if(p->get_position().row < 3 && get_square_value(temp) != SquareType::Wall)
	{
		couldMove.push_back(temp);
	}

	temp = p->get_position();
	temp.row -=1; // to check row up
	if(p->get_position().row > 0 && get_square_value(temp) != SquareType::Wall)
	{
		couldMove.push_back(temp);
	}

	temp = p->get_position();
	temp.col +=1; //to check colomn down
	if(p->get_position().col < 3 && get_square_value(temp) != SquareType::Wall)
	{
		couldMove.push_back(temp);
	}

	temp = p->get_position();
	temp.col -=1; //to check colomn up
	if(p->get_position().col >0 && get_square_value(temp) != SquareType::Wall)
	{
		couldMove.push_back(temp);
	}

	return couldMove;

}

/**
    write to move player around the board to find the exit and tresure
    @param Player point
    @param Position pos
    @return none
*/
bool Board::MovePlayer(Player *p, Position pos)
{
	
	arr_[p->get_position().row][p->get_position().col] = SquareType::Empty;
	p->SetPosition(pos); //set player to new position
	arr_[pos.row][pos.col] = SquareType::Empty;
	return true;
	
}
/**
    write exit functioin to allow player to find exit
    @param none
    @return none
*/
SquareType Board::GetExitOccupant()
{
	return SquareType::Exit;
}

/**
    to print the board
    @param ostream , to output to screan
    @param Board b, 
    @print output
*/
std::ostream& operator<<(std::ostream& os, const Board &b)
{
	for(int i=0; i<b.get_rows(); i++)
	{
		for(int j=0; j<b.get_cols(); j++)
		{
			Position temp;
			temp.row = i;
			temp.col = j;
			string a = SquareTypeStringify(b.get_square_value(temp));
			os << a <<" ";
		}
		os << endl;
	}
	return os;
}


//constructor mae
Maze::Maze()
{
	board_ = new Board();
	turn_count_ =0;

}

/**
    to set up newgame with player and enermies
    @param Player, to set player postioin and add to vector
    @param int enemies, to set up enmies random in board
    @return none
*/
void Maze::NewGame(Player *human, const int enemies)
{
	Position newPlayer;
	newPlayer.row =0;
	newPlayer.col =0;
	human->SetPosition(newPlayer); //set position for human
	players_.push_back(human);		//add player to vector

	int k =0;
	int randomCol;
	int randomRow;
	board_ = new Board();

	while(k < enemies)
	{
		randomRow = (rand() % board_->get_rows()); //get random for row
		randomCol = (rand() % board_->get_cols()); //get random for column
		Position randomPos;
		randomPos.row = randomRow;
		randomPos.col = randomCol;
		
		if(board_->get_square_value(randomPos) == SquareType::Empty) //to check if the board have empty
		{
			Player * newEnemy = new Player("enemy", false); //create player for enemy
			newEnemy->SetPosition(randomPos); //set random position in board
			board_->SetSquareValue(randomPos, SquareType::Enemy); //set enemy on empty square
			players_.push_back(newEnemy); //add enemy to vector player
			k++;	//increment 
		}
	} 

}

/**
    write this function to take turn for player
    @param none
    @return none
*/
void Maze::TakeTurn(Player *p)
{
	cout<<"test"<<endl;
	cout<<p->get_name()<<" can go ";
	vector<Position> p_m = board_->GetMoves(p);
	string choice;
	Position choice_pos;
	bool wrong_choice = true;
	while(wrong_choice)
	{
		for(int i=0; i<p_m.size(); i++)
		{
			cout<<p->ToRelativePosition(p_m[i])<<" ";

		}
		cout<<endl;
		cout<<"Please enter your choice: ";
		cin >> choice;
		for(int i=0; i<p_m.size(); i++)
		{
			if(choice==p->ToRelativePosition(p_m[i]))
			{
				choice_pos=p_m[i];
				wrong_choice=false;
			}
		}
	}
	turn_count_++;

	if(board_->get_square_value(choice_pos)==SquareType::Enemy)
	{
		for(int i=0; i<players_.size(); i++)
		{
			if(players_[i]->is_human())
			{
				players_.erase(players_.begin() +i);
				break;
			}
		}
	}
	else if(board_->get_square_value(choice_pos)==SquareType:: Treasure)
	{
		p->ChangePoints(100);
		//move player
		board_->MovePlayer(p, choice_pos);
	}
	else if(board_->get_square_value(choice_pos)==SquareType::Exit)
	{
		p->ChangePoints(1);
		board_->MovePlayer(p, choice_pos);
	}
	else
	{
		board_->MovePlayer(p, choice_pos);
	}

}


/**
    write this function to take turn between player and enemy
    @param none
    @return Player
*/
Player * Maze::GetNextPlayer()
{
	return players_[turn_count_%players_.size()];
}

/**
    write this function to check if the game is over or win
    @param none
    @return true for human get exit and or false if human get into enemy
*/
bool Maze::IsGameOver()
{
	
	for(int i=0; i<players_.size(); i++)
	{
		if(players_[i]->is_human())
		{
			if(players_[i]->get_position().col==3 && players_[i]->get_position().row ==3)
			{
				return true;
			}
			return false;
		}
	}
	return true;
}

/**
    to report players and their point
    @param NONE
    @return the string of their name and points
*/
string Maze::GenerateReport()
{
	//loop to get player name and point and print output
	for(int i=0; i<players_.size(); i++)
	{
		cout<<players_[i]->get_name() <<" has ";
		cout<<players_[i]->get_points()<<" points."<<endl;
	}
}


std::ostream& operator<<(std::ostream& os, const Maze &m)
{
	
	os << *m.board_;
		
	os << endl;
	return os;
}







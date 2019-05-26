/**
Chakrya Ros
Homework 1
This is main function to test functions
*/
#include <iostream>
#include "Player.h"
#include "Maze.h"

using namespace std;

int main()
{
	

	Maze* game = new Maze();
	Player *player1 = new Player("Yanit", false);
	game->NewGame(player1, 1);
	while(game->IsGameOver()==true)
	{
		 cout<<*game;
		 Player * p;
		 p = game->GetNextPlayer();
		 game->TakeTurn(p);
	 	 game->GenerateReport();
	}
	return 0;
}




























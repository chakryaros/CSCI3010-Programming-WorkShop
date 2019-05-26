/**
 Chakrya Ros
 Homework 3
 This is main function to test functions
 */
#include "ElectoralMap.h"
#include "Election.h"
#include "TextUI.h"
#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char *argv[])
{
   
    
    TextUI* main_Menu = new TextUI() ; //create TextUI object;
    string choice; //declare the string for choice
    while(choice!= "0") //use while loop to check use's choice. If user choice to 0, terminate the loop
    {
        choice = main_Menu->MainMenu(); //call the MainMenu function to return use's choice
        main_Menu->RouteChoice(choice); //call the RouteChoice
        
    }
    return 0;
    
}

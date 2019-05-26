#ifndef _TEXT_UI_H_
#define _TEXT_UI_H_
#include "Election.h"
#include <iostream>
#include <vector>

using namespace std;

/** 
  Write the object class to print the main and prompt the user to enter chioce
*/


class TextUI {
public:
  TextUI();

  string MainMenu();
  vector <Candidate*> register_candidate(

  void RouteChoice(string choice);

private:
  vector<string> main_menu_;
};


#endif  // _TEXT_UI_H_

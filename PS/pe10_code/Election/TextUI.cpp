#include "TextUI.h"
#include "ElectoralMap.h"
#include "Election.h"
#include <iostream>
#include <vector>
#include <map>

using namespace std;
/*
    construct of TextUI
    add the string to vector string
 
*/
TextUI::TextUI() {
    // set up the main menu
    
    main_menu_.push_back("direct");
    main_menu_.push_back("representative");
    main_menu_.push_back("0");
}

/*
    ask user to enter input
    @return string

 */
std::string TextUI::MainMenu() {
    cout <<"What kind of election should we have (direct or representative, 0 to stop)?";
    string str_choice;
    cin >> str_choice;
    for(int i=0; i<main_menu_.size(); i++)
    {
        if(main_menu_[i]==str_choice)
        {
            return main_menu_[i];
        }
    }
    if(str_choice != "direct" || str_choice != "representative" || "0" )
    {
        cout << "Enter direct or representative, 0 to stop " <<endl;
        cin >> str_choice;
        for(int i=0; i<main_menu_.size(); i++)
        {
            if(main_menu_[i]==str_choice)
            {
                return main_menu_[i];
            }
        }
    }
}
/*
   write RouteChoice to let user to choise their chcice and get to vote direct and represtative election.
 @return string
 
 */
void TextUI::RouteChoice(string choice)
{
    if(choice=="direct")
    {
        Election election;
        election.Display_electoralMap();
        election.printCandidate();
        election.get_Election_vote();
        
    }
    else if(choice=="representative")
    {
        RepresentativeElection representative_Election;
        representative_Election.Display_electoralMap();
        representative_Election.printCandidate();
        representative_Election.get_representative_vote();
        
        
    }
}

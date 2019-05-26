#include "Election.h"
#include "TextUI.h"

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>      // std::setw

using namespace std;


Candidate::Candidate(string name, Party party, int id)
{
    name_ = name;
    party_ = party;
    id_ = id;
}
string Candidate::get_name() const
{
    return name_;
}
Party Candidate::get_party() const
{
    return party_;
}
int Candidate::get_ids() const
{
    return id_;
}

/*
 write a function to print out candidate's name and party and district id
 @ param none
 @ return output
 */
string Candidate::Tostringfy()
{
    stringstream ss;
    ss <<id_<<": "<<name_<<" "<<PartyStringify(party_)<<endl;
    return ss.str();
}
/*
 Election class constructor ask the user to register a candidate for each party
 and add their name and each party to the vector of candidate
 
 */
Election::Election(){
    string choice= "n";
    cout<<"Do you want to register a candidate for party one (y or n )?";
    cin >> choice;
    while(choice != "n")
    {
        if(choice=="y")
        {
            cout<<"What is their name?";
            string name;
            cin>> name;
            Candidate temp(name, Party::One, 1);
            candidate.push_back(temp);
        }
        cout<<"Do you want to register a candidate for party one (y or n )?";
        cin>>choice;
    }
    string choice1= "n";
    cout<<"Do you want to register a candidate for party two (y or n )?";
    cin >> choice1;
    while(choice1 != "n")
    {
        if(choice1=="y")
        {
            cout<<"What is their name?";
            string name;
            cin>> name;
            Candidate temp(name, Party::Two, 2);
            candidate.push_back(temp);
        }
        cout<<"Do you want to register a candidate for party two (y or n )?";
        cin>>choice1;
    }
    
    string choice2= "n";
    cout<<"Do you want to register a candidate for party three (y or n )?";
    cin >> choice2;
    while(choice2 != "n")
    {
        if(choice2=="y")
        {
            cout<<"What is their name?";
            string name;
            cin>> name;
            Candidate temp(name, Party::Three, 3);
            candidate.push_back(temp);
        }
        cout<<"Do you want to register a candidate for party three (y or n )?";
        cin>>choice2;
    }
}
/**
 write a function to print electoralMap
 @ param None
 @ return None
 */
void Election::Display_electoralMap()
{
    cout<< electoral_map <<endl;
}
/**
 write a function to vote for constituent by calculate the probability of party
 @ param None
 @ return None
 */
void Election::campaigning()
{
    float p_sucess = 0;
    float p_extra = 0;
    //get district from electoralMap
    map<int, District *> district = electoral_map.get_districts();
    //loop in the map to get each district

    for(map<int, District *>::iterator it = district.begin(); it!=district.end(); ++it)
    {
        District * d = it->second;
        //loop map in from party to int
        map<Party, int> constituent = d->get_elector();
        //map<Party, int>::iterator it = constituent.begin();
        int total_one=0;
        int total_two=0;
        int total_three=0;
        for (map<Party, int>::iterator it = constituent.begin(); it!=constituent.end(); ++it)
        {
            if(it->first==Party::One) {
                total_one += it->second;
            } else if(it->first==Party::Two) {
                total_two += it->second;
            } else if(it->first==Party::Three) {
                total_three += it->second;
            }
        }
        for (map<Party, int>::iterator it = constituent.begin(); it!=constituent.end(); ++it)
        {
            if(it->first==Party::One)
            {
                //cout<<"it-second 1"<<it->second<<endl;
                int num = 0;
                num = ((it->second) + 1) * 2;
                int deNum = 0;
                deNum = total_two + total_three;
                p_sucess = (num/deNum) * (num/d->get_squareMile());
                p_extra = p_sucess * 0.1;
                int ram = rand()%100;
                if(ram < p_sucess)
                {
                    constituent[Party::None] -= 1;
                    constituent[Party::One] += 1;
                }
                if(ram < p_extra)
                {
                    vector<Party> p = {Party::Two,Party::Three};
                    int index = rand()%2;
                    Party party = p[index];
                    constituent[party] -= 1;
                    constituent[Party::One] += 1;
                }
            }
            if(it->first==Party::Two)
            {
                //cout<<"it-second 2"<<it->second;
                int num = 0;
                num = ((it->second) + 1) * 2;
                int deNum = 0;
                deNum = total_one + total_three;
                p_sucess = (num/deNum) * (num/d->get_squareMile());
                p_extra = p_sucess * 0.1;
                int ram = rand()%100;
                if(ram < p_sucess)
                {
                    constituent[Party::None] -= 1;
                    constituent[Party::Two] += 1;
                }
                if(ram < p_extra)
                {
                    vector<Party> p = {Party::One,Party::Three};
                    int index = rand()%2;
                    Party party = p[index];
                    constituent[party] -= 1;
                    constituent[Party::Two] += 1;
                }
            }
            if(it->first==Party::Three)
            {
                //cout<<"it-second 3"<<it->second;
                int num = 0;
                num = ((it->second) + 1) * 2;
                int deNum = 0;
                deNum = total_one + total_two;
                p_sucess = (num/deNum) * (num/d->get_squareMile());
                p_extra = p_sucess * 0.1;
                int ram = rand()%100;
                if(ram < p_sucess)
                {
                    constituent[Party::None] -= 1;
                    constituent[Party::Three] += 1;
                }
                if(ram < p_extra)
                {
                    vector<Party> p = {Party::One,Party::Two};
                    int index = rand()%2;
                    Party party = p[index];
                    constituent[party] -= 1;
                    constituent[Party::Three] += 1;
                }
            }
        }
    }
}


/**
 write a function to print each candidate
 @ param None
 @ return None
 */

void Election::printCandidate()
{
    cout<<"---------------------"<<endl;
    for(int i=0; i<candidate.size(); i++)
    {
        cout<<candidate[i].Tostringfy();
    }
    cout<<endl;
}

/**
 write a function to allow user to get direct vote
 @ param None
 @ return None
 */

void Election::get_vote()
{
    vector <Candidate> candidate_voted;
    cout<<"Which candidate is campaigning (id) (0 to stop) ?";
    string str_party;
    int count =0;
    string name;
    int party=-1;
    while(party !=0)
    {
        cin>> str_party;
        party = stoi(str_party);
        
        for(int i=0; i< candidate.size(); i++)
        {
            if(candidate[i].get_ids()==party)
            {
                name = candidate[i].get_name();
                Display_electoralMap();
                int district_ids=-1;
                while(district_ids !=0)
                {
                    cout<<"Where is this candidate campaigning (id) (0 to stop) ?";
                    string str_district;
                    cin >> str_district;
                    district_ids = stoi(str_district);
                    count++;
                    Candidate d(name, candidate[i].get_party(), district_ids);
                    candidate_voted.push_back(d);
                    //electoral_map.get_district(district_ids);
                    if(district_ids !=0)
                    {
                        cout<<name<<" is campaigning in district "<<district_ids;
                        //campaigning();
                        cout<<endl;
                        Display_electoralMap();
                    }
                    else if(district_ids==0)
                    {
                        printCandidate();
                    }
                }
               
            }
        }
        cout<<"Which candidate is campaigning (id) (0 to stop) ?";
       
        if(party==0)
        {
             cout<<endl;
            
        }
    }
}

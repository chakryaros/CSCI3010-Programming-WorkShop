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
            candidate.push_back(temp); //add candidate to vector
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
            candidate.push_back(temp); //add candidate to vector
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
            candidate.push_back(temp); //add candidate to vector
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
void Election::campaigning(int district_id, Party party)
{
    float p_sucess = 0;
    float p_extra = 0;
    //get district from electoralMap
    map<int, District *> district = electoral_map.get_districts();
    //loop in the map to get each district
    
    District *d = district[district_id];
    map<Party, int> *constituent = d->get_elector();
    int total_one=0;
    int total_two=0;
    int total_three=0;
    for (map<Party, int>::iterator it = constituent->begin(); it!=constituent->end(); ++it)
    {
        if(it->first==Party::One) {
            total_one += it->second;
        } else if(it->first==Party::Two) {
            total_two += it->second;
        } else if(it->first==Party::Three) {
            total_three += it->second;
        }
    }
    for (map<Party, int>::iterator it2 = constituent->begin(); it2!=constituent->end(); ++it2)
    {
        if(it2->first==Party::One)
        {
            //cout<<"it-second 1"<<it->second<<endl;
            float num = 0;
            num = ((it2->second) + 1) * 2;
            float deNum = 0;
            deNum = total_two + total_three;
            p_sucess += (num/deNum) * (num/d->get_squareMile());
            p_extra += p_sucess * 0.1;
        }
        if(it2->first==Party::Two)
        {
            //cout<<"it-second 2"<<it->second;
            float num = 0;
            num = ((it2->second) + 1) * 2;
            float deNum = 0;
            deNum = total_one + total_three;
            p_sucess += (num/deNum) * (num/d->get_squareMile());
            p_extra += p_sucess * 0.1;
        }
        if(it2->first==Party::Three)
        {
            float num = 0;
            num = ((it2->second) + 1) * 2;
            float deNum = 0;
            deNum = total_one + total_two;
            p_sucess += (num/deNum) * (num/d->get_squareMile());
            p_extra += p_sucess * 0.1;
        }
    }
    
    cout<<"chance to convert:"<<p_sucess*100<<"%"<<endl;
    cout<<"Chances to convert from another party:"<< p_extra*100 << "%"<<endl;
    cout<<"Congrats, you have converted someone from none to one!"<<endl;
    int ram = rand()%100;
    float ram2 = ram/100;
    if(ram2 < p_sucess)
    {
        constituent->at(Party::None) -= 1;
        constituent->at(party) += 1;
    }
    if(ram2 < p_extra)
    {
        vector<Party> p = {Party::Two,Party::Three};
        int index = rand()%2;
        Party oparty = p[index];
        constituent->at(oparty) -= 1;
        constituent->at(party) += 1;
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

void Election::get_Election_vote()
{
    vector <Candidate> candidate_voted;
    map <int, int>count_district_vote;
    //cout<<"Which candidate is campaigning (id) (0 to stop) ?";
    string str_party;
    string name;
    int count =0;
    int party=-1;
    while(party !=0)
    {
        cout<<"Which candidate is campaigning (id) (0 to stop) ?";
        cin>> str_party;
        party = stoi(str_party);
        
        for(int i=0; i< candidate.size(); i++)
        {
            if(candidate[i].get_ids()==party)
            {
                name = candidate[i].get_name();
                Display_electoralMap(); //call display electoralMap
                int district_ids=-1;
                while(district_ids !=0)
                {
                    cout<<"Where is this candidate campaigning (id) (0 to stop) ?";
                    string str_district;
                    cin >> str_district;
                    district_ids = stoi(str_district);
                    if(district_ids !=0)
                    {
                        count++;
                        count_district_vote.insert(pair<int, int>(district_ids, count));
                        Candidate temp(name, candidate[i].get_party(), district_ids);
                        candidate_voted.push_back(temp);
                        cout<<name<<" is campaigning in district "<<district_ids<<endl;
                        //call campaigning function to convert
                        campaigning(district_ids, candidate[i].get_party());
                        cout<<endl;
                        //call display electoralMap
                        Display_electoralMap();
                    }
                    else if(district_ids==0)
                    {
                        printCandidate();
                    }
                }
               
            }
        }
    }
   // if(party==0) //refactory for PE10
    //{
       
        map<int, District *> district = electoral_map.get_districts();
        for (map<int, District*>::iterator it = district.begin(); it!=district.end(); ++it)
        {
            District *d = it->second;
            cout<<"District: "<<it->first<<endl;
            map<Party, int> *constituents = d->get_elector();
            map<Party, int>::iterator it1 = constituents->begin();
            while (it1!=constituents->end()){
                for(int i=0; i<candidate.size(); i++)
                {
                    if(candidate[i].get_party()==it1->first)
                    {
                        cout<<candidate[i].get_name()<<": ";
                        cout<<it1->second<<endl;
                    }
                }
                it1++;
            }
        }
        cout<<endl;
        Calculate_result(district); //print out the winner for calculate in the distrcts
    //}
}
//calculate the result for election vote
void Election::Calculate_result(map<int, District *> district)
{
    int get_vote =0;
    map<string, int>result;
    for (map<int, District*>::iterator it = district.begin(); it!=district.end(); ++it)
    {
        District *d = it->second;
        map<Party, int> *constituents = d->get_elector();
        map<Party, int>::iterator it1 = constituents->begin();
        while (it1!=constituents->end()){
            for(int i=0; i<candidate.size(); i++)
            {
                if(candidate[i].get_party()==it1->first)
                {
                    string name =candidate[i].get_name();
                    get_vote+= it1->second; //total each constituent got voted
                    result.insert(pair<string, int>(name, get_vote)); //add each result into map
                }
            }
            it1++;
        }
    }
    int max = 0;
    string constituent;
    cout<<"Full results:"<<endl;
    for (map<string, int>::iterator it2 = result.begin(); it2!=result.end(); ++it2)
    {
        
        cout<<it2->first<<": "<<it2->second<<endl;
       
        if(it2->second>max)
        {
            max = it2->second; //check for the get voted max
            constituent = it2->first;
        }
    }
    cout<<"\n"<<"\n";
    cout<<"Congratulation, "<<constituent<<", you've won!"<<endl;
}

//get vote for representavtive
void Election::get_representative_vote()
{
    
    vector<float>district_vote;
    string str_party;
    string name;
    int count =0;
    int party=-1;
    while(party !=0)
    {
        cout<<"Which candidate is campaigning (id) (0 to stop) ?";
        cin>> str_party;
        party = stoi(str_party);
        
        for(int i=0; i< candidate.size(); i++)
        {
            if(candidate[i].get_ids()==party)
            {
                name = candidate[i].get_name();
                Display_electoralMap(); //call display electoralMap
                int district_ids=-1;
                while(district_ids !=0)
                {
                    cout<<"Where is this candidate campaigning (id) (0 to stop) ?";
                    string str_district;
                    cin >> str_district;
                    district_ids = stoi(str_district);
                    if(district_ids !=0)
                    {
                        count++;
                        district_vote.push_back(electoral_map.District_vote(count, party));
                        cout<<name<<" is campaigning in district "<<district_ids<<endl;
                        //call campaigning function to convert
                        campaigning(district_ids, candidate[i].get_party());
                        cout<<endl;
                        //call display electoralMap
                        Display_electoralMap();
                    }
                    else if(district_ids==0)
                    {
                        printCandidate();
                    }
                }
                
            }
        }
    }
    if(party==0)
    {
        map<int, District *> district = electoral_map.get_districts();
        for (map<int, District*>::iterator it = district.begin(); it!=district.end(); ++it)
        {
            District *d = it->second;
            cout<<"District: "<<it->first<<endl;
            //cout<<candidate[it->first].get_name();
            map<Party, int> *constituents = d->get_elector();
            map<Party, int>::iterator it1 = constituents->begin();
            while (it1!=constituents->end()){
                for(int i=0; i<candidate.size(); i++)
                {
                    if(candidate[i].get_party()==it1->first)
                    {
                        cout<<candidate[i].get_name()<<": ";
                        //cout<<district_vote[j]<<endl;
                    }
                }
                it1++;
            }
        }
        cout<<endl;
    }
}

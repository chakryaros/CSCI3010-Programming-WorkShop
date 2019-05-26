#include "ElectoralMap.h"

#include <iostream>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <string>
#include <vector>
#include <random>
#include <ctime>


using namespace std;

//set ids disttrict to 1
int ElectoralMap::id_counter_ = 1;

/**
 write a function to get string of the each party
 @ param party
 @ return string
 */
string PartyStringify(Party p)
{
    if(p==Party::One)
    {
        return "[Party: One]";
    }
    else if(p==Party::Two)
    {
        return "[Party: Two]";
    }
    else if(p==Party::Three)
    {
        return "[Party: Three]";
    }
    else if(p==Party::None)
    {
        return "[Party: None]";
    }
}

//add each party to vertor
vector<Party> Parties_vector()
{
    vector<Party> vec_party = {Party::One, Party::Two, Party::Three, Party::None};
    return vec_party;
}
//display the square mile and each party and constituent numbers
std::ostream& operator<<(std::ostream& os, const District& d) {
    string output = "square mile: "+ to_string(d.get_squareMile()) + "\n";
    map<Party, int> constituents = d.get_elector();
    map<Party, int>::iterator it = constituents.begin();
    while(it != constituents.end()) {
        output.append(PartyStringify(it->first)) + " ";
        output.append(": ");
        output.append(to_string(it->second));
        output.append("\t");
        it++; //increment the iterator
    }
    output.append("\n");
    os << output;
    return os;
}
//display the district
std::ostream& operator<<(std::ostream& os, const ElectoralMap & electro_map)
{
    map<int, District *> district = electro_map.get_districts();
    //loop through each district
    for(map<int, District *>::iterator it = district.begin(); it != district.end(); it++)
    {
        District *d = it->second;
        os << "District "<< to_string(it->first) << ":\n";
        os << *(d);
        os << endl;
    }
    return os;
}

/**
    ElectoralMap constructor for assign district id with each party
 
 */
ElectoralMap::ElectoralMap(){
    
    srand(time(NULL));
    for(int i=0; i< num_district_; i++)
    {
        map<Party, int> constituents;
        //initialize our districts
        for(Party p : Parties_vector()){
            int r = (rand() % 9);
            constituents[p] = r;
        }
        int area = (rand()% 25) + 5;
        District * d = new District(constituents, area);
        district_map[id_counter_] = d;
        id_counter_ ++;
    }
}

/**
 write a function to vote in the district for RepresentativeElection
 calculate th vote for district
 @ param None
 @ return None
 */
float ElectoralMap::District_vote(int total_district_vote){
    
    int count_All_district =0;
    int total_this_district =0;
    float calculate_vote_district =0;
    vector<District *> d;
    map<int, District *> district = get_districts();
    for(map<int, District *>::iterator it = district.begin(); it!=district.end(); ++it)
    {
        d.push_back(it->second);
    }
    
    //loop through each district
    for(int i=0; i<d.size(); i++)
    {
        map<Party, int> constituent = d[i]->get_elector();
        for (map<Party, int>::iterator it = constituent.begin(); it!=constituent.end(); ++it)
        {
            total_this_district += it->second;
        }
        
        count_All_district +=total_this_district;
    }
    calculate_vote_district = (total_this_district/count_All_district) *total_district_vote;
    return calculate_vote_district;
}











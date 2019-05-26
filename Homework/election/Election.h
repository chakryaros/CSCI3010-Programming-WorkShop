 /**
 Chakrya Ros
 Homework 3
 This is Election.h to create class Candidate, class Election and inherited RepresentativeElection
 */

#ifndef _ELECTION_H_
#define _ELECTION_H_

#include "ElectoralMap.h"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip> // setprecision
#include <sstream> // stringstream


using namespace std;

/*
class Candidate:
write this class to get name of candidate, party affiliation and ids.
*/

class Candidate {
public:
    Candidate(string name, Party party, int id);
    string get_name() const;
    Party get_party() const;
    int get_ids() const;
    string Tostringfy();
    //int Calculate_result(District * district);
   
private:
    string name_;
    Party  party_;
    int id_;
};

/*
 Election class:
    write a election class to register candidates, directs them to districts
    to go campaigning, and report the winner after tallying the score
 */
class Election {
public:
    Election();
    void get_vote(); //ask user to get direct vote
    void Display_electoralMap(); //display district, square mile and each party
    
    void campaigning(); //calculate the convert a voter to constituent
    void printCandidate(); //display each Candidate name, ids and party
private:
    ElectoralMap & electoral_map = ElectoralMap::GetInstance();
    vector <Candidate> candidate;
    
};


/*
 inherits Election class:
 
    write a subclass of election that create RepresentativeElection for
    candidate that wins a majority in each district gets all of that district's
    votes
 */
class RepresentativeElection : public Election {
public:
    RepresentativeElection():
    Election(){};
};




#endif // _ELECTION_H_

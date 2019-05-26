#ifndef _ELECTORALMAP_H_
#define _ELECTORALMAP_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <random>




using namespace std;

//create party enum class for each party
enum class Party { One, Two, Three, None};

//stringify to return each party as string
string PartyStringify(Party p);
vector<Party> Parties_vector();

class District {
public:
    District(map<Party, int> elector, const int squareMile):
    constituents_(elector),
    squareMile_(squareMile)
    { random_gen_ = default_random_engine{};
        random_gen_.seed(time(NULL)); }
    
    
    int get_squareMile() const
    {
        return squareMile_;
    }
    map<Party, int> get_elector()const
    {
        return constituents_;
    }
    friend std::ostream& operator<<(std::ostream& os, const District& d);
    
private:
    map<Party, int> constituents_;
    int squareMile_;
    
    default_random_engine random_gen_;
};


class ElectoralMap{
public:
    //sigleton for constuctor
    static ElectoralMap& GetInstance(){
        static ElectoralMap instance;
        return instance;
    }
    
    //get int id and return district id in map
    District * get_district(const int id)
    {
        return district_map[id];
    };
    //map int to district ids
    map<int, District*> get_districts() const{
        return district_map;
    };
    
    //get district vote
    float District_vote(int total_district_vote);
    
    //to display output of electoramMap
    friend std::ostream& operator<<(std::ostream& os, const ElectoralMap &electro_map);
    
    //to delete the methode that we don't want
    ElectoralMap(ElectoralMap const&) = delete;
    void operator=(ElectoralMap consts) = delete;
    
private:
    ElectoralMap();
    map<int, District *> district_map;
    
    static int id_counter_;
    static const int num_district_ = 4; //always have 4  districts
};
#endif // _ELECTRALMAP_H_


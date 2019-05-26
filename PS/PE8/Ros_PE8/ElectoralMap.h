#ifndef _ELECTORALMAP_H_
#define _ELECTORALMAP_H_
#include <sstream>
#include <vector>
#include <iostream>
#include <map>
#include <math.h>


using namespace std;

class District {
public:
    District();
    District(int, string);
    int get_Id();
    string get_name();
    string Stringify() const;
    friend std::ostream& operator<<(std::ostream& os, const District& d);
private:
    static int shared_id;
    int id_;
    string name;
    int area;
};

class ElectoralMap{
public:
    static ElectoralMap& GetInstance(){
        static ElectoralMap instance;
        return instance;
    }
    District get_district(int id) const;
    
    friend std::ostream& operator<<(std::ostream& os, const ElectoralMap &electro_map);
    friend std::ostream& operator<<(std::ostream& os, const map<int, District*> district_map);
private:
    ElectoralMap();
    map<int, District> district_map; //.insert
};
#endif // _ELECTRALMAP_H_


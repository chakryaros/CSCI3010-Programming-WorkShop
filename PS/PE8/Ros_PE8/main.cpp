/**
 Chakrya Ros
 PE*
 This is main function to test functions
 */
#include "ElectoralMap.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <fstream>

using namespace std;


int main()
{
    //District* district = new District();
    //District* district1 = new District();
    //cout<<*district<<endl;
    //cout<<*district1<<endl;
    ElectoralMap & electoral_map = ElectoralMap::GetInstance();
    ElectoralMap * electoral_map1;
    electoral_map1 = &electoral_map.GetInstance();
    cout<<*electoral_map1<<endl;
    return 0;
}

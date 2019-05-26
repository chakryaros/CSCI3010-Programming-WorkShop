/**
 Chakrya Ros
 PE*
 This is main function to test functions
 */
#include "ElectoralMap.h"
#include <iostream>
#include <vector>
#include <map>
#include <fstream>

using namespace std;


int main()
{
    //declare the object of electoralMap
    ElectoralMap * electoralMap;
    electoralMap = &electoralMap->GetInstance();
    District * new_district = electoralMap->get_district(3);
    cout<< electoralMap <<endl;
    return 0;
    
}

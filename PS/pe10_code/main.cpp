#include <iostream>
#include <vector>

#include "Society.h"
using namespace std;
// Name: Chakrya Ros


// Feel free to edit any of Society.h, Society.cpp and this file in your refactoring
// In addition to the refactoring tasks:
// When you are done, this program should be able to easily run for a different number 
// of cities and you should be able to observe the growth in the cities for a given number of 
// cycles of growth

int size = 4;
int main() {
    vector<Society> s1; //refactory
    string city="";
    string population="";
    Society s;
    //ask user input to get id, population and city
    for(int i=0; i<size; i++)
    {
        string id;
        cout<<"Enter id of city: ";
        cin >> id;
        int id_ =stoi(id);
        cout<<"Enter the population number: ";
        cin >> population;
        int population_ = stoi(population);
        cout<<"Enter the city name: ";
        cin.ignore();
        getline(cin, city);
        Society s;
        s.AddCity(id_, population_, city);
        s1.push_back(s);
    }
    cout<<endl;
    //display the id, population and city change
    for(int i=0; i<size; i++)
    {
        for(int i=0; i<s1.size(); i++)
        {
            cout<<s1[i];
            s1[i].GrowCities();
        }
        cout<<endl;
    }
    return 0;
}


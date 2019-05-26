#include <iostream>
#include <string>
#include <map>

#include "Society.h"
//to check if the population is greater than 100000
bool City::IsBig() const {
    
    return population_ > 100000; //PE 10 REFACTORED
}
//calculate the increse of population
void City::Grow(int const num_people) {

    if (num_people >= 0) //PE 10 REFACTORED
    {
        percent_change_ = (1.0 * num_people) / population_; //PE 10 REFACTORED
        population_ += num_people;
    }
}
//calculate the shrink of population
void City::Shrink(int const num_people) {
    if (num_people >= 0) { //PE 10 REFACTORED
        population_ -= num_people;
    }
}
//PE 10 REFACTOREd, GrowCities() to calulate the change of grow cities
void Society::GrowCities() {
    City * biggest;
    for(std::map<int, City *>::iterator it = cities_.begin(); it != cities_.end(); it++) //PE 10 REFACTORED
    {
        int key = it->first;
        City * c = cities_.at(key);
        if (cities_.at(key)->get_population() > biggest->get_population()) {
            biggest = cities_.at(key);
        }
        
        if (!c->IsBig()){
            double ratio = (1.0 * c->get_population()) / biggest->get_population();
            int prev = c->get_population();
            c->Grow((int) ratio * .3 * c->get_population());
            c->Shrink((int) c->get_population() * .1);
            double percent_change = (1.0 * c->get_population() - prev) / prev;
            c->set_percent_change(percent_change);
        }
        else {
            double ratio = (1.0 * c->get_population()) / biggest->get_population();
            int prev_small = c->get_population();
            c->Grow((int) ratio * c->get_population());
            c->Shrink((int) c->get_population() * .1);
            double percent_change_small = (1.0 * c->get_population() - prev_small) / prev_small;
            c->set_percent_change(percent_change_small);
        }
    }
}
std::ostream& operator<<(std::ostream &os, const City &c) {
    os << c.name_ << ": " << c.population_  << " (" << c.percent_change_ << "% change)";
    return os;
}
//display the each city, id and population
std::ostream& operator<<(std::ostream &os, const Society &s) {
   
    //PE 10 REFACTORED
    for(std::map<int, City *>::const_iterator it =s.cities_.begin(); it != s.cities_.end(); it++)
    {
        os << *(s.cities_.at(it->first)) << std::endl;
    }
    return os;
}

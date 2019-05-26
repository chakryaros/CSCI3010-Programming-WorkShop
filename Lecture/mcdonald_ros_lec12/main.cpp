#include <iostream>
#include <vector>

#include "Disease.h"
#include "Creature.h"

using namespace std;
// Names: James McDonald, Chakrya Ros
//
//

void ScienceLab(Creature *a){
    
    Creature *b = a->Clone();
    cout << "ScienceLab:" << endl;
    
    for(Disease * d : a->get_diseases()){
        
        for(Disease *d2 : b->get_diseases()){
            
            if (d == d2) {
                cout << "Both creatures have " << d->get_name() << endl;
            }
            
        }
        
    }
    
}

int main() {
    // Part 1 (factory) 
    // ---------------
    // 5) get pointers to your Disease objects via your DiseaseFactory.
    
    Disease * flu = DiseaseFactory::GetFlu();
    Disease * cold = DiseaseFactory::GetCold();
    Disease * cpox = DiseaseFactory::GetChickenPox();

    // 6) are your GetFlu() etc methods static or non-static? Why do you think that they should
    // be one or the other?
    
    //Yes so we can call its methods without creating a DiseaseFactory object.
    
    // 7) Feel free to create more creatures here
    Creature original_creature(14);
    Creature c2(25);
    Creature c3(70);
    
    
    // 8) Infect your creatures with your diseases. Test out the Creature Spread method.
    // Warning: Spread is an _UNTESTED_ method. 

    original_creature.Infect(flu);
    original_creature.Infect(cold);
    c2.Infect(cold);
    c3.Infect(cpox);
    
    c3.Spread(&original_creature);

    for (Disease * d : original_creature.get_diseases() ) {
        std::cout << *(d) << std::endl;     
    }
 
    // Part 2 (prototype) 
    // ---------------
    // 3) Create some new Creature * objects by using the Creature's Clone() method. Does this method use dynamic dispatch?
    // Answer:
    
    Creature * c4 = c3.Clone();
    Creature * c5 = original_creature.Clone();
   
    // 4) Write a new function in this file void ScienceLab(Creature * original) that takes
    // an original creature and conducts experiments by cloning it and measuring the spread of disease.
    // You have complete creative freedom here. Feel free to add methods to the Disease/Creature classes.
    // (The only requirements are the function definition and that you must call Clone() within that function).
    
    Cow * cow = new Cow(5);
    cow->Infect(cpox);
    Cow * newcow = cow->Clone();
    
    for (Disease * d : newcow->get_diseases() ) {
        std::cout << "newcow has: " << *(d) << std::endl;     
    }
    
    ScienceLab(cow);
    
    // Call your ScienceLab function as many times as is necessary for your experiments.
}


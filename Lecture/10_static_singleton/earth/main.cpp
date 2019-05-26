#include <iostream>
#include "Earth.h"
using namespace std;

// Names:
// Joseph W. Evans (Joey)
//James McDonald
//Chakrya Ros

int main(int argc, char **argv){
    // 0) Implement your Earth's constructor in Earth.cpp

    // 1) Get an instance of your earth object
    Earth &e = Earth::GetInstance();

    // 2) Get another instance of your earth object
    Earth &e2 = e.GetInstance();

    // 3) Test to see if the two Earth instances from #1 and #2 are stored at the same
    // location in memory.
    if(&e == &e2){
        cout << "They're at the same position in memory!" << endl;
    }
    else{
        cout << "They're not at the same position in memory!" << endl;
    }

    // 3) Call IncreasePopulation from one of your Earth instances. Can you see this change
    // from your other Earth instance?
    e.IncreasePopulation();
    cout << e2.get_population() << endl;
    // Yes we see the change in both!
    
    // 4) Create a public field in your Earth object. Do you need an instance of an Earth object
    // to access this field?
    e.steve = 5;
    // Yes we do.

	return 0;
}

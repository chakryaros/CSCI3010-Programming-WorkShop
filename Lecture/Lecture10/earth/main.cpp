#include <iostream>
#include "Earth.h"

using namespace std;
// Names:
//

int main(int argc, char **argv){
    // 0) Implement your Earth's constructor in Earth.cpp


    // 1) Get an instance of your earth object
     Earth &e = Earth::GetInstance();

    // 2) Get another instance of your earth object
    Earth &e1 = e.GetInstance();
    // 3) Test to see if the two Earth instances from #1 and #2 are stored at the same
    // location in memory.
    if(&e==&e1)
    {
        cout<<"They are equal"<<endl;
    }
    else
    {
        cout <<"They are not equal"<<endl;
    }

    // 3) Call IncreasePopulation from one of your Earth instances. Can you see this change
    // from your other Earth instance?

    // 4) Create a public field in your Earth object. Do you need an instance of an Earth object
    // to access this field?

	return 0;
}

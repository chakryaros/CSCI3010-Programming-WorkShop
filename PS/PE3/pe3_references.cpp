#include <iostream>

using namespace std;

// Name: Chakrya Ros
//

// Write any functions you need here!

void Int_pointer(int * a)
{
    cout<<"Int after calling Int_point function : "<<a<<endl;
}


void Int_reference(int & a)
{
    cout<<"Int after call Int_reference fucntion : "<<a<<endl;
}



int main() {
    // Add as many prints to cout as you need to answer the questions.
    // Leave them in your code when you turn it in.
    // If you have lines of code that cause errors that test the questions,
    // leave this code in your file but comment it out.
    
    // 1) Declare an int
    int variable_i = 4;
    cout<<"variable an int before increment: "<<variable_i<<endl;
    variable_i++;
    cout<<"variable an int after increment: "<<variable_i<<endl;
    cout<<"\n";

    // 2) Declare a pointer to that int
    int *point_int = &variable_i;
    cout<<"Pointer before increment "<<*point_int<<endl;

    // 3) Increment the int via the pointer
    *point_int++;
    cout<<"Pointer before increment "<<*point_int<<endl;
    cout<<"\n";

    // 4) Declare a reference to your int

    int &refernce_int = variable_i;
    cout<< "reference before increment "<<refernce_int<<endl;

    // 5) Increment the int via the reference

       // &refernce_int++; got error
        cout<< "reference after increment, got error"<<endl;
        cout<<"\n";

    // 6) When you increment the int via the variable declared in #1, from which
    // variables can you see the changes?
    // Answer: variables is the same but the value change

    // 7) When you increment the int via the pointer declared in #2, from which
    // variables can you see the changes?
    // Answer: change the value

    // 8) When you increment the int via the reference declared in #4, from which
    // variables can you see the changes?
    // Answer: got error 

    // 9) Write a function that takes an int * parameter. How would you pass the 
    // variable from #1 into this function? (write the function call below)

        //Int_pointer(variable_i); got error by pass the int
    
    // 10) Can you pass your reference from #4 to the function from #9?
    // Answer: YES
        Int_pointer(&refernce_int);
        


    // 11) Write a function that takes an int & parameter. How would you pass the 
    // variable from #1 into this function? (write the function call below)
        Int_reference(variable_i);

    // 12) Can you pass your pointer from #2 to the function from #11?
    // Answer: YES
        Int_reference(*point_int);

    // 13) Can you pass your reference from #4 to the function from #11?
    // Answer: NO
        //Int_reference(&refernce_int);
}
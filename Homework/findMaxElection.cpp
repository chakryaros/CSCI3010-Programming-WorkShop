#include <iostream>
#include <string>
#include <iomanip>
//#include <stdlib>
using namespace std;
//global variable
int votes[20];
// function prototype
int findMax(int votes[]);
int main()
{
string name[5];
int total = 0;
float percent[5];
double per;
int m;
//inputting values
cout << "Enter the names of the candidadtes in local election and number the votes respectively " << endl;
for (int i = 0; i < 5; i++)
{
cin >>name[i];
cin >>votes[i];
}
for (int i = 0; i < 5; i++) //unidentified...
{
total = total + votes[i];
}
//calculating percentage votes
for (int i = 0; i < 5; i++)
{
percent[i] = votes[i] / (float)total*100;
}
cout << "Candidate" << '\t' << "Votes recieved" << '\t' << "% of total votes" << endl;
cout << setprecision(2); //outputting data
for (int i = 0; i < 5; i++)
{
cout << name[i] << "\t" << "\t" << "\t" << votes[i] << "\t\t" << fixed <<setprecision(2)<< percent[i] << endl;
}
cout << "Total -----" << total << endl;
m = findMax(votes); //function call
cout << "Winner of the election is " << name[m] << endl;
//system("PAUSE");
return 0;

//end of main
}
//function definition
int findMax(int votes[])
{
int i, max,winner;
max = votes[0];
for (int i = 0; i < 5; i++)
{
if (votes[i] > max)
{
max = votes[i];
winner = i;
}
}
return winner;
} //end of findMax


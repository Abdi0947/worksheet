/*GROUP MEMBERS SECTION A
ABDI DEBELA 1878/14
AYANA FILE  2226/14
BANA DAWIT 2245/14
AMANUEL ABATE 2122/14
*/
//C++ program that find sum of numbers between 1 and 1/115 using do..while
#include <iostream>

using namespace std;

int main()
{
    //Declare variables

    long double sum=0,i=1;
    do
    {
        sum=sum + (1/i);
        i++;
    }while(i<=15);

    //Display result
    cout << "The sum of numbers between 1 and 1/15 is = " <<sum<< endl;
    return 0;
}

/*GROUP MEMBERS SECTION A
ABDI DEBELA 1878/14
AYANA FILE  2226/14
BANA DAWIT 2245/14
AMANUEL ABATE 2122/14
c++ program that find product of numbers from
1 to 20 using for statement*/

#include <iostream>

using namespace std;

int main()
{//Declare variables
    long double product=1;
    for(int i=1;i<=20; i++)
    {
        product=product*i;
    }
    //Display the result
    cout << "The product of numbers from 1 to 20 is = "<<product<< endl;
    return 0;
}

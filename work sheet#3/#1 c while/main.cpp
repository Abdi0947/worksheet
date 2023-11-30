/*GROUP MEMBERS SECTION A
ABDI DEBELA 1878/14
AYANA FILE  2226/14
BANA DAWIT 2245/14
AMANUEL ABATE 2122/14
*/

/*C++ program that find sum of number between
1 and 1/15 using while statement*/
#include <iostream>

using namespace std;

int main()
{
    //Declare varriable
    long double sum=0,i=1;
    while(i<=15)
    {
        sum=sum+(1/i);
        i++;
    }
    //display the result
    cout << "sum of nubers between 1 and 1/15 is = " <<sum<<endl;
    return 0;
}

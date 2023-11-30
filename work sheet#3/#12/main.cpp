/*write  c++ program using for loop
that compute summation*/
#include <iostream>

using namespace std;

int main()
{ int sum=0;
    for(int z,i=1; i<=30; i++)
   {
        z=(i/3)*2;
        sum=sum + z;
    }
    cout << "The sum is = " <<sum<< endl;
    return 0;
}

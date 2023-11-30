//display sum using for loop
#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    for( int i=1,product=5;i<=10;i++)
    {
            product=5*i;
        sum=sum+product;

    }


    cout << "The sum = " <<sum<< endl;

    return 0;
}

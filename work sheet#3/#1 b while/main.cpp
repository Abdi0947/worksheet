//the sum using while loop
#include <iostream>

using namespace std;

int main()
{

    int i=1,product=5,sum=0;

    while(i<=10)
        {
        product=5*i;
        sum=sum+product;
        i++;
        }


    cout << "The sum = " <<sum<<endl;
    return 0;
}

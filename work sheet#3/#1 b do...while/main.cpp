//display a sum using do...while
#include <iostream>

using namespace std;

int main()
{
    int i=1,product=5,sum=0;
    do{

        product=5*i;
        sum=sum+product;
        i++;
    }while(i<=10);
    cout << "The sum = " <<sum<< endl;
    return 0;
}

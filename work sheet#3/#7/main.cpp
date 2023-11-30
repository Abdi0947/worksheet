//the sum of the sum=1!+2!+3!+.....n!
#include <iostream>

using namespace std;

int main()
{
    long double num,sum=0;
    cout << "enter the number\n";
    cin>>num;
    for(int i=1;i<=num;i++){
            int fact=1;
        for(int j=i;j>=1;j--)
            {
            fact=fact*j;
            }
        sum=sum+fact;
    }

    cout<<"the sum of the series up to "<<num<<" is = "<<sum;


    return 0;
}

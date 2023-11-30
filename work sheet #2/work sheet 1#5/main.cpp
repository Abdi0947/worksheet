//add even numbers between 0 and any positive integer number given by user
#include <iostream>

using namespace std;

int main()
{

    int sum=0,count=0,number;
    cout <<"Enter the last number"<<endl;
    cin>>number;

    while(count < number)
    {
    sum=sum + count;
    count=count+2;
    }



    cout <<"the sum of even numbers between 0 up to\t"<< number<<" is "<< sum<<endl;
    return 0;
}

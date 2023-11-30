/*write c++ program that counts the number of
digits in an integer number.*/
#include <iostream>

using namespace std;

int main()
{
    int num,n=0;
    cout<<"Enter number\n";
    cin>>num;
    cout <<"the number of digit of "<<num;
    while(num!=0){

        num=num/10;
        n++;
    }
    cout <<" is = "<< n ;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int fact=1,i=1,number;

    cout<<"Enter the number"<<endl;
    cin>>number;
   do
    {
    fact=fact*i;
    i=i+1;

    }while(i<=number);



    cout << "The factorial of "<< number <<"is " <<fact<<endl;
    return 0;
}

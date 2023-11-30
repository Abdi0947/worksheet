//swap the content of two variablees with out using a third variable
#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"Enter the value of x variable "<<endl;
    cin>>x;
    cout<<"Enter the value of the y variable "<<endl;
    cin>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout <<"The value of x = "<<x<<endl<<"The value of y = "<<y;
    return 0;
}

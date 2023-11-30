//swap the content of two variable using third variables
#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cout<<"enter the first x variable"<<endl;
    cin>>x;
    cout<<"Enter the second y variable"<<endl;
    cin>>y;
    z=x;
    x=y;
    y=z;
    cout <<"The x value = "<< x<< endl<<"The y value = "<<y;
    return 0;
}

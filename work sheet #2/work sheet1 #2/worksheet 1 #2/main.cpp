#include <iostream>

using namespace std;

int main()

{
    int x, y;
    cout<< "enter the first number\n";
    cin>> x;
    cout<< " enter the second number\n";
    cin>> y;
    if(x>y)
    cout<< "x is greater"<<endl;
    else if(y>x)
    cout << "y is greater"<<endl;
    else
    cout<< "both are equal"<<endl;
    return 0;
}


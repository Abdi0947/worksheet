/*obtain two numbers from the keyboard, and
determine and display which(if eitheir)is the larger of the two numbers*/
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout<< "please enter the first numbers\n";
    cin>>a;
    cout<< "please enter the second number\n";
    cin>>b;
    c = a + b;
    cout<< "The sum of "<<a<< " and "<<b <<" is  = "<<c<<endl;

    return 0;
}

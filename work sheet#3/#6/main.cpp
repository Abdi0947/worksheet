/*C++ program that accepts a positive number 
from the user and displays the factorial of
 that number using for loop*/
#include <iostream>

using namespace std;

int main()
{ int number,fact=1;
    cout<<"Enter the the number "<<endl;
    cin>>number;
    for(int i=1;i<=number;i++)
        fact=fact*i;
        cout <<"The factorial of  "<<number<<" is = "<<fact<< endl;



    return 0;
}

//c++ program that accepts five students mark and display their average
#include <iostream>

using namespace std;

int main()
{  float mark,Average;
 //the iteration is five times
    for(int sum=0,i=1;i<=5;i++)
    {
    cout<<"Enter the mark"<<endl;
    cin>>mark;

    while(mark<0 || mark>100)
        //it cannot take a number less than 0 and greater than 100
   { cout<<"Please enter valid number again "<<endl;
     cin>>mark;
     }

      sum=sum + mark;

      Average=sum/5;
    }
     cout<<"The average mark of the five students is = "<<Average;


   return 0;
}

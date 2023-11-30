//the sum of 1 up to 100 using do....while
#include <iostream>

using namespace std;

int main()
{
     int sum=0,count=0;
     do
        {

         sum=sum+count;

            count++;

     }while(count<100);


        cout << "the sum of 1 up to 100 is = " <<sum;



    return 0;
}

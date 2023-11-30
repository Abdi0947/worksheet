//weather calculator
#include <iostream>

using namespace std;

int main()
{ //we use float because may be the weather is in decimal point
    float temp,i=1,sum=0,average;
    while(i<=10)
    {
        cout<<"Enter the recorded weather "<<endl;
        cin>>temp;
        i++;
        sum=sum + temp;
    }

      average=sum/10;

    cout << "The average of previous 10 days temperatures = "<<average<< endl;
    return 0;
}

/*write an application to print out the number 10
through 49 in the following manner*/
#include <iostream>

using namespace std;

int main()
{
    for(int n=10;n<=49;){
        for(int j=0;j<10;j++, n++)
            cout<< " "<<n<<" ";
            cout<<endl;
    }



    return 0;
}

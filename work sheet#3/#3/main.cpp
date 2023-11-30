/*A prime number is an integer greater than one and
 divisible only by itself and one.write a program that
 displays all the prime numbers between 1 and 100.*/
#include <iostream>

using namespace std;

int main()
{
    for(int i=1; i<=100; i++){
        for(int a=i-1; a>=1;a--){
            if(i==2){
            //2 is the first prime number
                cout<< i << " ";
            }
            if(i%a==0){
                    //it is not prime so it cannot display out
                break;
            }
            if(a==2){
                cout<< i << " ";
            }
        }
    }

    return 0;
}

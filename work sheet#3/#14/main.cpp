/*Develop a calculator program that computes
 and displays the result of a single requested operation*/
#include <iostream>

using namespace std;

int main()
{
    float num1,num2,sum,dif,quot,mult;
    char inputoperator;
    cout<<"Enter num1 \n";
    cin>>num1;
    cout<<"Enter operator \n";
    cin>>inputoperator;
    cout << "Enter num2 \n";
    cin>>num2;
    switch(inputoperator){
    case'+':
        sum=num1+num2;
        cout<<num1<<" "<<"+"<<" "<<num2<<" equals "<<sum;
        break;
    case'-':
        dif=num1-num2;
        cout<<num1<<" "<<"-"<<" "<<num2<<" equals "<<dif;
        break;
    case'*':
        mult=num1*num2;
        cout<<num1<<" "<<"*"<<" "<<num2<<" equals "<<mult;
        break;
    case'/':
        if(num2!=0){
        quot=num1/num2;
        cout<<num1<<" "<<"/"<<" "<<num2<<" equals "<<quot;
        }
        else
        cout<<num1<<" "<<"/"<<" "<<num2 <<" cannot be computed \n";
        break;
    default:
        cout<<"is unrecognized operator \n";
        }



    return 0;
}

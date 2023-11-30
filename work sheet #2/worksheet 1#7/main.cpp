
//find the average,maximum,minimum,and sum of three numbers given by the user.
#include <iostream>

using namespace std;

int main()
{
    float a, b, c,maximum,minimum,sum,average;
    cout<< "enter the first number \n";
    cin>>a;
    cout<<"enter the second number \n";
    cin>>b;
    cout<<"the third number \n";
    cin>>c;

    if(a==b&&a==c&&b==c){
        cout<<"Neither maximum nor minimum\n";}
      else if(a>b)
    {
        if(a>c&&b<c)
        cout<< "the  maximum is = "<< a<< endl<<"the minimum is = "<< b<<endl;
        else if(a>c&&b>c)
        cout<< "the maximum is = "<< a<<endl<<"the minimum is = " << c<<endl;
        else if(a<b&&b<c)
           cout<<"the maximum is = " << c<<endl<<"the minimum is = " << b<<endl;
        else
        cout<< "the maximum is = "<< c<<endl<<"the minimum is = " << c<<endl;


    }

    else

        if(b>c&&a>c)
        cout<< "the maximum is = " << b<<endl<<" the minimum is = "  << c<<endl;
        else if(b>c&&a<c)
        cout<< "the  maximum = "<< b<<endl<< "the minimum is = " << a<<endl;
        else if(b<c)
        cout<< "the maximum is = " << c << endl<<" the minimum is = " << a <<endl;
        else
        cout<< "the maximum is = " << b<<endl<<"the minimum is = "<< a<<endl;
        sum=a+b+c;
        cout<<"the sum of the three number is = " <<sum<<endl;
        average=sum/3;
        cout<<"the average of the three number is = " <<average<<endl;
}
/*GROUP MEMBERS SECTION A
ABDI DEBELA 1878/14
AYANA FILE  2226/14
BANA DAWIT 2245/14
AMANUEL ABATE 2122/14
*/
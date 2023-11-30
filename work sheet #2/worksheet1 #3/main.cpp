/*GROUP MEMBERS SECTION A
ABDI DEBELA 1878/14
AYANA FILE  2226/14
BANA DAWIT 2245/14
AMANUEL ABATE 2122/14
*/

/*receive 3 numbers and display the
in ascending order from smallest to largest
if the user enters three equal numbers or
the two are the same and one is diffrent
 the program can work*/
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout<< "enter the first number \n";
    cin>>a;
    cout<<"enter the second number \n";
    cin>>b;
    cout<<"the third number \n";
    cin>>c;


    if(a==b&&a==c&&b==c){//if the three numbers are equal
         cout<<a<<endl;
    }

      else if(a!=b&&b!=c&&a!=c){if(a>b){
    //if the three numbers are not equal
            if(a>c){
                if(b>c){
            cout<<c<<","<<b<<","<<a<<endl;
        }
        else{
            cout<<b<<","<<c<<","<<a<<endl;
    }
            }
            else{
                cout<<b<<","<<a<<","<<c<<endl;
            }
       }

       else
        {if(b>c){
            if(a>c){
                cout<<c<<","<<a<<","<<b<<endl;
            }
            else{
                cout<<a<<","<<c<<","<<b<<endl;
            }
        }
            else
                {
                cout<<a<<","<<b<<","<<c<<endl;
                }
        }
    }
    else
    if(a==b){
            //the value of a and b are equal
        if(a>c){
                 cout<<"the two numbers ARE equal "<<c<<","<<a<<endl;

        }
        else{
             cout<<a<<","<<c<<endl;
        }
    }
    else if(b==c){
            //the value of b and c are equal
        if(b>a){
             cout<<"the two numbers ARE equal "<<a<<","<<b<<endl;
        }
        else{
             cout<<"the two numbers ARE equal "<<b<<","<<a<<endl;
        }
    }
    else if(a==c){
        //the value of a and c are equal
        if(a>b){
             cout<<"the two numbers ARE equal "<<b<<","<<a<<endl;
        }
        else{
             cout<<"the two numbers ARE equal "<<a<<","<<b<<endl;
        }
    }

       return 0;

                }

#include <iostream>

using namespace std;

int main()
{
    int mid,final,sum;
    char exit;

    while(exit !='y')
    {
    cout<<"Enter mid mark[0-40] "<<endl;
    cin>>mid;
    while(mid>40||mid<0){
        cout<<" Invalid mid mark Please enter again "<<endl;
        cin>>mid;
    }
    cout<<"Enter the final mark[0-60] "<<endl;
    cin>>final;
    while(final>60||final<0){
        cout<<"Invalid final mark Please enter again "<<endl;
        cin>>final;
    }

        sum=mid + final;
        if(sum>=40){
            if(sum>=40&&sum<50)
                cout<<"Your grade is D "<<endl;
            else if(sum>=50&&sum<55)
                cout<<"Your grade is C-"<<endl;
            else if(sum>=55&&sum<60)
            cout<<"Your grade is C "<<endl;
            else if(sum>=60&&sum<65)
            cout<<"Your grade is C+ "<<endl;
            else if(sum>=65&&sum<70)
            cout<<"Your grade is B-"<<endl;
            else if(sum>=70&&sum<75)
            cout<<"Your grade is B"<<endl;
            else if(sum>=75&&sum<80)
            cout<<"Your grade is B+"<<endl;
            else if(sum>=80&&sum<85)
            cout<<"Your grade is A-"<<endl;
            else if(sum>=85&&sum<90)
            cout<<"Your grade is A"<<endl;
            else
            cout<<"Your grade is A+ "<<endl;

        }
        else{
            cout<<"Non grade or F "<<endl;
        }

    cout<<"DEAR if you want to quit press y or press any character to continiue"<<endl;
    cin>>exit;
    }

    return 0;
}

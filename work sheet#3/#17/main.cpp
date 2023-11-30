//date month year validation checking
#include<iostream>
using namespace std;
int main(){
    while (true){
 int day,month,year;
  cout<<"Enter the date the month and the year(dd mm yy) :" ;
  cin>>day>>month>>year;
if((day>=1 && day <=31) && (month>=1 && month<=12&&year>=1))
{
    //this is for some months that have 31 days
if((month==1 || month==3 || month==5|| month==7|| month==8||month==10||month==12) && day>0 && day<=31) {
      cout<<day<<"/" << month<<"/"<<year<<" is valid date"<<endl;

if (day<0 || day>31)//If the day is not between 0 and 31
  cout<<"Invalid day of month: "<<day<< endl;
}
//this is for some months that have 30 days
else if(month==4 ||  month==6 ||  month==9|| month==11 && day>0 && day<=30)
 {
    cout<<day<<"/" << month<<"/"<<year<<" is valid date"<<endl;

if (day<0 || day>30)//If the day is not between 0 and 30
cout<<"Invalid day of month: "<<day<< endl;
}
else

if(month==2)
{
    // This is when the year is leap year
if((year%400==0 || (year%100!=0 && year%4==0)) && day>0 && day<=29)
 cout<<day<<"/" << month<<"/"<<year<<" is valid date"<<endl;
else if (day>0 && day<=28)
     cout<<day<<"/" << month<<"/"<<year<<" is valid date"<<endl;
else
    cout<<"Invalid day of month: "<<day<< endl;
}
}
else
{
   if (day<1 || day >31)
     cout <<"Invalid day: "<<day<<endl;
   if(month<1 || month>12)
   cout <<"Invalid month: "<<month<<endl;
   if(year<1700 || year >3000)
   cout <<"Invalid year: "<<year<<endl;
}

}
  return 0;
}

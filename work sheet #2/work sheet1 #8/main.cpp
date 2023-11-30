//find the area of a circle where the radius is provided by the user
#include <iostream>
using namespace std;
#define phai 3.14

int main()
{
    float radius,area;
    cout <<"Enter the radius "<<endl;
    cin>>radius;
    area=phai*radius*radius;

    cout << "The area of the circle is " <<area << endl;
    return 0;
}

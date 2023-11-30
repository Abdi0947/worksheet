#include <iostream>

using namespace std;

int main()
{ for(int i=3; i>=1; i--){
   for(int j=1; j<i; j++){
    cout<<" ";
   }
   for(int z=3; z>=i; z--)
    {
    cout<<"*";
    }
   for(int u=3; u>i; u--){
    cout<<"*";
    }
    for(int k=1; k<=i; k++){
        cout<<" ";
    }
    cout<<endl;
}
for(int f=1; f<=2; f++){
    for(int g=1; g<=f; g++){
        cout<<" ";
    }for(int y=2; y>=f; y--){
        cout<<"*";
    }
        for(int c=1; c==f;c++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

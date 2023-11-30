//using ASCII table numbers
#include <iostream>

using namespace std;

int main()
{ char j;
//using nested loop shoul 1 to 5
    for(int i=1; i<=5; i++){
        for(int j=65,k=0; k<i;j++,k++){
   //the inner loop start should be 65 because the value of A in ASCII table is 65
           cout<<(char)j;
        }
       cout <<endl;
    }

    return 0;
}
/*GROUP MEMBERS SECTION A
ABDI DEBELA 1878/14
AYANA FILE  2226/14
BANA DAWIT 2245/14
AMANUEL ABATE 2122/14
*/

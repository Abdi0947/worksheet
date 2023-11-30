/*USING SWITCH STATEMENT DISPLAY WHETHER A VOWEL OR
 A CONSONANT CHARACTER IS ENTERED BY USER AND
 THE PROGRAM SHOULD WORK FOR BOTH LOWER CASE AND UPPER CASE LETTER*/
#include <iostream>

using namespace std;

int main()
{
    char letter;
    cout<<"Enter letter \n";
    cin>>letter;
    switch(letter){
case'a':
    case'A':
    cout<<"The letter  is a vowel\n";
    break;
    case'e':
    case'E':
        cout<<"The letter is a vowel\n";
        break;
    case'i':
    case'I':
         cout<<"The letter is a vowel\n";
         break;
    case'o':
    case'O':
         cout<<"The letter  is a vowel\n";
        break;
    case'u':
    case'U':
        cout<<"The letter  is a vowel\n";
        break;
    default:
    cout << "The letter  is consonant\n";
    }
    return 0;
}

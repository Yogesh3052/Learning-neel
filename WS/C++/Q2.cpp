// Any character is entered by the user; write a program to determine whether the character entered is a capital letter, 
// a small case letter, a digit or a special symbol
#include <iostream>
using namespace std;

int main()
{
    char ch;
    int val;
    cout<<"Enter a Character : ";
    cin>>ch;
    val = int(ch);
    cout<<"The ASCII value of character is "<<val; 
    if (val >= 65 && val<= 90)
    {
        cout<<"\nCharacter is 'Capital' letter";
    }
    else if (val >= 97 && val<= 122)
    {
        cout<<"\nCharacter is 'Small' letter";
    }
    else if (val >= 48 && val<= 57)
    {
        cout<<"\nCharacter is a 'Digit'";
    }
    else if ((val >= 0 && val<= 47) || (val >= 58 && val<= 64) || (val >= 91 && val<= 96) || (val >= 123 && val<= 127) )
    {
        cout<<"\nCharacter is special character";
    }
}
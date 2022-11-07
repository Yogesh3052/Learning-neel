#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int fi = 0,li,check = 0;
    char str[1000];
    cout<<"Enter String :";
    cin>>str;
    li = strlen(str) - 1 ;
    while (li > fi)
    {
        if (str[li] != str[fi])
        {
            cout<<"String is not a Palindrome";
            check = 1;
            break;
        }
        li--;
        fi++;
    }
    if (check == 0)
    {
        cout<<"String is a Palindrome";
    }
}
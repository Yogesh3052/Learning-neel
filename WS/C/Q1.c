// Write a program to check a string is palindrome or not.
#include <stdio.h>
#include <string.h>

int main()
{
    int fi = 0,li,check = 0;
    char str[1000];
    printf("Enter String :");
    scanf("%s",&str);
    li = strlen(str) - 1 ;
    while (li > fi)
    {
        if (str[li] != str[fi])
        {
            printf("String is not a Palindrome");
            check = 1;
            break;
        }
        li--;
        fi++;
    }
    if (check == 0)
    {
        printf("String is a Palindrome");
    }
    
    
}
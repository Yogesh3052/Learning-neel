#include <stdio.h>

int main()
{
    char ch;
    int val;
    printf("Enter a Character : ");
    scanf("%c",&ch);
    val = ch;
    printf("The ASCII value of character is %i",val); 
    if (val >= 65 && val<= 90)
    {
        printf("\nCharacter is 'Capital' letter");
    }
    else if (val >= 97 && val<= 122)
    {
        printf("\nCharacter is 'Small' letter");
    }
    else if (val >= 48 && val<= 57)
    {
        printf("\nCharacter is a 'Digit'");
    }
    else if ((val >= 0 && val<= 47) || (val >= 58 && val<= 64) || (val >= 91 && val<= 96) || (val >= 123 && val<= 127) )
    {
        printf("\nCharacter is special character");
    }
}
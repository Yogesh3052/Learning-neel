#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Input 1st number : ");
    scanf("%i",&n1);
    printf("Input 2nd number : ");
    scanf("%i",&n2);
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;

    printf("After swapping the 1st number is : %i",n1);
    printf("\nAfter swapping the 2nd number is : %i",n2);
}
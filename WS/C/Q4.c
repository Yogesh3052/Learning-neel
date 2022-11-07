// Write a program which accepts the radius of a circle from the user and compute the area and circumference.
// Sample Output:
// Find the area and circumference of any circle :
// ----------------------------------------------------
// Input the radius(1/2 of diameter) of a circle : 5
// The area of the circle is : 78.571251
// The circumference of the circle is : 31.428499
#include <stdio.h>
#define pi 3.14285
int main()
{
    float rad = 0;
    printf("Input the radius(1/2 of diameter) of a circle : ");
    scanf("%f",&rad);
    float area = pi * rad * rad;
    printf("\nThe area of the circle is : %f",area);
    float circumference = 2 * pi * rad ;
    printf("\nThe circumference of the circle is : %f",circumference);
}
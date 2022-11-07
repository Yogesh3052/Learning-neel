// Write a program which accepts the radius of a circle from the user and compute the area and circumference.
// Sample Output:
// Find the area and circumference of any circle :
// ----------------------------------------------------
// Input the radius(1/2 of diameter) of a circle : 5
// The area of the circle is : 78.5713
// The circumference of the circle is : 31.4285
#include <iostream>
using namespace std;

int main()
{
    const float pi = 3.14285;
    int rad = 0;
    cout<<"Input the radius(1/2 of diameter) of a circle : ";
    cin>>rad;
    cout<<"The area of the circle is : "<<(pi * rad * rad)<<endl;
    cout<<"The circumference of the circle is : "<<(2 * pi * rad)<<endl;

    return 0;
}
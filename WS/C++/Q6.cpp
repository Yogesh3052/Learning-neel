// Write a program to compute the distance between two points on the surface of earth.
// Sample Output:
// Print the the distance between two points on the surface of earth:
// -----------------------------------------------------------------------
// Input the latitude of coordinate 1: 25
// Input the longitude of coordinate 1: 35
// Input the latitude of coordinate 2: 35.5
// Input the longitude of coordinate 2: 25.5
// The distance between those points is: 1480.08

#include <iostream>
#include <math.h>
using namespace std;

float PI = 3.14;

int main(){
    double distance,la1,la2,lo1,lo2,earth_radius,r;
    cout << "Input the Latitude of 1st co-ordinate : " << endl;
    cin >> la1;
    cout << "Input the Longitude of 1st co-ordinate : " << endl;
    cin >> lo1;
    cout << "Input the Latitude of 2st co-ordinate : " << endl;
    cin >> la2;
    cout << "Input the Longitude of 2st co-ordinate : " << endl;
    cin >> lo2;

    la1 = la1 * (PI/180);
    la2 = la2 * (PI/180);
    lo1 = lo1 * (PI/180);
    lo2 = lo2 * (PI/180);
    earth_radius = 6400;

    distance = earth_radius * acos((sin(la1) * sin(la2)) + (cos(la1)*cos(la2)*cos(lo1-lo2)));

    cout << "Distance between points : " << distance << "km"<<endl;

    return 0;
}
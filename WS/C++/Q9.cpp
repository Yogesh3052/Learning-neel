// There are four different points on a plane: A(x1, y1), B(x2, y2), C(x3, y3) and D(x4, y4).
// Write a program to check whether two straight lines AB and CD are orthogonal or not.
// Input:
// 0 6
// 5 6
// 3 8
// 3 2

#include <iostream>
using namespace std;

int main()
{

    double x[4], y[4];
    char ch;
    cout << "Enter Co-ordinate : " << endl;
    while(true)
    {
        for(int i= 0; i < 4; i++){
            cin >> x[i] >> y[i];
        }
        if((x[1] - x[0])* (x[3]-x[2])+ (y[3]-y[2])*(y[1]-y[0]) == 0)
        {
            cout << "Orthogonal lines" << endl;
        }
        else
        {
            cout << "not Orthogonal lines" << endl;
        }
        cout<<"Want to check again (y/n) : ";
        cin>>ch;
        if (ch == 'n')
        {
            false;
            break;
        }
    }

    return 0;
}
// Write a program to add two binary numbers.
// Sample Output:
// Addition of two binary numbers:
// -----------------------------------
// Input the 1st binary number: 1010
// Input the 2nd binary number: 0011
// The sum of two binary numbers is: 1101

#include <iostream>
using namespace std;

int main()
{ 
    int n1,n2,cr=0,sum[20],i=0;
        cout<<"Enter First Binary Number : \n";
        cin>>n1;
        cout<<"Enter second Binary Number : \n";
        cin>>n2;
        while(n1!=0 || n2!=0)
        {
            sum[i++]=(((n1%10)+(n2%10)+cr)%2);
            cr=(((n1%10)+(n2%10)+cr)/2);
            n1=n1/10;
            n2=n2/10;
        }

        if(cr!=0)
        {
            sum[i++]=cr;
        }
        --i;

        cout<<"Binary Addition : \n";

        while(i>=0)
        {
            cout<<sum[i--];
        }
        cout << endl;

    return 0;
}
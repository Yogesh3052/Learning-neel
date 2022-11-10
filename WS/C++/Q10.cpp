// The marks obtained by a student in 5 different subjects are input by the user. The student gets a division as per the following rules:
// Percentage above or equal to 60 - First division
// Percentage between 50 and 59 - Second division
// Percentage between 40 and 49 - Third division
// Percentage less than 40 - Fail
// Write a program to calculate the division obtained by the student. 

#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter Marks : ";
    cin >> marks;

    if(marks >= 60){
        cout << "First Division \n";
    }
    else if(marks >= 50 && marks < 60){
        cout << "Second Division \n";
    }
    else if(marks >= 40 && marks <  50){
        cout << "Third Division \n";
    }
    else if(marks < 40 && marks >= 0){
        cout << "Fail \n";
    }
    else{
        cout << "Invalid Input \n";
    }

    return 0;
}
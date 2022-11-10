// Write a program to compute the sum of the specified number of Prime numbers in range
// For example when n = 7,
// s = 2 + 3 + 5 + 7 + 11 + 13 + 17 = 58

#include <iostream>
using namespace std;

int isPrime(int j){
    int count = 0;
    for(int i = 2; i <= j/2; i++){
        if(j%i == 0){
            count = 1;
        }
    }

    if(count == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    int n;
    int i = 0, j = 1;
    int sum = 0;
    cout << "Enter Range : ";
    cin >> n;
    while(1){
        j++;
        if(isPrime(j)){
            sum += j;
            i++;
        }

        if(i == n){
            break;
        }
    }

    cout << "The sum of first " << n << " is " << sum << endl;
    return 0;
}
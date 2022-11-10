#include <stdio.h>

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
    printf("Enter range : ");
    scanf("%d" , &n);

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

    printf("Sum of first %d prime number : %d \n",n,sum);
    return 0;
}
#include <stdio.h>

int main(){

    int marks;
    printf("Enter Marks : ");
    scanf("%d", &marks);

    if(marks >= 60){
        printf("First Division \n");
    }
    else if(marks >= 50 && marks < 60){
        printf("Second Division \n");
    }
    else if(marks >= 40 && marks <  50){
        printf("Third Division \n");
    }
    else if(marks < 40 && marks >= 0){
        printf("Fail \n");
    }
    else{
        printf("Invalid Input \n");
    }

    return 0;
}
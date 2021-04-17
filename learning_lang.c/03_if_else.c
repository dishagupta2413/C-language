#include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if(age>=70){
        printf("You are above 70, you cannot drive\n");
    }
    else{
        printf("You can drive\n");
    }

    if(age==50){
    printf("Half century\n");
    }

    return 0;
}
#include<stdio.h>

int main(){
    int x = 4;
    int y = 9;

    printf("The value of 3*x - 8*y is %d\n", 3*x-8*y);
    //BODMAS is not applicable in C
    // (*,/,%) --> first priority
    // (+,-) --> second priority
    // (=) -->third priority
    // for equal priorities we have to keep property of association in mind 
    // ex -->(8*3)/(2*3) will return 4
     printf("The value of 8*3/2*3 is %d\n", 8*3/2*3);
     // here answer is 36 as 8*3=24, 24/2=12, 12*3= 36
    return 0;
}
#include<stdio.h>

int main(){
    int yr=1800;
    do{
        yr=yr+4;
    if(yr==1900){
        continue;
    }else{
        printf("%d\t",yr);
    }
    }while(yr<2000);
    printf("Leap year from 1800 to 2000 are displayed above\n");
    return 0;
}
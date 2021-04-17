#include<stdio.h>

int main(){
{
    int num, pnum, nnum, zeros;
    pnum=nnum=zeros=0;
    for (int value = 1; value > 0;)
    {
        printf("Enter the number :");
        scanf("%d", &num);
       
        if (num > 0)
            pnum++;
        else if (num < 0)
            nnum++;
        else if (num==0)
            zeros++;
         if (num == -1)
        {
            printf("Total number of postive numbers= %d, negative=%d and zeros =%d.",pnum,nnum,zeros);
            break;
        }

}}
    return 0;
}
#include<stdio.h>
int main()
{
    int n,max=0,min=10000000,sum=0,count_even=0,count_odd=0;
    float avg;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]>max)
        max = array[i];

        if(min>array[i])
        min = array[i];

        sum = sum+array[i];

        if(array[i] % 2 == 0)
        count_even++;
        else
        count_odd++;

    }
    avg = sum/n;
    printf("Minimum = %d\nMaximum =  %d\nAverage =  %0.2f\nEven =  %d\nOdd =  %d",min,max,avg,count_even,count_odd);
}
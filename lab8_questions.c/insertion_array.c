#include<stdio.h>//insertion//    
int main()
{
    int n;
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the value to be inserted\n");
    int num,pos;
    scanf("%d",&num);
    printf("Enter the position at which the number is to be entered\n");
    scanf("%d",&pos);

    for(int i=n;i>pos;i--)
    {
        array[i
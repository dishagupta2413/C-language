#include<stdio.h>
 int main()
{
    int i,j,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("prime numbers are: ");
    for(i=2;i<=n;i++)
    {
        int count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
         
       if(count==2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
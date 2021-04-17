/*#include <stdio.h>


int main()
{
    for (int i; i >= 0; i--)
    {
        printf("Enter the number you want the factorial of:\n");
        scanf("%d", &i);
        if (i == 1 || i == 0)
        {
            printf("The factorial of %d is %d\n", i, 1);
        }
        else
        {
            int c;

              for( c = (i *  i--); 
                printf("The factorial of %d is %d\n", i++, c);
        }
    }
    return 0;
}*/
#include<stdio.h>  
int main()    
{    
 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",number,fact);    
return 0;  
}   
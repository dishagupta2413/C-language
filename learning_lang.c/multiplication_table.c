#include<stdio.h>

int main(){
    int p , i=0;
    printf("Enter the number\n");
    scanf("%d",&p);
  /*  do{
        printf("p*i is %d\n",p*i);
        
        i=i+1;

    }while (i<11);*/

    for(int i=1; i < 11; i++)
    {
        printf("%d x %d = %d\n", p,i,p*i);
    }
    return 0;
}
#include <stdio.h>

int main()
{
    char sub;
    printf("Enter the sub you have passed : \n", sub);
    scanf("%c", &sub);
    if (sub == 'm')
    {
        printf("Gift given to the student is of 15 ruppee\n");
    }
    else if (sub == 's')
    {
        printf("Gift given to the student is of 30 ruppee\n");
    }
    else if (sub == 'b')
    {
        printf("Gift given to the student is of 60 ruppee\n");
    }

    return 0;
}
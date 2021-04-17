#include <stdio.h>

int main()
{
    int age;
    int vipPass = 0;
    // vipPass = 1;

    printf("Enter your age\n");
    scanf("%d", &age);
    if ((age <= 70 && age >= 18) || !(vipPass == 1))
    //here not(!) will make our false statement true
    {
        printf("You are above 18 and below 70, you can drive\n");
    }
    else
    {
        printf("You cannot drive\n");
    }

    if (age == 50)
    {
        printf("Half century\n");
    }

    return 0;
}
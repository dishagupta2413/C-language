#include <stdio.h>

int main()
{
    int sal, finalsal, bonus;
    char gen;
    printf("Enter the salary of employee\n");
    scanf("%f", &sal);
    printf("Enter the Gender of Employee\n");
    scanf("%c", &gen);
     if (gen == 'M')
        {
            bonus = (5 * sal) / 100;
            finalsal = sal + bonus;
        }
        else if (gen == 'F')
        {
            bonus = (0.1 * sal);
            finalsal = sal + bonus;
        }
    
     if(sal<10000)
    {
        bonus = bonus + sal * 0.02;
        finalsal = finalsal + bonus;
    }
    printf("The BONUS of the employee is Rs. %d \n", bonus);
    printf("The Final Salary of the employee is Rs. %d", finalsal);

    return 0;
}
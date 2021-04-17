#include <stdio.h>

int main()
{
    char sex;
    float salary, bonus;
    printf("Enter sex \n");
    printf("Enter salary\n");
    scanf("%c%f", &sex,&salary);
    if (salary > 10000)
    {
        if (sex == 'f' || sex=='F')
        {
            bonus = (salary) / 10;
            printf("Bonus of female employees whose salary is greater than 10000 is %f\n", bonus);
        }
        else if(sex == 'm' || sex=='M') {
            bonus = (salary)*5 / 100;
            printf("Bonus of male employees whose salary is greater than 10000 is %f\n", bonus);
        }
    }
    else if(salary < 10000) {
        if (sex == 'f' || sex=='F')
        {
            bonus = (salary)*12 / 100;
            printf("Bonus of female employees whose salary is less than 10000 is %f\n", bonus);
        }
        else if(sex == 'm' || sex=='M')
        {
            bonus = (salary)*7 / 100;
            printf("Bonus of male employees whose salary is less than 10000 is %f\n", bonus);
        }
    }


return 0;
}
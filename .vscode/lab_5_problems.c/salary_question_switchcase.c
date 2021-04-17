#include <stdio.h>

#include <stdio.h>

int main()
{
    char sex;
    float salary, bonus;
    printf("Enter sex \n");
    printf("Enter salary\n");
    scanf("%c%f", &sex, &salary);
    switch (sex)
    {
    case 'm':
    case 'M':
        //M denotes male employees
        // base bonus that will be provided to every male
        bonus = salary * 5 / 100;
        // if salary is less than 10000 an extra bonus of 2% is given so adding 2% of salary to bonus
       if (salary < 10000)
        bonus = bonus + salary * 2 / 100;
        printf("Bonus of male employees whose salary is greater than 10000 is %f\n", bonus);
        break;
    case 'f':
    case 'F':	
        //F denotes female employees
        sex == 'F';
        bonus = salary * 7 / 100;
        // if salary is less than 10000 an extra bonus of 2% is given so adding 2% of salary to bonus
        if (salary < 10000)
        bonus = bonus + salary * 2 / 100;
        printf("Bonus of male employees whose salary is greater than 10000 is %f\n", bonus);
    }
    return 0;
}
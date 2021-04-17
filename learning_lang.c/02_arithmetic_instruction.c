#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4.8;
    int b = 4.3;
    
    printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);//here zero will be the answer as operation between int
    //and int will give int, float and int -->float, float and float-->float
    
    int z;
    z = b * a; //Legal
    //b * a = z;//Illegal
    printf("The value of z is %d\n", z);

    printf("5 when divided by 2 leaves a remainder of %d\n", 5%2);
    printf("-5 when divided by 2 leaves a remainder of %d\n", -5%2);
    printf("5 when divided by -2 leaves a remainder of %d\n", 5%-2);
    //No operator is assumed to be present like 4.5 or (4)(5) is not same as 4*5 and won't return 20
    //There is no operator to perform exponentiation in C
    printf("The value of 4 to the power 5 is %f\n",pow(4,5));




    return 0;
}
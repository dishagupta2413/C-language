#include <stdio.h>

int main()
{
    for (char i = 'A'; i < 'G'; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            printf("%c ", j);
        }
        for (int j = (int)('F' - i); j != 0; j--)
        {
            printf("  ");
        }
        for (int j = (int)('F' - i); j != 0; j--)
        {
            printf("  ");
        }
        for (char j = i; j >= 'A'; j--)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}
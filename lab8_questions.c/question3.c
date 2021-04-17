#define __STDC_WANT_LIB_EXT1__ 1
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 char str[50] = "This";
 char str2[50] = "Is";
 strcat(str, str2);
 strcat(str, " a");
 strcat(str, " c program");
 puts(str);
#ifdef __STDC_LIB_EXT1__
 set_constraint_handler_s(ignore_handler_s);
 int r = strcat_s(str, sizeof str, " ... ");
 printf("str = \"%s\", r = %d\n", str, r);
 r = strcat_s(str, sizeof str, " AND THIS IS VERY HIGH");
 printf("str = \"%s\", r = %d\n", str, r);
#endif
}
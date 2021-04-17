#include <stdio.h>
#include <stdlib.h>
int main()
{ 
 FILE *fptr1, *fptr2;
 char filename[100], c;

 //pick from here
 printf("Enter the filename for reading \n");
 scanf("%s", filename);
 fptr1 = fopen(filename, "r");
 if (fptr1 == NULL)
 {
 printf("Cannot open file %s \n", filename);
 exit(0);
 }
 // put here
 printf("Enter the filename for writing \n");
 scanf("%s", filename);
 fptr2 = fopen(filename, "w");
 if (fptr2 == NULL)
 {
 printf("Cannot open file %s \n", filename);
 exit(0);
 }
 c = fgetc(fptr1);
 while (c != EOF)
 {
 fputc(c, fptr2);
 c = fgetc(fptr1);
 }
 printf("\nMaterial copied to %s", filename);
 fclose(fptr1);
 fclose(fptr2);
 return 0;
}
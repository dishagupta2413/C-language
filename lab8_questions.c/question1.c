#include <stdio.h>
#define MAX_FILE_NAME 100
int main()
{
 FILE* fp;
 int count = 0;
 char filename[MAX_FILE_NAME];
 char c; 
 // The file is kept in current folder by disha
 printf("Enter name of file: ");
 scanf("%s", filename);
 fp = fopen(filename, "r");
 if (fp == NULL) {
 printf("Could not open file %s", filename);
 return 0;
 }
 for (c = getc(fp); c != EOF; c = getc(fp))
 // Increment count for thE character as computer is a dumb machine XD
 count = count + 1;

 fclose(fp);
 printf("The file %s has %d characters\n ", filename, count);
 return 0;
}
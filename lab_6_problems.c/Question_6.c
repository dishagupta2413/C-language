#include<stdio.h>
#include<math.h>
int main()
{
   int x1, y1, x2, y2, x, y, distance;

   // x1,y1 be first coordinate points
   printf("Enter coordinates of first point: ");
   scanf("%d %d",&x1, &y1);

   // take second coordinate points
   printf("Enter coordinates of second point: ");
   scanf("%d %d",&x2, &y2);

   x = (x2-x1);
   y = (y2-y1);

   distance = sqrt(x*x + y*y);

   // display result
   printf("Distance between two points in two dimension = %d", distance);

   return 0;
}
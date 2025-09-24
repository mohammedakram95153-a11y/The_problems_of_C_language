// write a C program to find the area of the circle

#include <stdio.h>
#define PI 3.14159
int main()
{
   float radius;
   float area;
   printf("Enter the value of radius\n");
   scanf("%f", &radius);
#define PI 3.14159
   area = PI * radius * radius;
   printf("The area of this circle is %f", area);

   return 0;
}
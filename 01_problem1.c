// write a C program to find the area of the RECTANGLE

#include<stdio.h>
int main(){
    //int lenght = 2;
    //int breadth = 3;

    int length, breadth;

    printf("Enter length\n");
    scanf("%d", &length);  // %d is for integers.

    printf("Enter breadth\n");
    scanf("%d", &breadth);  // %d is for integers.

    printf("The area of this reactangle is %d", length*breadth); // %d is for integers.

    return 0;
}
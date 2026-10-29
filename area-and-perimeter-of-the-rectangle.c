/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float length, width, area, perimeter;
    printf("enter the length of the rectangle:");
    scanf("%f", &length);
    printf("enter the width of the rectangle:");
    scanf("%f", &width);
    area=length*width;
    perimeter=2*(length+width);
    printf("\n result");
    printf("area of the rectangle: %.2f\n", area);
    printf("perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}

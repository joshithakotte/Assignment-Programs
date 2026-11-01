/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
float weight, height, BMI;
printf("enter weight in kg:");
scanf("%f", &weight);
printf("enter height in metres");
scanf("%f", &height);
BMI=weight/(height*height);
printf("BMI = %.2f\n", BMI);
if (BMI <18.5)
{ 
    printf("category:underweight\n");
}
else if (BMI < 25)
{
    printf("category normal\n");
}
else 
{
    printf("category overweight\n");
    

}
    return 0;
}

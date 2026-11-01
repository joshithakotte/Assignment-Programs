/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int marks;
printf("enter the marks out of 100:");
scanf("%d", &marks);
if (marks<0|| marks>100)
printf("invalid marks");
else if (marks >=90)
printf("grade 0");
else if (marks >=80)
printf("grade A+");
else if (marks >=70)
printf("grade A");
else if (marks >=60)
printf("grade B");
else if ("marks >=50")
printf("grade C");
else
printf("Fail");


    return 0;
}
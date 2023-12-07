#include<stdio.h>
#include<conio.h>
void main()
{
float a,b;
clrscr();
printf("Simple Calculator By Shahmoksh22\n");
printf("Enter First Number : ");
scanf("%f",&a);
printf("Enter Second Number : ");
scanf("%f",&b);
printf("***** Printing Calculation *****\n");
printf("Addition is %.2f\n",a+b);
printf("Subtraction is %.2f\n",a-b);
printf("Multiplication is %.2f\n",a*b);
printf("Division is %.2f",a/b);
getch();
}
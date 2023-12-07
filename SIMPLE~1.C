#include <stdio.h>
#include<conio.h>
void main()
{
	float P,R,T,SI;
	double A;
	clrscr();
	printf("Please enter Principal Amount :");
   scanf("%f", &P);
   printf("Please enter Time :");
   scanf("%f", &T);
   printf("Please enter Rate of interest :");
   scanf("%f", &R);
	SI = (P * T * R) / 100;
	printf("Simple Interest = %f\n", SI);
A=SI+P;
    printf("Amount to be return = %f\n", A);
    getch();
}
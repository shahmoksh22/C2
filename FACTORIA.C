#include<stdio.h>
#include<conio.h>
void main(){
int a=1,b,s=1;
clrscr();
printf("Enter the Number : ");
scanf("%d",&b);
while(a<=b)
{
	s=s*a;
	a++;
	}
printf("Factorial is %d",s);
getch();
}
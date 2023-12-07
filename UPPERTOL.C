#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
       printf("Program which convert Upercase to Lowercase\n");
       printf("Please Enter Char : ");
       scanf("%c",&a);
       if(a>=65,a<=90)
       {
	a=a+32;
	printf("%c",a);
       }
       else if(a>=97,a<=122)
       {
	printf("Char is Already in lowercase");
       }
getch();
}
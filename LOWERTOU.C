#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
       printf("Program which convert Lowercase to Upercase\n");
       printf("Please Enter Char : ");
       scanf("%c",&a);
       if(a>=65,a<=90)
       {
	printf("Char is Already in Upercase");
       }
       else if(a>=97,a<=122)
       {
	a=a-32;
	printf("%c",a);
       }
getch();
}
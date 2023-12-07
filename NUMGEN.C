#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,b;
clrscr();
printf("Enter The Last number you want to print : ");
scanf("%d",&b);
while(a<=b)
{ if(a%2==0)
{
printf("\n%d is even",a);
}
else
{printf("\n%d is odd",a);
}
a++;
}
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,b;
clrscr();

printf("Enter The First number you want to print : ");
scanf("%d",&b);
while(b>=a)
{
printf("\n%d",b);
b--;
}
getch();
}

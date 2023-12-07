#include<stdio.h>
#include<conio.h>
void main()
{
int n,a=1;
clrscr();
printf("Enter the Number of Which you want table : ");
scanf("%d",&n);
     while(a<=10)
     {
      printf("%d X %d = %d\n",n,a,n*a);
      a++;
     }
getch();
}
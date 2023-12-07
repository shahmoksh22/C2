#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
      printf("Enter The Year You Want to Check : ");
      scanf("%d",&a);
      if(a%4==0 && a%100!=0)
      {
      printf("Its a Leap year");
      }
      else
      {
      printf("Its  Not A Leap Year");
      }
getch();
}
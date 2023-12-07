#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,d,max;
 clrscr();
  printf("Maximum Value Finder \n");
 printf("Enter Value of a : ");
 scanf("%d",&a);
 printf("Enter Value of b : ");
 scanf("%d",&b);
 printf("Enter Value of c : ");
 scanf("%d",&c);
 printf("Enter Value of d : ");
 scanf("%d",&d);
 if(a>b)
 {
	if(a>c)
	{
		if(a>d)
		{
		max=a;
		}
		else
		{
		 max=d;
		}
	}
	else
	{
	max=c;
	}
 }
 else
{
   if(b>c)
	{
		if(b>d)
		{
		max=b;
		}
		else
		{
		 max=d;
		}
	}
   else
	{
		if(c>d)
		{
		   max=c;
		 }
		 else
		 {
		   max=d;
		 }
	}
  }

  printf("Maximun value is %d",max);
 getch();
}
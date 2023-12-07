#include<stdio.h>
#include<conio.h>

void main()
{
int i1,i2,i3,i4,i5,a,i;
int q1,q2,q3,q4,q5;
int p1=2000,p2=2000,p3=500,p4=500,p5=200;
clrscr();
printf("Welcome to Billing System\n");
printf("Press 1 for CPU\nPress 2 for Monitor\nPress 3 for Keyboard\nPress 4 for Mouse\nPress 5 for Speaker\nPress 0 To Exit\n");
scanf("%d",&a);
if(a==0)
{
clrscr();
printf("Thanks For Visiting...");
}
else
{
switch(a)
	{
	case 1:
		printf("Cpu has been Selected Please Enter No. of Quantity : ");
		scanf("%d",&q1);
		i=1;
		break;
	case 2:
		printf("Monitor has been Selected Please Enter No. of Quantity : ");
		scanf("%d",&q2);
		i=2;
		break;

	case 3:
		printf("Keyboard has been Selected Please Enter No. of Quantity : ");
		scanf("%d",&q3);
		i=3;
		break;

	case 4:
		printf("Mouse has been Selected Please Enter No. of Quantity : ");
		scanf("%d",&q4);
		i=4;
		break;

	case 5:
		printf("Speaker has been Selected Please Enter No. of Quantity : ");
		scanf("%d",&q5);
		i=5;
		break;

	default : printf("Invalid Item");
		i=0;
		break;
	}
    }
    clrscr();
printf("***** Printing Bill *****\n");
printf("Item      QTY Price TOTAL\n");

switch(i)
	{
	case 1:
printf("CPU       %d   %d   %d ",q1,p1,q1*p1);
		break;
	case 2: printf("Monitor   %d   %d   %d ",q2,p2,q2*p2);

		break;

	case 3: printf("keyboard  %d   %d   %d ",q3,p3,q3*p3);

		break;

	case 4: printf("Mouse     %d   %d   %d ",q4,p4,q4*p4);

		break;

	case 5: printf("Speaker   %d   %d   %d ",q5,p5,q5*p5);

		break;

	default : printf("Invalid Item");
		i=0;
		break;

	}
getch();
}

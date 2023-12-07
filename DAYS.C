#include<stdio.h>
#include<conio.h>
void main(){
 int a;
 clrscr();
 printf("Enter 0 for January\n");
 printf("Enter 1 for Febuary\n");
 printf("Enter 2 for March\n");
 printf("Enter 3 for April\n");
 printf("Enter 4 for May\n");
 printf("Enter 5 for June\n");
 printf("Enter 6 for July\n");
 printf("Enter 7 for August\n");
 printf("Enter 8 for September\n");
 printf("Enter 9 for October\n");
 printf("Enter 10 for Nevember\n");
 printf("Enter 11 for December\n");
 printf("Enter The Number : ");
 scanf("%d",&a);
 switch(a)
{
case 0:
	printf("January - 31 Days");
	break;
case 1:
	printf("Febuary - 28 Days");
	break;
case 2:
	printf("March - 31 Days");
	break;
case 3:
	printf("April - 30 Days");
	break;
case 4:
	printf("May - 31 Days");
	break;
case 5:
	printf("June - 30 Days");
	break;
case 6:
	printf("July - 31 Days");
	break;
case 7:
	printf("August - 31 Days");
	break;
case 8:
	printf("September - 30 Days");
	break;
case 9:
	printf("October - 31 Days");
	break;
case 10:
	printf("November - 30 Days");
	break;
case 11:
	printf("December - 31 Days");
	break;
default:
	printf("Invalid Number");
	break;
}
 getch();
}
#include<stdio.h>
#include<conio.h>
void main(){
 char a;
 clrscr();
 printf("Enter M for MONDAY\n");
 printf("Enter T for TUESDAY\n");
 printf("Enter W for WEDNESDAY\n");
 printf("Enter H for THRUSDAY\n");
 printf("Enter F for FRIDAY\n");
 printf("Enter S for SATURDAY\n");
 printf("Enter U for SUNDAY\n");
 printf("Enter HERE	 : ");
 scanf("%c",&a);
 switch(a)
{
case 'M':
	printf("MONDAY");
	break;
case 'T':
	printf("TUESDAY");
	break;
case 'W':
	printf("WEDNESDAY");
	break;
case 'H':
	printf("THRUSDAY");
	break;
case 'F':
	printf("FRIDAY");
	break;
case 'S':
	printf("SATURDAY");
	break;
case 'U':
	printf("SUNDAY");
	break;
default:
	printf("Invalid Character");
	break;
}
 getch();
}
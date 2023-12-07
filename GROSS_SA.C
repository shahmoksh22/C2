#include<stdio.h>
#include<conio.h>
void main(){
int bs,gs,hra,ta,da;
clrscr();
printf("Gross Salary Calculator\n");
	printf("Please Enter base Salary : ");
	scanf("%d",&bs);
	hra=(bs*8)/100;
	ta=(bs*5)/100;
	da=(bs*10)/100;
	gs=bs+hra+ta+da;
	printf("Gross Salary : %d",gs);
getch();
}
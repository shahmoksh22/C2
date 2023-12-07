#include<stdio.h>
#include<conio.h>
void main()
{
int us,ps;
int user,pass;
us=1;
ps=1;
clrscr();
printf("enter the user name:");
scanf("%d",user);
printf("enter the password:");
scanf("%d",pass);
if(user==us)
{
	if(pass==ps)
	{
	printf("login sucessfull");
	}
	else
	{
	printf("incorrct pass");
	}
}
else
{
	if(ps==pass)
	{
	printf("incorrect user");
	}
	else
	{
	printf("incorrct user and password");
	}
}
getch();
}
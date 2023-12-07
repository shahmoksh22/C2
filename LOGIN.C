#include<stdio.h>
#include<conio.h>
void main()
{
int us,pw,user,pass;
user=123;
pass=456;
clrscr();
printf("Enter the username : ");
scanf("%d",&us);
printf("Enter the Password : ");
scanf("%d",&pw);
	if(us==user)
	{
		if(pw==pass)
		{
		 printf("login is successful");
		}
		else
		{
		 printf("Password is incorrect");
		}
	}
	else
	{
		if(pw==pass)
		{
		 printf("Username is Incorrect");
		}
		else
		{
		 printf("Username & Password is incorrect");
		}
	}

getch();
}
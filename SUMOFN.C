#include<stdio.h>
#include<conio.h>
void main(){
int a=1,b,sum=0;
clrscr();
printf("Enter the Number : ");
scanf("%d",&b);
while(a<=b)
{

	printf("%d\n",a);
	a++;
	sum=sum+a;

	}
printf("Sum is %d",sum);
getch();
}
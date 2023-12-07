#include<string.h>
#include<conio.h>
void div(int a)
{
if((a%3==0) && (a%5==0))
{
	printf("Number is Divisible by 3 & 5");
}
else
{
	printf("Number is Not Divisible by 3 & 5");
}
}
void main()
{
	int a;
	printf("Please Enter Number : ");
	scanf("%d",&a);
	div(a);
}

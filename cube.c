#include<string.h>
#include<conio.h>
void cube(int a)
{
	int cube;
cube=a*a*a;
printf("Cube is %d",cube);	
}
void main()
{
	int a;
	printf("Please Enter Number : ");
	scanf("%d",&a);
	cube(a);
}

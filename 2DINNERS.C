#include<stdio.h>
#include<conio.h>
void main()
{
int c=5,b=5,i,j,sum=0;
int a[5][5];
clrscr();
	for(i=0;i<c;i++)
	{
	 for(j=0;j<b;j++)
	 {
	  printf("Please Enter Value of a[%d][%d] : ",i,j);
	  scanf("%d",&a[i][j]);
	 }
	}
	for(i=0;i<c;i++)
	{
	 for(j=0;j<b;j++)
	 {
	  printf("%d",a[i][j]);
	 }
	 printf("\n");
	}
	for(i=1;i<4;i++)
	{
	 for(j=1;j<4;j++)
	 {
	  sum=sum+a[i][j];
	 }
	 printf("\n");
	}
	printf("Sum of inner Elements of 5X5 is %d",sum);
getch();
}
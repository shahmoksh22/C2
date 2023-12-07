#include<stdio.h>
#include<conio.h>
void main()
{
int c,b,i,j;
int a[10][10];
int d[10][10];
int e[10][10];
clrscr();
	printf("Please Enter No. of Rows You Want : ");
	scanf("%d",&c);
	printf("Please Enter No. of Coloum You Want : ");
	scanf("%d",&b);
	printf("Enter Values for First Matrix\n");
	for(i=0;i<c;i++)
	{
	 for(j=0;j<b;j++)
	 {
	  printf("Please Enter Value of a[%d][%d] : ",i,j);
	  scanf("%d",&a[i][j]);
	 }
	}
	printf("Enter Values for Second Matrix\n");
	for(i=0;i<c;i++)
	{
	 for(j=0;j<b;j++)
	 {
	  printf("Please Enter Value of d[%d][%d] : ",i,j);
	  scanf("%d",&d[i][j]);
	 }
	}
	printf("First Matrix\n");
	for(i=0;i<c;i++)
	{
	 for(j=0;j<b;j++)
	 {
	  printf("%d ",a[i][j]);
	 }
	 printf("\n");
	}
       printf("Second Matrix\n");
	for(i=0;i<c;i++)
	{
	 for(j=0;j<b;j++)
	 {
	  printf("%d ",d[i][j]);
	 }
	 printf("\n");
	}
	for(i=0;i<c;i++)
	{
	 for(j=0;j<b;j++)
	 {
	  e[i][j] = a[i][j] + d[i][j];
	 }
	}
	printf("Sum is \n");
       for(i=0;i<c;i++)
	{
	 for(j=0;j<b;j++)
	 {
	  printf("%d ",e[i][j]);
	 }
	 printf("\n");
	}
getch();
}
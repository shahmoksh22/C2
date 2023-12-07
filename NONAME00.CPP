#include<stdio.h>
#include<conio.h>
void main()
{
int c,b,i,j,avg=0;
int a[10][10];
clrscr();
	printf("Please Enter No. of Rows You Want : ");
	scanf("%d",&c);
	printf("Please Enter No. of Coloum You Want : ");
	scanf("%d",&b);
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
	  avg=avg+a[i][j];
	 }
	 printf("\n");
	}
	avg=avg/(i+j);
	printf("Avg is %d",avg);

getch();
}
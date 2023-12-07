#include<stdio.h>
#include<conio.h>
int sum(int j,float a[10])
{ float sum=0;
	for(int i=0;i<j;i++)
	   {
	   sum=sum+a[i];
	   }
	   
 printf("Sum is %f",sum);

}
int main ()
{
float a[10],j;
int i;

	   printf("Please Enter No. of Entries you want : ");
	   scanf("%f",&j);
	   for(i=0;i<j;i++)
	   {
	   printf("Enter %d Value : ",i+1);
	   scanf("%f",&a[i]);
	   }
	   sum(j,a);

}

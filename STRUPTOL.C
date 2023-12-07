#include<stdio.h>
#include<conio.h>
void main()
{
char a[5];
int i;
clrscr();
       printf("Program which convert Upercase to Lowercase\n");
       printf("Please Enter : ");
       for(i=0;i<5;i++)
       {
       scanf("%c",&a[i]);
       }
       for(i=0;i<5;i++)
       {
	if(a[i]>=65 && a[i]<=90)
	{
		a[i]=a[i]+32;
	}
       }
       for(i=0;i<5;i++)
       {
       printf("%c",a[i]);
       }
getch();
}
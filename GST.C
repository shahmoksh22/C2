#include<stdio.h>
#include<conio.h>
void main()
{
int gst,a;
clrscr();
  printf("GST Calculator \n");
  printf("Enter Amount Without GST : ");
  scanf("%d",&a);
  gst=a*18/100;
  printf("Enter Amount With GST : %d",a+gst);
getch();
}

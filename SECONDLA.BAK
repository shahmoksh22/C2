#include<stdio.h>
#include<conio.h>
void main(){
 int a=0,j=0,b,n=0,i=0;
 int d[100];
 clrscr();
 printf("Enter no of entries you want : ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("Please Ener Value of %d Entry : ",i+1);
  scanf("%d",&d[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n+1;j++)
  {if(d[i]<d[j])
  {
   a=d[i];
   d[i]=d[j];
   d[j]=a;
  }
  }
 }
 b=d[1];
  printf("Second Largest No. is %d ",b);
 getch();
}
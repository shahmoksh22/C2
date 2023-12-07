#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,min;
 clrscr();
 printf("Minimun Value Finder \n");
 printf("Enter Value of a : ");
 scanf("%d",&a);
 printf("Enter Value of b : ");
 scanf("%d",&b);
 printf("Enter Value of c : ");
 scanf("%d",&c);
 if(a<b && a<c)
 {
    min=a;
 }
 else if(b<c)
 {
   min=b;
 }
	 else{
		min=c;
	 }
 printf("The min Value is %d",min);
 getch();
}
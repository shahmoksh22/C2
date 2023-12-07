#include<conio.h>
#include<stdio.h>
void main(){

 float c,f;
 clrscr();
 printf("Celsius To Fahrenheit converter\n");
 printf("Enter Celsius : ");
 scanf("%f",&c);
 f= (c*1.8)+32;
 printf("Fahrenheit is %.2f",f);
  getch();
}
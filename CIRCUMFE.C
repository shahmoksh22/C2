#include<stdio.h>
#include<conio.h>
void main(){
float r,cir;
const  float pie=3.14;
clrscr();
printf("Circumference Of Circle Finder \n");
printf("Enter Radius Of Circle : ");
scanf("%f",&r);
cir=2*pie*r;
printf("Circumference of circle is %.2f",cir);
getch();
}
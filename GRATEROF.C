#include<stdio.h>
#include<conio.h>
void main(){

int a,b;
clrscr();
printf("Greater of 2 Number\n");
printf("Enter The First Number: ");
scanf("%d",&a);
printf("Enter The Second Number: ");
scanf("%d",&b);
if( a>=b) {
printf("%d is a greater number",a);
}
else{
 printf("%d is a greater number",b);
	}
getch();
}
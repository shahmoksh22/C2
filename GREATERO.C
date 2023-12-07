#include<stdio.h>
#include<conio.h>
void main(){

int a,b,c;
clrscr();
printf("Greater of 3 Number\n");
printf("Enter The First Number: ");
scanf("%d",&a);
printf("Enter The Second Number: ");
scanf("%d",&b);
printf("Enter The Third Number: ");
scanf("%d",&c);
if(a>b , a>c) {
printf("%d is a greater number",a);
}
else if(b>a , b>c){
 printf("%d is a greater number",b);
	}
else {
printf("%d is a greater number",c);
}
getch();
}
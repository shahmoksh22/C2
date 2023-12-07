#include<stdio.h>
#include<conio.h>
void main(){

int a;
clrscr();
printf("Enter The Number: ");
scanf("%d",&a);
if(a%2==0){
printf("%d is a even number",a);
}
else{
 printf("%d is a odd number",a);
	}
getch();
}
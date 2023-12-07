#include <stdio.h>
#include <conio.h>
int cal(float a,float b,char ch)
{	
switch(ch)
 {
	 case '+':
		  printf("Addition is %f",a+b);
		  break;
	 case '-':
		  printf("Subtraction is %f",a-b);
		  break;
	 case '*':
		  printf("Multiplication is %f",a*b);
		  break;
	 case '/':
		  printf("Division is %f",a/b);
		  break;
	 default :
		  printf("I Can't Do Sorry");
		  break;
 }
}
int main()
{
   char ch;
float a,b;
int c;
   //clrscr();
   for(int i=0;i<=1000;i++)
   {
    	printf("\nIf You Want to exit please enter 0 else press any other key\n");
   		scanf("%d",&c);
   		if(c==0)
   		break;

 	printf("Enter First Number : ");
 	scanf("%f",&a);
	printf("Enter What do you want to do : ");
    scanf("%c",&ch);
    scanf("%c",&ch);
 	printf("Enter Second Number : ");
 	scanf("%f",&b);
 	cal(a,b,ch);
}
 //getch();
}

#include<stdio.h>
#include<conio.h>
void main(){
float marks1,marks2,marks3,avg;
clrscr();
printf("Enter Marks of Subject 1 : ");
scanf("%f",&marks1);
printf("Enter Marks of Subject 2 : ");
scanf("%f",&marks2);
printf("Enter Marks of Subject 3 : ");
scanf("%f",&marks3);
avg=(marks1+marks2+marks3)/3;
printf("Avg is %.2f\n",avg);
printf("Percentage is %.2f\n",avg);
if(avg<=100 && avg>=81)
{
 printf("Grade is A+\nRemarks : Excellent");
}
else if(avg<81 && avg>=70)
{
 printf("Grade is A\nRemarks : Very Good");
}
else if(avg<70 && avg>=60)
{
 printf("Grade is B+\nRemarks : Good");
}
else if(avg<60 && avg>=45)
{
 printf("Grade is B\nRemarks : need to improve");
}
else if(avg<45 && avg>=33)
{
 printf("Grade is C\nRemarks : poor performance");
}
else
{
 printf("Grade is D\nRemarks : Fail");
}


getch();
}
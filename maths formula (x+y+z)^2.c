#include <stdio.h>
#include <conio.h>
int
main ()
{
  clrscr ();
  float a,x,y,z;
    printf("Value Calculator for (x+y+z)^2 \n" );
    printf("Enter Value of X : ");
    scanf("%f",&x);
    printf("Enter Value of Y : ");
    scanf("%f",&y);
    printf("Enter Value of Z : ");
    scanf("%f",&z);
    a=((x*x)+(2*x*y)+(2*x*y)+(y*y)+(2*y*z)+(z*z));
    printf("Value is %f",a);
  getch ();
}

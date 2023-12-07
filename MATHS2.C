#include <stdio.h>
#include <conio.h>
int
main ()
{
  float x, y, z,k;
  clrscr();
  printf ("Value Calculator for (x-y-z)^3 \n");
  printf ("Enter Value of X : ");
  scanf ("%f", &x);
  printf ("Enter Value of Y : ");
  scanf ("%f", &y);
  printf ("Enter Value of Z : ");
  scanf ("%f", &z);
  k = ((x*x*x)-(y*y*y)-(z*z*z)-(3*x*x*y)+(3*x*y*y)-(3*y*y*z)-(3*y*z*z)+(3*x*z*z)-(3*x*x*z)+(6*x*y*z));
  printf ("Value is %.2f", k);
  getch ();
}

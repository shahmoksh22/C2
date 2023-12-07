#include <stdio.h>
#include <conio.h>
int
main ()
{
  clrscr ();
  float x, y, z;
  printf ("Value Calculator for (x-y)^3 \n");
  printf ("Enter Value of X : ");
  scanf ("%f", &x);
  printf ("Enter Value of Y : ");
  scanf ("%f", &y);
  z = ((x * x * x) - (3 * x * x * y) + (3 * x * y * y) - (y * y * y));
  printf ("Value is %f", z);
  getch ();
}

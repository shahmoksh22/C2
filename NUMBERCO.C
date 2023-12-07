#include <stdio.h>
#include <conio.h>
int main() {
clrscr();
  long long n;
  int count = 0;
  printf("Enter an integer: ");
  scanf("%lld", &n);
  if(n>0)
  {
      do {
    n /= 10;

  } while (n != 0);
  printf("Number of digits: %d", n);
  }
  else
  {
      printf("negative number");
  }

    getch();
}

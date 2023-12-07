#include<stdio.h>
void div(int a, int b, int *q, int *r) {
   *q= a / b;
   *r = a % b;
}
int main() {
   int a = 22, b = 12;
   int q, r;
   div(a, b, &q, &r);
   printf("Quotient is: %d\nRemainder is: %d\n", q, r);
}

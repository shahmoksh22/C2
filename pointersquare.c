#include <stdio.h>

int main() {
    int b,sq;
    int *a = &b;
  printf("Please Enter Value : ");
   scanf("%d",&b);
   sq = *a * *a;

  

    printf("Square of each element in the array is: ");
    
     printf("%d ", sq);
    
    return 0;
}
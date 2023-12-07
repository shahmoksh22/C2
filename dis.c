#include<stdio.h>

struct Distance{
    int feet;
    float inches;
};

void add_distance(struct Distance d1, struct Distance d2, struct Distance *sum){
    sum->feet = d1.feet + d2.feet;
    sum->inches = d1.inches + d2.inches;
    
    if(sum->inches >= 12.0){
        sum->feet += 1;
        sum->inches -= 12.0;
    }
}

int main(){
    struct Distance d1, d2, sum;
    
    printf("Enter first distance in feet and inches:\n");
    scanf("%d %f", &d1.feet, &d1.inches);
    
    printf("Enter second distance in feet and inches:\n");
    scanf("%d %f", &d2.feet, &d2.inches);
    
    add_distance(d1, d2, &sum);
    
    printf("Sum of the distances is: %d' %f''\n", sum.feet, sum.inches);
    
    return 0;
}


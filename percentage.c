#include <stdio.h>

typedef struct {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
} Marks;

int main() {
    Marks marks[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter the details of student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &marks[i].roll_no);
        getchar();
        printf("Name: ");
        scanf("%[^\n]", marks[i].name);
        getchar();
        printf("Chemistry Marks: ");
        scanf("%d", &marks[i].chem_marks);
        printf("Mathematics Marks: ");
        scanf("%d", &marks[i].maths_marks);
        printf("Physics Marks: ");
        scanf("%d", &marks[i].phy_marks);
        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        int total_marks = marks[i].chem_marks + marks[i].maths_marks + marks[i].phy_marks;
        float percentage = (float)total_marks / 300 * 100;
        printf("The percentage of student %s is %.2f%%\n", marks[i].name, percentage);
    }

    return 0;
}
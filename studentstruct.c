#include<stdio.h>
struct studentstruct
{
    int id;
    char name[20];
    int age;
    char course[30];
    char city[30];
    int std;
    char school[30];
}s;
void main()
{
    printf("Enter the details of a student:\n");
    printf("Enter Id of Student : ");
    scanf("%d",&s.id);
    printf("\nEnter Name of Student: ");
    scanf("%s",&s.name);
    printf("\nEnter Age of Student: ");
    scanf("%d",&s.age);
    printf("\nEnter Course of Student: ");
    scanf("%s",&s.course);
    printf("\nEnter City of Student: ");
    scanf("%s",&s.city);
    printf("\nEnter Standard of Student: ");
    scanf("%d",&s.std);
    printf("\nEnter School of Student: ");
    scanf("%s",&s.school);
    printf("\n\nDetails of Student are as follows:\n");
    printf("Id = %d \nName= %s \nAge=%d \nCourse=%s \nCity=%s \nSTD=%d \nSchool=%s",s.id,s.name,s.age,s.course,s.city,s.std,s.school);
}

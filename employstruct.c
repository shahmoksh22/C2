#include<stdio.h>

struct emp
{
    int id;
    char name[20];
    int age;
    char role[30];
    char city[30];
    char experience[30];
    
    char company_name[30];
}emp;

void main()
{
    printf("Enter the details of an employee:\n");
    printf("Enter Id of Employee : ");
    scanf("%d",&emp.id);
    printf("\nEnter Name of Employee: ");
    scanf("%s",&emp.name);
    printf("\nEnter Age of Employee: ");
    scanf("%d",&emp.age);
    printf("\nEnter Role of Employee: ");
    scanf("%s",&emp.role);
    printf("\nEnter City of Employee: ");
    scanf("%s",&emp.city);
    printf("\nEnter Experience of Employee: ");
    scanf("%s",&emp.experience);
    printf("\nEnter Company Name of Employee: ");
    scanf("%s",&emp.company_name);
    printf("\n\nDetails of Employee are as follows:\n");
    printf("Id = %d \nName= %s \nAge=%d \nRole=%s \nCity=%s \nExperience=%s \nCompany Name=%s",emp.id,emp.name,emp.age,emp.role,emp.city,emp.experience,emp.company_name);
}
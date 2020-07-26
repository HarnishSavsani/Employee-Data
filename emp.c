#include <stdio.h>
#include <stdlib.h>
typedef struct employee
{
    char    name[30];
    int     empId;
    char     dep[20] ;
    float   salary;
} employee;
int main()
{
    int i;
    employee emp[20];
    system("color fd");
    printf("\t\t\t\t\t\t-:- Enter details -:-\n");
    for(i=0; i<20; i++)
    {
        printf("Name :");
        fflush(stdin);
        gets(emp[i].name);
        printf("ID :");
        scanf("%d",&emp[i].empId);
        printf("Department :");
        fflush(stdin);
        gets(emp[i].dep);
        printf("Salary :");
        scanf("%f",&emp[i].salary);
    }
    system("cls");
    printf("\n\t\t\t\t\t\t-:- Entered detail is -:- \n\n");
    printf("ID\t\t\tName\t\t\tDepartment\t\t\tSalary");
    for(i=0; i<20; i++)
    {
        printf("\n%d\t\t\t%s\t\t\t%s\t\t\t\t%.2f",emp[i].empId,emp[i].name,emp[i].dep,emp[i].salary);
    }
    return 0;
}

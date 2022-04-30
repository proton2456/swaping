#include <stdio.h>

struct Employee
{
    int id, age, salary;
    char name[30],phone[30];
};

int main()
{
    struct Employee e;

    printf("Enter the Name of the Employee: ");
    scanf("%d", &e.id);

    printf("Enter the age of the Employee: ");
    scanf("%d", &e.age);

    printf("Enter the Phone Number of the Employee: ");
    getchar();
    fgets(&e.phone, 30, stdin);

   

   
    printf("Enter the salary of the Employee: ");
    scanf("%d", &e.salary);

    printf("\nEmployee Details:\n");
    printf("Employee Name: %s\n", e.name);
    printf("Employee Age: %d", e.age);
    printf("Employee Phone Number: %d\n",e.phone);
   
    printf("Employee salary: %d\n", e.salary);

    return 0;
}

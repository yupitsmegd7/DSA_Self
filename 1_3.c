/*Write a program to create a structure to store the information of n number of Employees. 
Employee’s information includes data members: 
Emp-id, Name, Designation, basic_salary, hra%, da%. 
Display the information of employees with gross salary. 
Use array of structure.*/

#include <stdio.h>
#include <stdlib.h>

struct body
{
    int emp_id;
    char name[50];
    char desig[20];
    int bs;
    int hr;
    int da;
    int total;
};

int main()
{
    int n = 0;
    int h, d;

    printf("Enter the HRA percentage and DA percentage: ");
    scanf("%d %d", &h, &d);

    printf("Enter number of employees you want to enter: ");
    scanf("%d", &n);

    struct body emps[n];

    // Input employee details
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &emps[i].emp_id);

        printf("Enter Name: ");
        scanf("%49s", emps[i].name);

        printf("Enter Designation: ");
        scanf("%19s", emps[i].desig);

        printf("Enter Base Salary: ");
        scanf("%d", &emps[i].bs);

        // Calculate HRA
        emps[i].hr = (emps[i].bs * h) / 100;

        // Calculate DA
        emps[i].da = (emps[i].bs * d) / 100;

        // Calculate Gross Salary
        emps[i].total = emps[i].bs
                      + emps[i].hr
                      + emps[i].da;
    }

    int y = 1;

    while(y == 1)
    {
        int count = 0;
        int id = 0;

        printf("\n--------- Display ---------\n");

        printf("Enter the Employee ID: ");
        scanf("%d", &count);

        for(int i = 0; i < n; i++)
        {
            if(emps[i].emp_id == count)
            {
                printf("\nEmployee ID: %d", emps[i].emp_id);
                printf("\nEmployee Name: %s", emps[i].name);
                printf("\nDesignation: %s", emps[i].desig);
                printf("\nBasic Salary: %d", emps[i].bs);
                printf("\nHRA: %d", emps[i].hr);
                printf("\nDA: %d", emps[i].da);
                printf("\nGross Salary: %d\n", emps[i].total);

                id = 1;
                break;
            }
        }

        if(id == 0)
        {
            printf("Employee not found!\n");
        }

        printf("\nDo you want to continue? (1|0): ");
        scanf("%d", &y);
    }

    return 0;
}

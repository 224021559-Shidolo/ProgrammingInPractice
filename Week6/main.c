
#include <stdio.h>
#include <string.h>

int main()
{
    float salaries[50];
    float totalSalary = 0;
    float averageSalary;
    float highestSalary;
    float lowestSalary;
    float searchSalary;
    int salaryFound = 0;
    int i;

    printf("=== EMPLOYEE SALARIES ===\n");

    for (i = 0; i < 50; i++)
    {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }
    printf("\n--- Employee Salaries ---\n");

    for (i = 0; i < 50; i++)
    {
        printf("Employee %d: %.2f\n", i + 1, salaries[i]);
    }

    for (i = 0; i < 50; i++)
    {
        totalSalary = totalSalary + salaries[i];
    }

    averageSalary = totalSalary / 50;

    highestSalary = salaries[0];
    lowestSalary = salaries[0];

    for (i = 1; i < 50; i++)
    {
        if (salaries[i] > highestSalary)
        {
            highestSalary = salaries[i];
        }

        if (salaries[i] < lowestSalary)
        {
            lowestSalary = salaries[i];
        }
    }

    printf("\nAverage Salary: %.2f\n", averageSalary);
    printf("Highest Salary: %.2f\n", highestSalary);
    printf("Lowest Salary: %.2f\n", lowestSalary);

    printf("\nEnter a salary to search for: ");
    scanf("%f", &searchSalary);

    for (i = 0; i < 50; i++)
    {
        if (salaries[i] == searchSalary)
        {
            printf("Salary %.2f found for employee %d.\n",
                   searchSalary, i + 1);
            salaryFound = 1;
        }
    }

    if (salaryFound == 0)
    {
        printf("Salary not found.\n");
    }

    float budgets[10];
    float totalBudget = 0;
    float averageBudget;
    float temp;

    printf("\n\n=== DEPARTMENT BUDGETS ===\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%f", &budgets[i]);
    }

    printf("\n--- Department Budgets ---\n");

    for (i = 0; i < 10; i++)
    {
        printf("Department %d: %.2f\n", i + 1, budgets[i]);
    }

    for (i = 0; i < 10; i++)
    {
        totalBudget = totalBudget + budgets[i];
    }

    averageBudget = totalBudget / 10;

    printf("\nTotal Budget: %.2f\n", totalBudget);
    printf("Average Budget: %.2f\n", averageBudget);

    for (i = 0; i < 10 - 1; i++)
    {
        int j;

        for (j = i + 1; j < 10; j++)
        {
            if (budgets[i] > budgets[j])
            {
                temp = budgets[i];
                budgets[i] = budgets[j];
                budgets[j] = temp;
            }
        }
    }

    printf("\n--- Budgets from Lowest to Highest ---\n");

    for (i = 0; i < 10; i++)
    {
        printf("%.2f\n", budgets[i]);
    }

    char registrations[20][20];
    char searchRegistration[20];
    int registrationFound = 0;

    printf("\n\n=== VEHICLE REGISTRATION NUMBERS ===\n");

    for (i = 0; i < 20; i++)
    {
        printf("Enter registration number %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    printf("\n--- Vehicle Registration Numbers ---\n");

    for (i = 0; i < 20; i++)
    {
        printf("Vehicle %d: %s\n", i + 1, registrations[i]);
    }
    printf("\nEnter a registration number to search for: ");
    scanf("%19s", searchRegistration);

    for (i = 0; i < 20; i++)
    {
        if (strcmp(registrations[i], searchRegistration) == 0)
        {
            printf("Registration number found: %s\n",
                   registrations[i]);
            registrationFound = 1;
        }
    }

    if (registrationFound == 0)
    {
        printf("Registration number not found.\n");
    }

    return 0;
}


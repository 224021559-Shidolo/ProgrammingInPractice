
#include <stdio.h>

void displayWelcome()
{
    printf("Welcome to the Municipal Financial Management System\n");
}

float calculateVAT(float amount)
{
    return amount * 0.15;
}

float calculateSalary(float basic, float housing, float transport)
{
    return basic + housing + transport;
}

float calculateBudget(float revenue, float expenses)
{
    return revenue - expenses;
}

void displayMenu()
{
    printf("\n==================================\n");
    printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("==================================\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Search Employee\n");
    printf("5. Exit\n");
    printf("Enter choice: ");
}

int searchEmployee(int id, int ids[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (ids[i] == id)
        {
            return i;
        }
    }

    return -1;
}


int main()
{
    int choice;

    int employeeIDs[] = {101, 102, 103, 104, 105};
    int employeeID;
    int position;

   
    float amount;
    float vat;

   
    float basic;
    float housing;
    float transport;
    float grossSalary;

   
    float revenue;
    float expenses;
    float budgetResult;

  
    displayWelcome();

    do
    {
        displayMenu();
        scanf("%d", &choice);

        if (choice == 1)
        {
            

            printf("\nEnter amount: ");
            scanf("%f", &amount);

            vat = calculateVAT(amount);

            printf("VAT: %.2f\n", vat);
        }

        else if (choice == 2)
        {
           

            printf("\nBasic salary: ");
            scanf("%f", &basic);

            printf("Housing allowance: ");
            scanf("%f", &housing);

            printf("Transport allowance: ");
            scanf("%f", &transport);

            grossSalary = calculateSalary(basic, housing, transport);

            printf("Gross salary: %.2f\n", grossSalary);
        }

        else if (choice == 3)
        {
        

            printf("\nEnter revenue: ");
            scanf("%f", &revenue);

            printf("Enter expenses: ");
            scanf("%f", &expenses);

            budgetResult = calculateBudget(revenue, expenses);

            printf("Budget result: %.2f\n", budgetResult);

            if (budgetResult > 0)
            {
                printf("SURPLUS\n");
            }
            else if (budgetResult < 0)
            {
                printf("DEFICIT\n");
            }
            else
            {
                printf("BALANCED\n");
            }
        }

        else if (choice == 4)
        {
           

            printf("\nEnter employee ID: ");
            scanf("%d", &employeeID);

            position = searchEmployee(employeeID,
                                      employeeIDs,
                                      5);

            if (position != -1)
            {
                printf("Employee found at position %d.\n",
                       position);
            }
            else
            {
                printf("Employee not found.\n");
            }
        }

        else if (choice == 5)
        {
            printf("\nExiting the system...\n");
        }

        else
        {
            printf("\nInvalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}



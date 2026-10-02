#include <stdio.h>

int main()
{
    float salaries[50];
    float total = 0;
    float average;
    float highest;
    float lowest;
    int i;

    for (i = 0; i < 50; i++)
    {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);

        total = total + salaries[i];
    }
    highest = salaries[0];
    lowest = salaries[0];

    for (i = 1; i < 50; i++)
    {
        if (salaries[i] > highest)
        {
            highest = salaries[i];
        }

        if (salaries[i] < lowest)
        {
            lowest = salaries[i];
        }
    }
    average = total / 50;

    printf("\n--- Municipal Employee Salary Analysis ---\n");
    printf("Total Salary: %.2f\n", total);
    printf("Average Salary: %.2f\n", average);
    printf("Highest Salary: %.2f\n", highest);
    printf("Lowest Salary: %.2f\n", lowest);

    return 0;
}
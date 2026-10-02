
#include <stdio.h>
#include <string.h>

int main()
{
    char supplierName[100];
    char email[100];
    char phone[20];
    char town[50];

    char supplier1[] = "ABC Office Supplies";
    char supplier2[] = "Namibia Stationery";

    char searchName[100];
    char backup[100];

    char description[200];

    int choice;

    do
    {
        printf("\n=== MFMS SUPPLIER MANAGEMENT ===\n");
        printf("1. Add Supplier\n");
        printf("2. Display Supplier\n");
        printf("3. Search Supplier\n");
        printf("4. Show Name Length\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        getchar();

        if (choice == 1)
        {

            printf("\nEnter supplier name: ");
            fgets(supplierName, sizeof(supplierName), stdin);
            supplierName[strcspn(supplierName, "\n")] = '\0';

            printf("Enter email: ");
            fgets(email, sizeof(email), stdin);
            email[strcspn(email, "\n")] = '\0';

            printf("Enter phone number: ");
            fgets(phone, sizeof(phone), stdin);
            phone[strcspn(phone, "\n")] = '\0';

            printf("Enter town: ");
            fgets(town, sizeof(town), stdin);
            town[strcspn(town, "\n")] = '\0';

            printf("\nSupplier added successfully.\n");
        }

        else if (choice == 2)
        {

            printf("\n--- SUPPLIER DETAILS ---\n");
            printf("Name : %s\n", supplierName);
            printf("Email: %s\n", email);
            printf("Phone: %s\n", phone);
            printf("Town : %s\n", town);


            strcpy(backup, supplierName);

            printf("\n--- COPIED SUPPLIER NAME ---\n");
            printf("Original: %s\n", supplierName);
            printf("Backup  : %s\n", backup);


            strcpy(description, supplierName);
            strcat(description, " operates in ");
            strcat(description, town);
            strcat(description, ".");

            printf("\n--- SUPPLIER DESCRIPTION ---\n");
            printf("%s\n", description);
        }

        else if (choice == 3)
        {

            printf("\nEnter supplier name to search: ");
            fgets(searchName, sizeof(searchName), stdin);
            searchName[strcspn(searchName, "\n")] = '\0';

            if (strcmp(searchName, supplier1) == 0 ||
                strcmp(searchName, supplier2) == 0)
            {
                printf("Supplier found.\n");
            }
            else
            {
                printf("Supplier not found.\n");
            }
        }

        else if (choice == 4)
        {

            printf("\n--- SUPPLIER NAME LENGTH ---\n");
            printf("Supplier name length: %lu\n",
                   strlen(supplierName));

            printf("Email length: %lu\n",
                   strlen(email));

            printf("Town length: %lu\n",
                   strlen(town));
        }

        else if (choice == 5)
        {
            printf("\nExiting Supplier Management System...\n");
        }

        else
        {
            printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}


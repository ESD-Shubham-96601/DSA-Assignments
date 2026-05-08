#include <stdio.h>
#include <string.h>

#define MAX 50

struct Employee 
{
    int empId;
    char name[50];
    float salary;
};

void searchById(struct Employee emp[], int n, int id) 
{
    for (int i = 0; i < n; i++) 
    {
        if (emp[i].empId == id) 
        {
            printf("\nEmployee Found!\nID: %d | Name: %s | Salary: %.2f\n", emp[i].empId, emp[i].name, emp[i].salary);
            return;
        }
    }
    printf("\nEmployee with ID %d not found.\n", id);
}

void searchByName(struct Employee emp[], int n, char name[]) 
{
    int found = 0;
    for (int i = 0; i < n; i++) 
    {
        if (strcasecmp(emp[i].name, name) == 0) 
        { 
            printf("\nEmployee Found!\nID: %d | Name: %s | Salary: %.2f\n", emp[i].empId, emp[i].name, emp[i].salary);
            found = 1;
        }
    }
    if (!found) printf("\nEmployee with name '%s' not found.\n", name);
}

int main() 
{
    struct Employee emp[MAX];
    int n, choice, searchId;
    char searchName[50];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("ID: "); scanf("%d", &emp[i].empId);
        printf("Name: "); scanf("%s", emp[i].name);
        printf("Salary: "); scanf("%f", &emp[i].salary);
    }

    do 
    {
        printf("\n--- Search Menu ---");
        printf("\n1. Search by ID\n2. Search by Name\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter ID to search: ");
                scanf("%d", &searchId);
                searchById(emp, n, searchId);
                break;

            case 2:
                printf("Enter Name to search: ");
                scanf("%s", searchName);
                searchByName(emp, n, searchName);
                break;
        }
    } 
    while (choice != 3);

    return 0;
}

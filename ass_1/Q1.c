#include <stdio.h>
#define SIZE 9

int last_occurrence(int arr[SIZE], int key);
int main() 
{
    int arr[SIZE] = {10, 20, 30, 40, 60, 50};
    int key;

    printf("Enter the key to search : ");
    scanf("%d", &key); 

    int result = last_occurrence(arr, key);

    if (result != -1) 
    {
        printf("Last occurrence index: %d\n", result);
    } 
    else 
    {
        printf("Key Not Found\n");
    }

    return 0;
}

int last_occurrence(int arr[SIZE], int key) 
{
    for (int i = SIZE - 1; i >= 0; i--) {
        if (arr[i] == key) 
        {
            return i; 
        }
    }

    return -1; 
}
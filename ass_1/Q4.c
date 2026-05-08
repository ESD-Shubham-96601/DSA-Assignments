#include <stdio.h>
#include<stdlib.h>

int findNthOccurrence(int arr[], int size, int target, int n) 
{
    int count = 0;

    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == target) 
        {
            count++; 
            
            if (count == n) 
            {
                return i; 
            }
        }
    }

    return -1; 
}

int main() 
{
    int data[] = {10, 25, 10, 45, 10, 70, 30};
    int size = sizeof(data) / sizeof(data[0]);
    int target = 10;
    int n = 3;

    int result = findNthOccurrence(data, size, target, n);

    printf("Array: {10, 25, 10, 45, 10, 70, 30}\n");
    printf("Searching for the %drd occurrence of: %d\n", n, target);

    if (result != -1) 
    {
        printf("Result: Found at index %d\n", result);
    } 
    else 
    {
        printf("Result: %d not found %d times in the array.\n", target, n);
    }

    return 0;
}

#include <stdio.h>
#include<stdlib.h>

int binarySearchDescending(int arr[], int n, int target) 
{
    int low = 0;
    int high = n - 1;

    while (low <= high) 
    {
        
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) 
        {
            return mid; 
        }

        if (target > arr[mid]) 
        {
            high = mid - 1;
        } 
        else 
        {
            
            low = mid + 1;
        }
    }
    return -1; 
}

int main() 
{
    int data[] = {95, 82, 77, 60, 54, 30, 21, 10};
    int size = sizeof(data) / sizeof(data[0]);
    int target = 60;

    int result = binarySearchDescending(data, size, target);

    if (result != -1)
        printf("Element %d found at index %d\n", target, result);
    else
        printf("Element %d not found in the array\n", target);

    return 0;
}

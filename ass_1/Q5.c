#include <stdio.h>
#include<stdlib.h>

int findFirstNonRepeating(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        int count = 0;
        
        for (int j = 0; j < n; j++) 
        {
            if (i != j && arr[i] == arr[j]) 
            {
                count++;
                break; 
            }
        }

        if (count == 0) 
        {
            return arr[i];
        }
    }

    return -999; 
}

int main() 
{
    int arr[] = {1, 2, 3, -1, 2, 1, 0, 4, -1, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findFirstNonRepeating(arr, n);

    if (result != -999) 
    {
        printf("Input: { 1, 2, 3, -1, 2, 1, 0, 4, -1, 7, 8 }\n");
        printf("Output: %d\n", result);
    } 
    else 
    {
        printf("No non-repeating element found.\n");
    }

    return 0;
}

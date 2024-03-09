#include <stdio.h>

void incrementArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        (*arr)++;
        arr++;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    incrementArray(arr, size);

    printf("Modified array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
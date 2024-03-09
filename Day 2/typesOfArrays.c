#include <stdio.h>

int main()
{
    // One-dimensional array
    int arr1D[5] = {1, 2, 3, 4, 5};

    // Two-dimensional array
    int arr2D[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Three-dimensional array
    int arr3D[2][2][2] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}}};

    // Printing elements of the arrays
    printf("One-dimensional array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr1D[i]);
    }

    printf("\n\nTwo-dimensional array:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr2D[i][j]);
        }
        printf("\n");
    }

    printf("\nThree-dimensional array:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d ", arr3D[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
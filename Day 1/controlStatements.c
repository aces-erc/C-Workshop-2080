#include <stdio.h>

int main()
{
    int num1, num2;

    // if statement
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        printf("%d is greater than %d\n", num1, num2);
    }
    else if (num1 < num2)
    {
        printf("%d is less than %d\n", num1, num2);
    }
    else
    {
        printf("Both numbers are equal\n");
    }

    // switch statement
    int choice;
    printf("Enter a number between 1 and 3: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("You entered 1\n");
        break;
    case 2:
        printf("You entered 2\n");
        break;
    case 3:
        printf("You entered 3\n");
        break;
    default:
        printf("Invalid choice\n");
    }

    // while loop
    int i = 1;
    while (i <= 5)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // do-while loop
    int j = 1;
    do
    {
        printf("%d ", j);
        j++;
    } while (j <= 5);
    printf("\n");

    // for loop
    for (int k = 1; k <= 5; k++)
    {
        printf("%d ", k);
    }
    printf("\n");

    // break statement
    for (int l = 1; l <= 10; l++)
    {
        if (l == 6)
        {
            break;
        }
        printf("%d ", l);
    }
    printf("\n");

    // continue statement
    for (int m = 1; m <= 10; m++)
    {
        if (m % 2 == 0)
        {
            continue;
        }
        printf("%d ", m);
    }
    printf("\n");

    return 0;
}
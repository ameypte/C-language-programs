#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    printf("\nMethod-1:\n\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    printf("\nMethod-1:\n\n");

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row <= col)
                printf("%d", row);
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
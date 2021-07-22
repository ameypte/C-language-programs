// Enter '0' for trangular star pattern and 1 for revrse trangular star pattern:
// Enter the number of rows: 5
// *
// **
// ***
// ****
// *****
// OR
// *****
// ****
// ***
// **
// *

#include <stdio.h>

int trangular_star_pattern(int row);
int rev_trangular_star_pattern(int row);

int main()
{
    int pat, row;

    printf("\nEnter '0' for trangular star pattern and '1' for revrse trangular star pattern: ");
    scanf("%d", &pat);

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    if (pat == 0)
    {
        trangular_star_pattern(row);
    }

    else if (pat == 1)
    {
        rev_trangular_star_pattern(row);
    }
    else
    {
        printf("Try again!");
    }
    
    return 0;
}

int trangular_star_pattern(int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 1; j < row-i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        } 
        
        printf("\n");
    }
    return 0;
}

int rev_trangular_star_pattern(int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < row-i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}
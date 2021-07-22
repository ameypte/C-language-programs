#include <stdio.h>
#include <stdlib.h>

int main()
{
    // use of malloc function

    int *ptr, n;

    printf("Enter the number of term of an array: ");
    scanf("%d", &n);
input:
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at %d term: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d term of an array is %d\n", i, ptr[i]);
    }

    char cha;
    printf("Do you want to change the size of an array: ");
    scanf("%s", &cha);

    switch (cha)
    {
    case 'y':
        printf("Enter the new number of term of an array: ");
        scanf("%d", &n);
        realloc(ptr, n * sizeof(int));
        goto input;
        break;

    default:
        break;
    }

    return 0;
}
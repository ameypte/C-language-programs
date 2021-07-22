#include <stdio.h>

int factorial_recursive(int a);
int factorial_iterative(int a);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("By iterative: %d\n", factorial_iterative(num));
    printf("By recursive: %d", factorial_recursive(num));
    return 0;
}

int factorial_recursive(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return a * factorial_recursive(a - 1);
    }
}

int factorial_iterative(int a)
{
    int fac = 1;
    for (int i = 2; i <= a; i++)
    {
        fac = fac * i;
    }
    return fac;
}
#include <stdio.h>

int prime_or_not(int n);

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Prime numbers form %d to %d are: ", num1, num2);

    for (int i = num1; i <= num2; i++)
    {
        if (prime_or_not(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}

int prime_or_not(int n)
{

    if (n == 1)
        return 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
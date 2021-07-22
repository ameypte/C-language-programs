#include <stdio.h>

int main()
{
    int num, prime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
        if (prime)
        {
            printf("%d is a prime number.", num);
        }
        else
        {
            printf("%d is a not prime number.", num);
        }
    }

    return 0;
}
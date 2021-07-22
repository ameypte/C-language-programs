#include <stdio.h>

int main()
{
    int n, sum=0;

    printf("Enter the nth number: ");
    scanf("%d",&n);

    printf("By O(1)\n");
    sum = (n*n+n)/2;
    printf("The sum on first %d natural number is: %d", n, sum);

    sum = 0;
    printf("\nBy O(n)\n");
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("The sum on first %d natural number is: %d", n, sum);

    return 0;
}
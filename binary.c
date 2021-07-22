/*
10 in binary
div= ans = rem
10/2 = 5 = 0
5/2  = 2 = 1
2/2  = 1 = 0
1/2  = 0 = 1

10 = 1010 in binary

*/
#include <stdio.h>

int main()
{
    int n, rem, i, arr[10];

    printf("Enter the number which you want in binary: ");
    scanf("%d", &n);

    printf("\n%d in binary is: ",n);
    for ( i = 0; n>0; i++ )
    {
        rem = n % 2;
        n = n / 2;
        arr[i] = rem;
    }

    for (int j = i-1 ; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }

    return 0;
}
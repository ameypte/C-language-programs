#include<stdio.h>

int main()
{
    printf("Size of variables in your system: ");
    printf("\nint: %d bytes",sizeof(int));
    printf("\nfloat: %d bytes",sizeof(float));
    printf("\nchar: %d bytes",sizeof(char));
    printf("\ndouble: %d bytes",sizeof(double));
    return 0;
}
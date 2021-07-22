/*
pointer is a var that stores the address of another var
*/
#include<stdio.h>

int main()
{
    int x = 5;
    int *ptr = &x;
    
    printf("hexadecimal: %x\n",ptr);
    printf("%p\n",ptr);
    printf("%d",ptr);
    return 0;
}
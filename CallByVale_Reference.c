#include <stdio.h>

// Declaring Functions
void Call_By_Value(int a, int b);
void Call_By_Reference(int *a, int *b);

int main()
{
    int a = 3;
    int b = 2;

    printf("\na = %d\nb = %d\n",a,b);

    // Calling a Function
    Call_By_Value(a, b);
    printf("\nCall_By_Value:\nThe value of a is %d.\nThe value fo be is %d.\n", a, b);

    // Calling a Function
    Call_By_Reference(&a, &b);
    printf("\nCall_By_Reference:\nThe value of a is %d.\nThe value fo be is %d.\n", a, b);

    return 0;
}

// Defining Functions
void Call_By_Value(int a, int b)
{
    a = 2; // This change will not get reflected in main function
    b = 3; // This change will not get reflected in main function
}

void Call_By_Reference(int *a, int *b)
{
    *a= 2;
    *b= 3;
}
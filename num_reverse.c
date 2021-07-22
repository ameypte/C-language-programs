#include<stdio.h>

int rev(int num);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The reversed number is %d",rev(num));
    return 0;
}

int rev(int num){
    int rem=0,rev=0;
    while (num!=0)
    {
        rem=num%10;
        rev=rem+(rev*10);
        num=num/10;
    }
    return rev;
}
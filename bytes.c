#include<stdio.h>
long power(int num,int power);

int main()
{
    int num;
    printf("Enter how many byte(s) your data type take: ");
    scanf("%d",&num);

    printf("Your data type can store integer -%d to %d.",power(2,8*num)/2,(power(2,8*num)/2)-1);
    return 0;
}

long power(int num,int power){
    int ans=num;
    for (int i = 1; i < power; i++)
    {
        ans=ans*num;
    }
    return ans;
}
/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route 
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/

#include <stdio.h>

typedef struct drivers
{
    char name[24];
    int lino; 
    char route[12];
    int kms;
} dri;

int main()
{
    int n;

    // this ask the number of drivers
    printf("Enter the number of Drivers: ");
    scanf("%d",&n);

    dri drivers[n];

    // this for loop takes all the drivers information
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the %d driver's name: ",i+1);
        scanf("%s",drivers[i].name);

        printf("Enter the %d driver's Driving License No: ",i+1);
        scanf("%d",drivers[i].lino);

        printf("Enter the %d driver's Kms: ",i+1);
        scanf("%d",&drivers[i].kms);
        
        printf("Enter the %d driver's Route: ",i+1);
        scanf("%s",drivers[i].route);
    }

    // this prints all the drivers information on the screen

    for (int i = 0; i < n; i++)
    {
        printf("\n%s's Driving License No: %s\n",drivers[i].name,drivers[i].lino);
        printf("%s goes through %s and travel around %d Kms.\n",drivers[i].name,drivers[i].route,drivers[i].kms);
    }
    
    return 0;
}
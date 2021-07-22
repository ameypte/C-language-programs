#include <stdio.h>

int main()
{
      int num1, num2;
      char action;

start:
      printf("\nEnter a number: ");
      scanf("%d", &num1);
      printf("Enter the last multiplication number: ");
      scanf("%d", &num2);

      printf("The table of %d upto %d is as follows:", num1, num2);

      for (int i = 1; i <= num2; i++)
      {
            printf("\n%d x %d = %d", num1, i, num1 * i);
      }

      printf("\nPress 'q' to quit and 'a' to again: ");
      scanf(" %c", &action);
      if (action == 'a')
            goto start;

      return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20], temp;
    printf("Enter the string: ");
    gets(str); // OR // scanf("%s",&str);
    //Printing string
    printf("String: ");
    puts(str);
    //Reversing the string
    //strrev(str);
    //Without using strrev();
    for (int i = 0; i < (strlen(str)/2); i++)
    {
        temp = str[i];
        str[i] = str[((strlen(str)-1)-i)];
        str[((strlen(str)-1)-i)] = temp;
    }
    printf("Reverse String: ");
    puts(str);
    return 0;
}
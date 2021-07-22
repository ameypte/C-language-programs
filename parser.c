#include <stdio.h>
#include <string.h>

void parser(char str[]);

int main()
{
    char str[64];
    printf("You need to enter the html tag and output will be the (parsed string) contant inside the tag.\nEx: <h1> Heading </h1>\nEnter the html tag: ");
    gets(str);
    parser(str);
    printf("~~%s~~", str);
    return 0;
}

void parser(char str[])
{
    int in_tag = 0, index = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '<')
        {
            in_tag = 1;
            continue;
        }
        else if (str[i] == '>')
        {
            in_tag = 0;
            continue;
        }
        if (in_tag == 0)
        {
            str[index] = str[i];
            ++index;
        }
    }
    str[index] = '\0';
    // removing spaces for start
    while (str[0] == ' ')
    {
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i + 1];
        }
    }

    // removing spaces for end
    while (str[(strlen(str) - 1)] == ' ')
    {
        str[(strlen(str) - 1)] = '\0';
    }
}
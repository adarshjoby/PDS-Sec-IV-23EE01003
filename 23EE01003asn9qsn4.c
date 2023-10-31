#include <stdio.h>
#include <string.h>

int len(char str[]);

int main(void)
{
    char string[100];
    printf("Enter String : ");
    gets(string);

    int length = len(string);

    printf("The String Length is %d\n",length);
    return 0;
}

int len(char string[])
{
    char *ptr = string; 
    int len = 0;
    while (*ptr != '\0')
    {
        len ++;
        ptr ++;
    }
    return len;
}

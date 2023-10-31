#include <stdio.h>
#include <string.h>

void count(char str[]);

int main(void)
{
    char string[100];
    printf("Enter String : ");
    gets(string);

    count(string);

    return 0;
}

void count(char string[])
{
    char *ptr = string; 
    int vow = 0, cons = 0;
    while (*ptr != '\0')
    {
        if ( *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' || *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u') 
            vow++;
        else
            cons++;

        ptr ++;
    }
    
    printf("Count of Vowels : %d\n",vow);
    printf("Count of Consonants : %d\n",cons);
    return;
}

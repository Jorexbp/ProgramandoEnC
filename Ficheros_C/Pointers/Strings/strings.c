#include <stdio.h>
#define SIZE 80
void mystery1(char *s1,  char *s2); // prototype
int main(void)
{
    char string1[SIZE]; // create char array
    char string2[SIZE]; // create char array

    puts("Enter two strings: ");
    scanf("%39s%39s", string1, string2);
    mystery1(string1, string2);
    printf("%s", string2);
}

// What does this function do?
void mystery1(char *s1, 
 char *s2)
{
    while (*s2 != NULL)
    {
        ++s2;
    }

    for (; *s2 = *s1; ++s1, ++s2)
    {
        ; // empty statement
    }
}
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string to convert
 *
 * Return: a pointer to the resulting string str
 */
char *string_toupper(char *str)
{
    int i;

    /* iterate through each character in str */
    for (i = 0; str[i] != '\0'; i++)
    {
        /* if the character is lowercase, convert it to uppercase */
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }

    return str;
}


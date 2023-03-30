#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to capitalize
 *
 * Return: a pointer to the resulting string str
 */
char *cap_string(char *str)
{
    int i;

    /* iterate through each character in str */
    for (i = 0; str[i] != '\0'; i++)
    {
        /* if the current character is the first character in a word */
        if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n'
            || str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.'
            || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '\"'
            || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{'
            || str[i - 1] == '}')
        {
            /* if the current character is lowercase, convert it to uppercase */
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
        }
    }

    return str;
}


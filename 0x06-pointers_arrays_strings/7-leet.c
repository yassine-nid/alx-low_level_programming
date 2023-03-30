#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: a pointer to the resulting string str
 */
char *leet(char *str)
{
    int i, j;
    char *letters = "aeotl";
    char *numbers = "43071";

    /* iterate through each character in str */
    for (i = 0; str[i] != '\0'; i++)
    {
        /* iterate through each letter in letters */
        for (j = 0; letters[j] != '\0'; j++)
        {
            /* if the current character in str matches a letter in letters */
            if (str[i] == letters[j] || str[i] == letters[j] - 32)
            {
                /* replace the current character with the corresponding number */
                str[i] = numbers[j];
            }
        }
    }

    return str;
}



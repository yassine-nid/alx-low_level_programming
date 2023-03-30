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
    char leet_map[256] = {0};

    /* populate the leet_map array with the encoding rules */
    leet_map['a'] = '4';
    leet_map['A'] = '4';
    leet_map['e'] = '3';
    leet_map['E'] = '3';
    leet_map['o'] = '0';
    leet_map['O'] = '0';
    leet_map['t'] = '7';
    leet_map['T'] = '7';
    leet_map['l'] = '1';
    leet_map['L'] = '1';

    /* iterate through each character in str */
    for (i = 0; str[i] != '\0'; i++)
    {
        /* check if the character should be encoded */
        if (leet_map[str[i]] != 0)
            str[i] = leet_map[str[i]];
    }

    return str;
}


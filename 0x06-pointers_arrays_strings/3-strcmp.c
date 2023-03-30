#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: an integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2
 */
int _strcmp(char *s1, char *s2)
{
    int i = 0;

    /* compare corresponding characters of s1 and s2 */
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;

    /* return the difference between the last compared characters */
    return s1[i] - s2[i];
}


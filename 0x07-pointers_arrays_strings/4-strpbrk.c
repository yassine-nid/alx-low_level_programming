#include "main.h"

/**
 * _strpbrk-searches a string for any of set of bytes
 * @s: string
 * @accept: character to look for
 *
 * Return: pointer to string
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}

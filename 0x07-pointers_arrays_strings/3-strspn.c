#include "main.h"

/**
 * _strspn-gets the length of a prefix substring
 * @s: sting to check
 * @accept: string of suffix
 *
 * Return: number of bytes in the segment of s which consist only of bytes from accep
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (!accept[j])
			break;
	}

	return (n);
}

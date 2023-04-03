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
	int l = 0;
	int l1 = 0;
	int i;
	int j;

	while (*accept != '\0')
		l++;
	while (*s != '\0')
		l1++;
	for (i = 0; i < l1; i++)
	{
		if (n != i)
			break;
		for (j = 0; j < l; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
	}
	return (n);
}

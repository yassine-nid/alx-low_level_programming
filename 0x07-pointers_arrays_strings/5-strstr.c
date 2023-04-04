#include "main.h"

/**
 * _strstr-locates substring
 * @haystack: string
 * @needle: substring
 *
 * Return: the beginning of the located substring or null
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] != needle[j])
				break;
		}
		if (!needle[j])
			return (hastack + i);
	}
	return (NULL);
}

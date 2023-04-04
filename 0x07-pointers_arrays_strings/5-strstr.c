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
	
	if (*needle == 0)
		return (haystack);
	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}

	return (NULL);
}

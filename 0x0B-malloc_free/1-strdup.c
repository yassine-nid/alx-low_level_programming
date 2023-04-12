#include "main.h"

/**
 * _strdup- allocate space in memory contain a string
 * @str: string
 *
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	int l;
	int i;
	char *p;

	if (str == NULL)
		return (NULL);
	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	p = (char *) malloc(l * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		p[i] = str[i];
	}
	return (p);
}

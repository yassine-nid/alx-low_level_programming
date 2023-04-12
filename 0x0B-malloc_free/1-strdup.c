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

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	if (str == NULL)
		return (NULL);
	p = (char *) malloc(l * sizeof(char));
	for (i = 0; i < l; i++)
	{
		p[i] = str[i];
	}
	return (p);
}

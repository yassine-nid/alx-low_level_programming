#include "main.h"

/**
 * _strcat-concatenates two strings
 * @dest:the return value
 * @src: the source string
 *
 * Return: concatenates string
 */

char *_strcat(char *dest, char *src)
{
	char *p;

	p = dest;
	while (*p != '\0')
	{
		p++;
	}

	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	return (dest);
}

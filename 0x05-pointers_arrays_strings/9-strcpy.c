#include "main.h"

/**
 * _strcpy-copie string to a pointer
 * @dest:the distination
 * @src: the source
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest,char *src)
{
	char *c = *dest;

	while (*(c - 1) != '\0')
	{
		*c = *src;
		c++;
		src++;
	}
	return (*dest);
}


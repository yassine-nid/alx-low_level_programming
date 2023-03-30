#include "main.h"

/**
 * _strncat-concatenates two strings
 * @dest: distination
 * @src: source
 * @n: number of bites
 *
 * Return: poiter to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p;
	
	p = dest;
	while (*p != '\0')
		p++;

	while (*src != '\0' && n > 0)
	{
		p = src;
		p++;
		src++;
		n--;
	}
	(p + 1) = '\0';
	return (dest);
}

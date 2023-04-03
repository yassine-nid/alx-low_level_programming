#include "main.h"

/**
 * _memcpy- copies memory area
 * @dest: pointer to the distination
 * @src: pointer to source
 * @n: nbr on char to cp
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

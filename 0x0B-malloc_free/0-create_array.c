#include "main.h"

/**
 * create_array - create an array of chars
 * @size: size of the array
 * @c: the char of the initialization
 *
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = (char *) malloc(size);
	if (p == NULL)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			p[i] = c;
		return (p);
	}
}
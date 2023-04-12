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

	p = (char*) malloc(size);
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
		while ( size > 0)
		{
			*p = c;
			p++;
			size--;
		}
		return (p);
	}
}

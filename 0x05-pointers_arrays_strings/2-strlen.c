#include "main.h"

/**
 * _strlen- returns the length of a string
 * @s: pointer to a sting
 *
 * Return: the let of the string
 */

int _strlen(char *s)
{
	int l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	return l;
}

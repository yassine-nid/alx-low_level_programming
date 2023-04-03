#include "main.h"

/**
 * _strchr- locates a character in a string
 * @s: pointer to string
 * @c: character to find
 *
 * Return: pointer to char or null if the char doesn't exist
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

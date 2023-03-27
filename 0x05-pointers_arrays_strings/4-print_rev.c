#include "main.h"

/**
 * print_rev-prints a string,in reverse, followed by a new line
 * @s: pointer to  char
 */

void print_rev(char *s)
{
	char *c;

	c = s;
	while (*c != '\0')
	{
		c++;
	}
	if (*c != *s)
	{
		c--;
		do {
			_putchar(*c);
			c--;
		} while (c != s);
		_putchar(*c);
	}
	_putchar('\n');
}

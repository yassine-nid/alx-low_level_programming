#include "main.h"

/**
 * pointend- point to the end of string
 * @s: string to print
 */
void pointend(char *s)
{
	if (*s == '\0')
		return ();
	s++;
	pointend(s);
}

/**
 * print-prints a string in reverse
 * @p: string to print
 * @s: stop point
 */

void print(char *p, *s)
{
	_putchar(*p);
	if (*p == *s)
		return ();
	else
		print(p - 1, s);
}

/**
 * _print_rev_recursion-prints a string in reverse
 * @s: string to print
 */

void _print_rev_recursion(char *s)
{
	char *p;

	p = s;
	pointend(p);
	print(p - 1, s);
}

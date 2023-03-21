#include "main.h"

/**
 * print_alphabet_x10-print 10 times the alphabet
 */

void print_alphabet_x10(void)
{
	int i;
	char c = 'a';
	for (i = 0; i < 10; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		c = 'a';
		_putchar('\n');
	}
}


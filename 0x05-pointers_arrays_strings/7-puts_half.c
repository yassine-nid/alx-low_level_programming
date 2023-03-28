#include "main.h"

/**
 * puts_half-prints half of a string
 * @str: pointer to string
 */

void puts_half(char *str)
{
	int l = 0;
	int i;

	while (*(str + l) != '\0')
	{
		l++;
	}
	for (i = (l -1) / 2; i < l; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

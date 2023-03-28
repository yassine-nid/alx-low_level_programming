#include "main.h"

/**
 * rev_string-revers a string
 * @s: pointer to  char
 */

void rev_string(char *s)
{
	char *c;
	char t;
	int l = 0;
	int i;

	c = s;
	while (*c != '\0')
	{
		c++;
		l++;
	}
	for (i = 0; i < l / 2; i++)
	{
		t = *(s + i);
		*(s + i) = *(s + l - i - 1);
		*(s + l - i - 1) = t;
	}
}

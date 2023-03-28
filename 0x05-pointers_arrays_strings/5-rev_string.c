#include "main.h"

/**
 * rev_string-revers a string
 * @s: pointer to  char
 */

void rev_string(char *s)
{
        char *c;
	char tmp;

        c = s;
        while (*c != '\0')
        {
                c++;
        }
	c--;
        while (c != s)
        {
		tmp = *c;
		*c = *s;
		*s = tmp;
		c--;
		s++;
        }
}

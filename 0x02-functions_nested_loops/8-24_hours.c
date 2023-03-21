#include "main.h"

/**
 * jack_bauer-prints every minute
 */

void jack_bauer(void)
{
	int h1;
	int h2 = '0';
	int m1;
	int m2;

	while (h2 < '3')
	{
		for (h1 = '0'; h1 <= '9'; h1++)
		{
			if (h2 == '2' || h1 == '4')
				break;
			for (m2 = '0'; m2 < '7'; m2++)
			{
				for (m1 = '0'; m1 <= '9'; m1++)
				{
					_putchar(h2);
					_putchar(h1);
					_putchar(m2);
					_putchar(m1);
					_putchar('\n');
				}
			}
		}
		h2++;
	}
}

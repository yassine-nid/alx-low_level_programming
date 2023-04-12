#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: the argument count.
 * @av: the argument vector.
 *
 * Return: If memory allocation fails, if ac == 0 or if av == NULL,
 *         returns NULL. Otherwise, returns a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, pos = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			for (j = 0; av[i][j] != '\0'; j++)
				len++;
			len++;
		}
	}

	str = malloc(sizeof(char) * (len + ac));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			for (j = 0; av[i][j] != '\0'; j++)
				str[pos++] = av[i][j];
			str[pos++] = '\n';
		}
	}

	str[pos] = '\0';

	return (str);
}


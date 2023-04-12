#include "main.h"

/**
 * strtow - splits a string into words.
 * @str: the string to split.
 *
 * Return: If memory allocation fails, if str == NULL or if str == "",
 *         returns NULL. Otherwise, returns a pointer to the array of words.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, wc = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			wc++;
	}

	words = malloc(sizeof(char *) * (wc + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < wc; j++)
	{
		if (str[j] != ' ')
		{
			for (len = 0, k = j; str[k] != ' ' && str[k] != '\0'; k++, len++)
				;
			words[i] = malloc(sizeof(char) * (len + 1));

			if (words[i] == NULL)
			{
				for (i--; i >= 0; i--)
					free(words[i]);
				free(words);
				return (NULL);
			}

			for (k = 0; j < k + len; j++, k++)
				words[i][k] = str[j];

			words[i][k] = '\0';
			i++;
		}
	}

	words[i] = NULL;

	return (words);
}


#include "main.h"
/**
 * count_words - counts the number of words in a string.
 * @str: the string to count words from.
 *
 * Return: the number of words in the string.
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}

	return (count);
}

/**
 * strtow - splits a string into words.
 * @str: the string to split.
 *
 * Return: a pointer to an array of strings containing the words,
 *         or NULL if the function fails.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = count_words(str);

	words = malloc(sizeof(char *) * (count + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < count; i++)
	{
		while (str[k] == ' ' && str[k] != '\0')
			k++;

		len = 0;

		while (str[k + len] != ' ' && str[k + len] != '\0')
			len++;

		words[i] = malloc(sizeof(char) * (len + 1));

		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);

			free(words);
			return (NULL);
		}

		for (j = 0; j < len; j++)
			words[i][j] = str[k + j];

		words[i][j] = '\0';
		k += len;
	}

	words[i] = NULL;

	return (words);
}


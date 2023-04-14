#include "main.h"

/**
 * array_range - Creates an array of integers from min to max (inclusive)
 * @min: The minimum value to include in the array
 * @max: The maximum value to include in the array
 *
 * Return: On success, a pointer to the newly created array
 * On failure, returns NULL
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}


#include "dog.h"
#include "main.h"
/**
 * free_dog - frees memory allocated for a dog_t variable
 * @d: pointer to the dog_t variable to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}


#include "main.h"

/**
 * print_dog - prints the contents of a struct dog variable
 * @d: pointer to the struct dog variable to print
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    printf("Name: %s\n", d->name ? d->name : "(nil)");
    printf("Age: %.6f\n", d->age);
    printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}


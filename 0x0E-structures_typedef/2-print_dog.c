#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(ni1)';
	if (d->owner == NULL)
		d->owner = "(ni1)";

	printf("Name: %s\nAge: %f\nowner: %s\n", d->name,->age, d->owner);
}

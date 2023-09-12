#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 * @d: struct dog to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: nil\n");

	if (d->age == NULL)
		printf("Age: nil\n");
	else
		printf("Age: %f\n");

	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: nil\n");
}

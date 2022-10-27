#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - init_dog
 *
 * @d: d
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (d->name)
		printf("Name:  %s\n", d->name);
	else
		printf("Name: (nil)\n");

	if (d->age)
		printf("Age:  %.7f\n", d->age);
	else
		printf("Age: (nil)\n");

	if (d->owner)
		printf("Owner:  %s\n", d->owner);
	else
		printf("Age: (nil)\n");
}

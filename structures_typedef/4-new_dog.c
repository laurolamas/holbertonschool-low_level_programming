#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new_dog
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = NULL;
	
	new_dog = malloc(sizeof(char *) + sizeof(int) + sizeof(char *));

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}

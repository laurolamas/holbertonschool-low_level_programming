#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - aaaaaaa
 * @s: aaaaaaa
 * Return: bbbbbbb
 */

int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		continue;

	return	(i);
}

/**
 * _strcpy - aaaaaaa
 *
 * @dest: dest
 * @src: src
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup - strdup
 *
 * @str: str
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	int i;
	char *cpy = NULL;

	if (str)
	{
		if (str[0] == '\0')
		{
			cpy = malloc(1);
			cpy[0] = '\0';
			return (cpy);
		}

		for (i = 0; str[i] != '\0'; i++)
			continue;

		cpy = malloc(i + 1);

		if (cpy)
		{

			for (i = 0; str[i] != '\0'; i++)
				cpy[i] = str[i];

			cpy[i] = '\0';

			return (cpy);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}

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
	char *namecpy = NULL;
	char *ownercpy = NULL;

	namecpy = _strdup(name);
	if (!namecpy)
		return (NULL);

	ownercpy = _strdup(owner);
	if (!ownercpy)
	{
		free(namecpy);
		return (NULL);
	}

	new_dog = malloc(sizeof(struct dog));

	if(new_dog)
	{
		new_dog->name = namecpy;
		new_dog->age = age;
		new_dog->owner = ownercpy;
		
		return (new_dog);
	}
	else
	{
		free(namecpy);
		free(ownercpy);
		return (NULL);
	}
}

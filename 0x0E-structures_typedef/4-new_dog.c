#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - gets the length of a string
 * @str: the string
 * Return: length of string
 */

int _strlen(char *str)
{
	int m = 0;

	while (str[m] != '\0')
		m++;
	return (m);
}

/**
 * _strcpy - copies a string
 * @dest: Destination of string
 * @src: source of string
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int length, m;

	length = _strlen(src);

	for (m = 0; m < length; m++)
	{
		dest[m] = src[m];
	}
	dest[m] = '\0';
	return (dest);
}



/**
 * new_dog - A function that creates a new dog
 * @name: name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: NULL if function fails, else return pointer to new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nw_dog;
	int name_length, owner_length;

	name_length = _strlen(name);
	owner_length = _strlen(owner);

	nw_dog = malloc(sizeof(dog_t));
	if (nw_dog == NULL)
		return (NULL);
	nw_dog->name = malloc(sizeof(char) * (name_length + 1));
	if (nw_dog->name == NULL)
	{
		free(nw_dog);
		return (NULL);
	}
	nw_dog->owner = malloc(sizeof(char) * (owner_length + 1));
	if (nw_dog->owner == NULL)
	{
		free(nw_dog->name);
		free(nw_dog);
		return (NULL);
	}
	_strcpy(nw_dog->name, name);
	_strcpy(nw_dog->owner, owner);
	nw_dog->age = age;
	return (nw_dog);
}


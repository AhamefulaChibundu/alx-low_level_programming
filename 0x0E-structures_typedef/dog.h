#ifndef DOG_H
#define DOG_H

/**
 * File: dog.h file defines a new type of struct with tagname dog
 * struct dog - A new type describing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

struct dog my_dog;

#endif

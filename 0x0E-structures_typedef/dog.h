#ifndef DOG_H
#define DOG_H


/*
 * File: dog.h
 * Description: Header file that defines a new type struct with tagname dog.
 */

/**
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

typedef struct dog my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(my_dog *d);

#endif

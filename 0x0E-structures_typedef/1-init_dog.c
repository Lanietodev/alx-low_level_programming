#include "dog.h"
#include <stdio.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: pointer to first member
 * @age: pointer to second member
 * @owner: pointer to third member
 * Return: pointer to struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}

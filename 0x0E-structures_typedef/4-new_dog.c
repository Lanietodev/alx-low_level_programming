#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog with the given name, age, and owner.
 *
 * @name:  The name of the dog.
 * @age:   The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the newly created dog structure, or NULL if
 *         memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i = 0, j = 0, k;

dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
while (name[i] != '\0')
{
i++;
}
new_dog->name = (char *)malloc(i + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
for (k = 0; k <= i; k++)
{
new_dog->name[k] = name[k];
}
new_dog->name[k] = '\0';
while (owner[j] != '\0')
{
j++;
}
new_dog->owner = (char *)malloc(j + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
for (k = 0; k <= j; k++)
{
new_dog->owner[k] = owner[k];
}
new_dog->owner[k] = '\0';
new_dog->age = age;
return (new_dog);
}

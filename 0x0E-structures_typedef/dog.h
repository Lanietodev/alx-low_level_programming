#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure about dog's name, age and owner
 * @name ptr: First member
 * @age: Second member
 * @owner ptr: Third member
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */

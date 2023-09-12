#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: the new dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t my_dog;

	strcpy(my_dog.name, name);
	strcpy(my_dog.owner, owner);
	my_dog.age = age;

	return (&my_dog);
}

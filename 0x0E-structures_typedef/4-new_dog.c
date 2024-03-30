#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Name of the dog owner
 *
 * Return: a new struct representing the do on success
 * Returns `NULL' if malloc fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int lname, lowner, i;

	if (name == NULL || owner == NULL)
		return NULL;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		;
	lname = i + 1;
	for (i = 0; owner[i]; i++)
		;
	lowner = i + 1;

	dog->name = malloc(lname * sizeof(char));
	if (dog->name == NULL)
	{
		free (dog);
		return (NULL);
	}
	dog->owner = malloc(lowner * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	
	dog->age = age;
	for (i = 0; i < lname; i++)
		dog->name[i] = name[i];
	for (i = 0; i < lowner; i++)
		dog->owner[i] = owner[i];

	return (dog);
}

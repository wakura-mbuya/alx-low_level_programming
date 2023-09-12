#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog initialized
 * @name: name of the dog
 * @age: Age of the dog
 * @owner: owner of the dog
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog dog_;

	dog_.name = name;
	dog_.age = age;
	dog_.owner = owner;

	d = &dog_;
}

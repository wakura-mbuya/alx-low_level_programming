#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: the name of the person
 * @f: the function that prints the name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

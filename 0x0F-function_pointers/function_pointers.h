#ifndef MY_HEADER_H
#define MY_HEADER_H

void _putchar(int);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif

#include "main.h"

/**
 * main: entry point
 * Return: Always 0 (success)
 */
int main(void){
	print_alphabet();
	return (0);
}

/**
 * print_alphabet: Prints the alphabet followed by new line
 */
void print_alphabet(void)
{
	char i;
	for(i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

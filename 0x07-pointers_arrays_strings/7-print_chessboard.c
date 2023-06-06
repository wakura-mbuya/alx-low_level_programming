#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints the chessboard
 * @a: input pointer giving dimensions of the chessboard
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	unsigned int k, l;

	l = 0;
	for (k = 0; k < 64; ++k)
	{
		if (k % 8 == 0 && k != 0)
		{
			l = k;
			putchar('\n');
		}
		putchar(a[k / 8][k - l]);
	}
	putchar('\n');
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 * @argc: number of command line arguments passed
 * @argv: List of command line arguments passed when the program is executed
 *
 * Description: This program prints the minimum number of coins to make change
 * for an amount of money
 * The money whose number of coins is to be found is passed as a command line
 * argument when the program is executed
 * If the number of command line arguments to the program is not exactly 1,
 * the program prints Error followed by a new line and returns 1
 * If the number passed as the argument is negative, the program prints 0,
 * followed by a new line
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int cents, rem, count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		count = 0;
		cents = atoi(argv[1]);

		count = cents / 25;
		rem = cents % 25;

		if (rem > 9)
		{
			count += (rem / 10);
			rem = rem % 10;
		}

		if (rem > 4)
		{
			count += (rem / 5);
			rem = rem % 5;
		}

		if (rem > 1)
		{
			count += (rem / 2);
			rem = rem % 2;
		}
		count += rem;
		printf("%d\n", count);
	}
	return (0);
}

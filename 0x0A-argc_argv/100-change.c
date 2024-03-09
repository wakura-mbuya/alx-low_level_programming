#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry
 * @argc: number of cmd ln args
 * @argv: array of cmd ln args as strings
 *
 * prints the minimum numbe of coints to make change for an amount of money
 * if the amount is negative, print 0
 * if no amount is given, print Error
 * if more than one amount is given, print Error
 *
 * Return: 0 on success, 1 on Error
 */
int main(int argc, char **argv)
{
	int cents;	/* amount passed */
	int _25, _10, _5, _2; /* number of 25, 10, 5 and 2 coins */
	int change = 0; /* coins to be return */

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		change += (cents / 25);
		_25 = cents % 25;
		change += _25 / 10;
		_10 = _25 % 10;
		change += _10 / 5;
		_5 = _10 % 5;
		change += _5 / 2;
		_2 = _5 % 2;
		change += _2;
	}
	printf("%d\n", change);
	return (0);
}


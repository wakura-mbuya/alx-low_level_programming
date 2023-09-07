#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry to program
 * @argc: commandline args count
 * @argv: commandline args
 * Return: 0 on success, 1 on Error/Fail
 */
int main(int argc, char **argv)
{
	int change = 0, x, y, z, i, j, num;

	if (argc == 2)
	{
		num = atoi(argv[1]);
		x = num % 25;
		change += num / 25;

		y = x % 10;
		change += x / 10;

		z = y % 5;
		change += y / 5;

		i = z % 2;
		change += z / 2;

		change += i;

		printf("%d\n", change);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

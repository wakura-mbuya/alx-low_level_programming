#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	const char *str;
	unsigned int i;

	if (n > 0)
	{
		va_list args;
		va_start(args, n);

		for (i = 0; i < n - 1; i++)
		{
			str = va_arg(args, const char *);
			if (separator)
			{
				if (str)
					printf("%s%s", str, separator);
				else
					printf("(nil)%s", separator);
			}
			else
			{
				if (str)
					printf("%s", str);
				else
					printf("(nil)");
			}
		}
		str = va_arg(args, const char *);
		if (str)
			printf("%s\n", str);
		else
			printf("(nil)\n");

		va_end(args);
	}
}

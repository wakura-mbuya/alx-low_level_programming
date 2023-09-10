/**
 * _strcmp - compares two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 * Return: Non 0 value if the strings are not equal,
 * 0 if the strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;

	/* Get the lengths of the 2 strings */
	while (*s1 != '\0')
	{
		len1++;
		s1++;
	}
	s1 -= len1;

	while (*s2 != '\0')
	{
		len2++;
		s2++;
	}
	s2 -= len2;

	/* check if the strings have equal length */
	if (len2 > len1)
		return (-15);
	else if (len1 > len2)
		return (15);
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
			return (15);
		s2++;
		s1++;
	}
	return (0);
}

/**
 * _strncpy - copies n bytes of src to dest string
 * @src: the source string to be copied
 * @dest: the destination string
 * @n: bytes of src to be copied to dest
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

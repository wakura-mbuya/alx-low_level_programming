/**
 * _strncpy - copies n bytes of src to dest string
 * @src: the source string to be copied
 * @dest: the destination string
 * @n: bytes of src to be copied to dest
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;
	
	for (; n > 0; n--)
	{
		*dest = *src;
		count++;
		if (*src == '\0')
			break;
		dest++;
		src++;
	}

	return (dest + count);
}

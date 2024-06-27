/**
 * _strncat - concatenate two strings up to n characters
 * @dest: destination of the concatinated string in
 * @src: string to add to the dest
 * @n: number of characters to add
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (i < n)
	{
		*dest = *src;
		if (*src == '\0')
			break;
		dest++;
		src++;
	}

	return (result);
}

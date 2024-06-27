/**
 * _strncpy - copy a string from src to dest up to n characters
 * @dest: destination of the string to copy to
 * @src: course of the string to copy from
 * @n: number of characters to copy
 * Return: char *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		*dest = *src;
		if (*src == '\0')
			break;
		dest++;
		src++;
		i++;
	}
	dest -= i;

	return (dest);
}

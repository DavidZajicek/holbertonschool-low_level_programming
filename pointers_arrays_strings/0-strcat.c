/**
 * _strcat - concatenate two strings
 * @dest: destination of the concatinated string in
 * @src: string to add to the dest
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (result);
}

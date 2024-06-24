/**
 * _strlen - returns the length of the given string
 * @s: string to count
 * Return: 0
 */
int _strlen(char *s)
{
	int count;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}

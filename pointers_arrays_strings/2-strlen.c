/**
 * _strlen - returns the length of the given string
 * @s: string to count
 * Return: 0
 */
int _strlen(char *s)
{
	int count;

	while (*s)
		count += 1;
	return (count);
}

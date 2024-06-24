/**
 * _strlen - returns the length of the given string
 * @s: string to count
 * Return: 0
 */
int _strlen(char *s)
{
	int count;
	char *temp = *s;

	for (temp = s ; *temp != 0 ; temp++)
		count++;
	return (count);
}

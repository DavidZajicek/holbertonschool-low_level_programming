/**
 * _strlen - returns the length of the given string
 * @s: string to count
 * Return: 0
 */
int _strlen(char *s)
{
	int i, count;
	char temp = *s;

	for (i = 0 ; temp[i] != 0 ; i++)
		count += 1;
	return (count);
}

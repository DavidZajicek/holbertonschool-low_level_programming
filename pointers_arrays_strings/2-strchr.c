/**
 * _strchr - find character in string
 * @s: string memory address
 * @c: character to find
 * Return: Pointer to the first occurance of c in string, or NULL
 */
char *_strchr(char *s, char c)
{
	char *result;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			result = &s[i];
		i++;
	}
	return (result);
}

/**
 * _strchr - find character in string
 * @s: string memory address
 * @c: character to find
 * Return: Pointer to the first occurance of c in string, or NULL
 */
char *_strchr(char *s, char c)
{
	char nil[10] = "nil";
	char *result = nil;

	while (*s != '\0')
	{
		if (*s == c)
		{
			result = s;
			break;
		}
		s++;
	}
	return (result);
}

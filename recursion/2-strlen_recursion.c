/**
 * _strlen_recursion - return the length of a string
 * @s: string to count
 * Return: length of string provided
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}

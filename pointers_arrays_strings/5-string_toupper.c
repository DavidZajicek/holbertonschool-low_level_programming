/**
 * string_toupper - convert all lowercase letters to uppercase
 * @str: given string to convert
 * Return: starting char *
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str -= 32;
		str++;
	}
	return (ptr);
}

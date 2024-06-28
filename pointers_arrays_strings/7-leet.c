/**
 * leet - convert string into leet speak (sorta)
 * @str: string to convert
 * Return: char *
 */
char *leet(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if (*str == 65 || *str == 97)
			*str = 52;
		else if (*str == 69 || *str == 101)
			*str = 51;
		else if (*str == 79 || *str == 111)
			*str = 48;
		else if (*str == 84 || *str == 116)
			*str = 55;
		else if (*str == 76 || *str == 108)
			*str = 49;
		str++;
	}
	return (ptr);
}

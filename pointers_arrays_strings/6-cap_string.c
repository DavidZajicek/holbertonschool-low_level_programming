/**
 * cap_string - capitalise the first letter of each word in a string
 * @str: the string to capitalise
 * Return: the char * at the start of the str
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int new_word = 1;

	while (*str != '\0')
	{
		if (*str <= 34 || *str == 40 || *str == 41 ||
		    *str == 44 || *str == 46 || *str == 59 ||
		    *str == 63 || *str == 123 || *str == 125)
		{
			new_word = 1;
		}
		if ((*str >= 97 && *str <= 122) && new_word)
		{
			*str -= 32;
			new_word = 0;
		}
		else
		{
			new_word = 0;
		}
		str++;
	}
	return (ptr);
}

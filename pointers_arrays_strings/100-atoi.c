/**
 *handle_mix - handle signs
 * @s: character to handle
 * @sign: pointer to the sign in memory
 * Return: 0
 */
int handle_mix(char s, int *sign)
{
	if (s == 43)
	{
		*sign = *sign + 1;
	}
	if (s == 45)
	{
		*sign = *sign - 1;
	}
	return (0);
}

/**
 * _atoi - converts a string into an int
 * @s: the string to convert
 * Return: the int from the string, 0 if no int found in string
 */
int _atoi(char *s)
{
	unsigned int temp = 0;
	int result = 0;
	int sign = 0;
	int found = 0;

	while (*s != '\0')
	{
		if (*s < 48 || *s > 57)
		{
			if (found != 0)
			{
				break;
			}
			handle_mix(*s, &sign);
		}
		else
		{
			temp = temp * 10 + *s - 48;
			if (sign < 0)
			{
				result = -temp;
			}
			else if (temp <= 2147483647)
			{
				result = temp;
			}
			found++;
		}
		s++;
	}
	return (result);
}

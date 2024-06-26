/**
 * _atoi - converts a string into an int
 * @s: the string to convert
 * Return: the int from the string, 0 if no int found in string
 */
int _atoi(char *s)
{
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
			if (*s == 43)
			{
				sign++;
			}
			if (*s == 45)
			{
				sign--;
			}
		}
		else
		{
			result = result * 10 + *s - '0';
			found++;
		}
		s++;
	}
	if (sign < 0)
		result = -result;
	return (result);
}

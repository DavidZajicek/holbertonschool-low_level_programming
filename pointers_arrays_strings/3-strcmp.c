/**
 * _strcmp - compare strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if the same, the number if different
 */
int _strcmp(char *s1, char *s2)
{
	int total = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		total += *s1 - *s2;
		if (*s1 != '\0')
			s1++;
		if (*s2 != '\0')
			s2++;
	}

	return (total);
}

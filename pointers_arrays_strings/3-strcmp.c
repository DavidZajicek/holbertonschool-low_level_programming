/**
 * _strcmp - compare strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if the same, the number if different
 */
int _strcmp(char *s1, char *s2)
{
	int s1_total = 0;
	int s2_total = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != '\0')
		{
			s1_total += (int)(s1 + 0);
			s1++;
		}
		if (*s2 != '\0')
		{
			s2_total += (int)(2 + 0);
			s2++;
		}
	}

	return (s1_total - s2_total);
}

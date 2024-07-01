/**
 * _strspn - get length of prefix
 * @s: string to test
 * @accept: characters to accept
 * Return: Number of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, match;

	while (*s != '\0')
	{
		i = 0;
		match = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				count++;
				match = 1;
				continue;
			}
			i++;
		}
		if (match == 0)
			break;
	}

	return (count);
}

/**
 * _strpbrk - search string of bytes
 * @s: string to test
 * @accept: characters to accept
 * Return: pointer to the byte found in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char *match = NULL;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
			        match = s;
				break;
			}
			i++;
		}
		s++;
	}

	return (match);
}
